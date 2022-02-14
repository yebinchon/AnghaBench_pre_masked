
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned char *VAR_0, const unsigned char *VAR_1, int VAR_2)
{
    int VAR_3;
    unsigned char VAR_4 = VAR_1[0], VAR_5 = VAR_4 >> 7, VAR_6;


    for (VAR_3 = 0; VAR_3 < VAR_2 - 1; VAR_3++, VAR_4 = VAR_6)
        VAR_0[VAR_3] = (VAR_4 << 1) | ((VAR_6 = VAR_1[VAR_3 + 1]) >> 7);


    VAR_0[VAR_3] = (VAR_4 << 1) ^ ((0 - VAR_5) & (VAR_2 == 16 ? 0x87 : 0x1b));
}
