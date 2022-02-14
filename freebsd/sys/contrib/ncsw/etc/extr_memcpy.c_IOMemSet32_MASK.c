
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

void * FUNC_3(void* VAR_0, uint8_t VAR_1, uint32_t VAR_2)
{
    uint32_t VAR_3;
    uint32_t *VAR_4;
    uint8_t *VAR_5;

    VAR_5 = (uint8_t*)(VAR_0);


    VAR_3 = (uint32_t) VAR_1;
    VAR_3 |= (VAR_3 << 8);
    VAR_3 |= (VAR_3 << 16);


    while((FUNC_0(VAR_5) & 3) && VAR_2)
    {
        FUNC_2(*VAR_5, VAR_1);
        VAR_5++;
        VAR_2--;
    }


    VAR_4 = (uint32_t*)(VAR_5);
    while (VAR_2 >> 2)
    {
        FUNC_1(*VAR_4, VAR_3);
        VAR_4++;
        VAR_2 -= 4;
    }


    VAR_5 = (uint8_t*)(VAR_4);
    while (VAR_2--)
    {
        FUNC_2(*VAR_5, VAR_1);
        VAR_5++;
    }

    return VAR_0;
}
