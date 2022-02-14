
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;



void * FUNC_0(void* VAR_0, void* VAR_1, uint32_t VAR_2)
{
    uint32_t VAR_3;

    for(VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
        *(((uint8_t*)(VAR_0)) + VAR_3) = *(((uint8_t*)(VAR_1)) + VAR_3);

    return VAR_0;
}
