
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ pSrc64 ;


 int FUNC_0 (int *) ;

void * FUNC_1(void* VAR_0,void* VAR_1, uint32_t VAR_2)
{
    uint32_t VAR_3;
    uint32_t VAR_4;
    uint64_t VAR_5;
    uint64_t VAR_6;
    uint64_t *VAR_7;
    uint64_t *VAR_8;
    uint8_t *VAR_9;
    uint8_t *VAR_10;

    VAR_9 = (uint8_t*)(VAR_1);
    VAR_10 = (uint8_t*)(VAR_0);




    while((FUNC_0(VAR_9) & 7) && VAR_2)
    {
        *VAR_10++ = *VAR_9++;
        VAR_2--;
    }


    while((FUNC_0(VAR_10) & 7) && VAR_2)
    {
        *VAR_10++ = *VAR_9++;
        VAR_2--;
    }


    VAR_3 = (uint32_t)((FUNC_0(VAR_9) & 7) << 3);
    VAR_4 = 64 - VAR_3;


    if (VAR_3 == 0)
    {

        VAR_7 = (uint64_t*)(VAR_9);
        VAR_8 = (uint64_t*)(VAR_10);
        while (VAR_2 >> 3)
        {
            *VAR_8++ = *VAR_7++;
            VAR_2 -= 8;
        }
        VAR_9 = (uint8_t*)(VAR_7);
        VAR_10 = (uint8_t*)(VAR_8);
    }
    else
    {

        VAR_7 = (uint64_t*)(VAR_9 - (VAR_3 >> 3));
        VAR_8 = (uint64_t*)(VAR_10);
        VAR_5 = *VAR_7++;
        while(VAR_2 >> 4)
        {
            VAR_6 = *VAR_7;
            *VAR_8 = (VAR_5 << VAR_3) | (VAR_6 >> VAR_4);
            VAR_5 = VAR_6;
            VAR_7++;
            VAR_8++;
            VAR_2 -= 8;
        }
        VAR_10 = (uint8_t*)(VAR_8);
        VAR_9 = (uint8_t*)(VAR_7) - 8 + (VAR_3 >> 3);
    }


    while (VAR_2--)
        *VAR_10++ = *VAR_9++;

    return VAR_0;
}
