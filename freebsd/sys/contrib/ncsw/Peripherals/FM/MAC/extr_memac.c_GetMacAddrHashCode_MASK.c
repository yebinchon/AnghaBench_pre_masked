
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;



__attribute__((used)) static uint32_t FUNC_0(uint64_t VAR_0)
{
    uint64_t VAR_1, VAR_2;
    uint32_t VAR_3 = 0;
    uint8_t VAR_4, VAR_5;

    for (VAR_4=0; VAR_4<6; VAR_4++)
    {
        VAR_1 = VAR_0 & (uint64_t)0x01;
        VAR_0 >>= 1;

        for (VAR_5=0; VAR_5<7; VAR_5++)
        {
            VAR_2 = VAR_0 & (uint64_t)0x01;
            VAR_1 ^= VAR_2;
            VAR_0 >>= 1;
        }

        VAR_3 |= (VAR_1 << (5-VAR_4));
    }

    return VAR_3;
}
