
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static uint8_t FUNC_0(uint32_t VAR_0)
{
    uint8_t VAR_1 = 0;

    while (VAR_0)
        if (VAR_0 & 0x80000000)
            break;
        else
        {
            VAR_1++;
            VAR_0 <<= 1;
        }
    return VAR_1;

}
