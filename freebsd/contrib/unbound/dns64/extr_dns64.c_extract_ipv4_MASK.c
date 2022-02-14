
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(const uint8_t VAR_0[16], const int VAR_1)
{
    uint32_t VAR_2 = (uint32_t)VAR_0[VAR_1/8+0] << (24 + (VAR_1%8))
                  | (uint32_t)VAR_0[VAR_1/8+1] << (16 + (VAR_1%8))
                  | (uint32_t)VAR_0[VAR_1/8+2] << ( 8 + (VAR_1%8))
                  | (uint32_t)VAR_0[VAR_1/8+3] << ( 0 + (VAR_1%8));
    if (VAR_1/8+4 < 16)
        VAR_2 |= (uint32_t)VAR_0[VAR_1/8+4] >> (8 - VAR_1%8);
    return VAR_2;
}
