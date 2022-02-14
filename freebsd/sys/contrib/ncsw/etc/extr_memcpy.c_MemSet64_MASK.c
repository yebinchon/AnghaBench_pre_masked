
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (void**) ;

void * FUNC_1(void* VAR_0, uint8_t VAR_1, uint32_t VAR_2)
{
    uint64_t VAR_3;
    uint64_t *VAR_4;
    uint8_t *VAR_5;

    VAR_5 = (uint8_t*)(VAR_0);


    VAR_3 = (uint64_t) VAR_1;
    VAR_3 |= (VAR_3 << 8);
    VAR_3 |= (VAR_3 << 16);
    VAR_3 |= (VAR_3 << 24);
    VAR_3 |= (VAR_3 << 32);


    while((FUNC_0(VAR_5) & 7) && VAR_2)
    {
        *VAR_5++ = VAR_1;
        VAR_2--;
    }


    VAR_4 = (uint64_t*)(VAR_5);
    while (VAR_2 >> 4)
    {
        *VAR_4++ = VAR_3;
        VAR_2 -= 8;
    }


    VAR_5 = (uint8_t*)(VAR_4);
    while (VAR_2--)
        *VAR_5++ = VAR_1;

    return VAR_0;
}
