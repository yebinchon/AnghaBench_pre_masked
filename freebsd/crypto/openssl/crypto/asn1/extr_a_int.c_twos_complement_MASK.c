
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned char *VAR_0, const unsigned char *VAR_1,
                            size_t VAR_2, unsigned char VAR_3)
{
    unsigned int VAR_4 = VAR_3 & 1;


    VAR_0 += VAR_2;
    VAR_1 += VAR_2;

    while (VAR_2-- != 0) {
        *(--VAR_0) = (unsigned char)(VAR_4 += *(--VAR_1) ^ VAR_3);
        VAR_4 >>= 8;
    }
}
