
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned char *VAR_0, size_t VAR_1)
{
    size_t VAR_2 = 8, VAR_3 = 0;

    VAR_0 += 8;
    do {
        --VAR_2;
        VAR_3 += VAR_0[VAR_2] + (VAR_1 & 0xff);
        VAR_0[VAR_2] = (unsigned char)VAR_3;
        VAR_3 >>= 8;
        VAR_1 >>= 8;
    } while (VAR_2 && (VAR_1 || VAR_3));
}
