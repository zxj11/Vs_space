#include <stdio.h>

int main()
{

    int num = 0;

    int remainder = 0;

    int temp = 0;

    printf("please input num:");

    scanf("%d", &num);

    if (num % 10 == 0)
    {
        temp = num;
        printf("temp:%d", temp);
    }

    else
    {

        while (num % 10)
        {
            remainder = num % 10;

            temp = temp * 10 + remainder;

            num /= 10;
        }

        printf("temp:%d", temp);
    }

    return 0;
}