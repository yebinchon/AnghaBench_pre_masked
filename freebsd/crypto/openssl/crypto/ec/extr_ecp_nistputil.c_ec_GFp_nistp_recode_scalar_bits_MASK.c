
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(unsigned char *VAR_0,
                                     unsigned char *VAR_1, unsigned char VAR_2)
{
    unsigned char VAR_3, VAR_4;

    VAR_3 = ~((VAR_2 >> 5) - 1);

    VAR_4 = (1 << 6) - VAR_2 - 1;
    VAR_4 = (VAR_4 & VAR_3) | (VAR_2 & ~VAR_3);
    VAR_4 = (VAR_4 >> 1) + (VAR_4 & 1);

    *VAR_0 = VAR_3 & 1;
    *VAR_1 = VAR_4;
}
