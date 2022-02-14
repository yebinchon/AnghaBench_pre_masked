
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(const unsigned char *VAR_0)
{
    unsigned char VAR_1;
    unsigned char VAR_2;
    unsigned int VAR_3;

    VAR_1 = (VAR_0[31] & 0x7f) ^ 0x7f;
    for (VAR_3 = 30; VAR_3 > 0; VAR_3--) {
        VAR_1 |= VAR_0[VAR_3] ^ 0xff;
    }
    VAR_1 = (((unsigned int) VAR_1) - 1U) >> 8;
    VAR_2 = (0xed - 1U - (unsigned int) VAR_0[0]) >> 8;

    return 1 - (VAR_1 & VAR_2 & 1);
}
