
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char*,unsigned char*,int *) ;
 int FUNC_1 (unsigned char*,int) ;

int
FUNC_2(unsigned char *VAR_0, const unsigned char *VAR_1,
                            unsigned long long VAR_2, const unsigned char *VAR_3,
                            const unsigned char *VAR_4)
{
    unsigned char VAR_5[16];
    unsigned char VAR_6[64];
    unsigned char VAR_7[32];
    unsigned int VAR_8;
    unsigned int VAR_9;

    if (!VAR_2) {
        return 0;
    }
    for (VAR_8 = 0; VAR_8 < 32; ++VAR_8) {
        VAR_7[VAR_8] = VAR_4[VAR_8];
    }
    for (VAR_8 = 0; VAR_8 < 8; ++VAR_8) {
        VAR_5[VAR_8] = VAR_3[VAR_8];
    }
    for (VAR_8 = 8; VAR_8 < 16; ++VAR_8) {
        VAR_5[VAR_8] = 0;
    }
    while (VAR_2 >= 64) {
        FUNC_0(VAR_6, VAR_5, VAR_7, ((void*)0));
        for (VAR_8 = 0; VAR_8 < 64; ++VAR_8) {
            VAR_0[VAR_8] = VAR_1[VAR_8] ^ VAR_6[VAR_8];
        }
        VAR_9 = 1;
        for (VAR_8 = 8; VAR_8 < 16; ++VAR_8) {
            VAR_9 += (unsigned int)VAR_5[VAR_8];
            VAR_5[VAR_8] = VAR_9;
            VAR_9 >>= 8;
        }
        VAR_2 -= 64;
        VAR_0 += 64;
        VAR_1 += 64;
    }
    if (VAR_2) {
        FUNC_0(VAR_6, VAR_5, VAR_7, ((void*)0));
        for (VAR_8 = 0; VAR_8 < (unsigned int)VAR_2; ++VAR_8) {
            VAR_0[VAR_8] = VAR_1[VAR_8] ^ VAR_6[VAR_8];
        }
    }
    FUNC_1(VAR_6, sizeof VAR_6);
    FUNC_1(VAR_7, sizeof VAR_7);

    return 0;
}
