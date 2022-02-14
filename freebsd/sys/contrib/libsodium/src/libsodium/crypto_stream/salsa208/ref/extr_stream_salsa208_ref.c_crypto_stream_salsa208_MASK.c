
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char*,unsigned char*,int *) ;
 int FUNC_1 (unsigned char*,int) ;

int
FUNC_2(unsigned char *VAR_0, unsigned long long VAR_1,
                       const unsigned char *VAR_2, const unsigned char *VAR_3)
{
    unsigned char VAR_4[16];
    unsigned char VAR_5[64];
    unsigned char VAR_6[32];
    unsigned int VAR_7;
    unsigned int VAR_8;

    if (!VAR_1) {
        return 0;
    }
    for (VAR_7 = 0; VAR_7 < 32; ++VAR_7) {
        VAR_6[VAR_7] = VAR_3[VAR_7];
    }
    for (VAR_7 = 0; VAR_7 < 8; ++VAR_7) {
        VAR_4[VAR_7] = VAR_2[VAR_7];
    }
    for (VAR_7 = 8; VAR_7 < 16; ++VAR_7) {
        VAR_4[VAR_7] = 0;
    }
    while (VAR_1 >= 64) {
        FUNC_0(VAR_0, VAR_4, VAR_6, ((void*)0));
        VAR_8 = 1;
        for (VAR_7 = 8; VAR_7 < 16; ++VAR_7) {
            VAR_8 += (unsigned int)VAR_4[VAR_7];
            VAR_4[VAR_7] = VAR_8;
            VAR_8 >>= 8;
        }
        VAR_1 -= 64;
        VAR_0 += 64;
    }
    if (VAR_1) {
        FUNC_0(VAR_5, VAR_4, VAR_6, ((void*)0));
        for (VAR_7 = 0; VAR_7 < (unsigned int)VAR_1; ++VAR_7) {
            VAR_0[VAR_7] = VAR_5[VAR_7];
        }
    }
    FUNC_1(VAR_5, sizeof VAR_5);
    FUNC_1(VAR_6, sizeof VAR_6);

    return 0;
}
