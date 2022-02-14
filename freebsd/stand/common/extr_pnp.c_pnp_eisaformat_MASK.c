
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



char *
FUNC_0(uint8_t *VAR_0)
{
    static char VAR_1[8];
    const char VAR_2[] = "0123456789abcdef";

    VAR_1[0] = '@' + ((VAR_0[0] & 0x7c) >> 2);
    VAR_1[1] = '@' + (((VAR_0[0] & 0x3) << 3) + ((VAR_0[1] & 0xe0) >> 5));
    VAR_1[2] = '@' + (VAR_0[1] & 0x1f);
    VAR_1[3] = VAR_2[(VAR_0[2] >> 4)];
    VAR_1[4] = VAR_2[(VAR_0[2] & 0xf)];
    VAR_1[5] = VAR_2[(VAR_0[3] >> 4)];
    VAR_1[6] = VAR_2[(VAR_0[3] & 0xf)];
    VAR_1[7] = 0;
    return(VAR_1);
}
