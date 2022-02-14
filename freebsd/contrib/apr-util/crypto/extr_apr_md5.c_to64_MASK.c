
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(char *VAR_0, unsigned long VAR_1, int VAR_2)
{
    static unsigned char VAR_3[] =
        "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    while (--VAR_2 >= 0) {
        *VAR_0++ = VAR_3[VAR_1&0x3f];
        VAR_1 >>= 6;
    }
}
