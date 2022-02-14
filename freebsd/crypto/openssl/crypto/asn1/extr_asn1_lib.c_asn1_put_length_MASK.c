
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned char **VAR_0, int VAR_1)
{
    unsigned char *VAR_2 = *VAR_0;
    int VAR_3, VAR_4;
    if (VAR_1 <= 127)
        *(VAR_2++) = (unsigned char)VAR_1;
    else {
        VAR_4 = VAR_1;
        for (VAR_3 = 0; VAR_4 > 0; VAR_3++)
            VAR_4 >>= 8;
        *(VAR_2++) = VAR_3 | 0x80;
        VAR_4 = VAR_3;
        while (VAR_3-- > 0) {
            VAR_2[VAR_3] = VAR_1 & 0xff;
            VAR_1 >>= 8;
        }
        VAR_2 += VAR_4;
    }
    *VAR_0 = VAR_2;
}
