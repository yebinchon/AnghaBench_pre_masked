
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int A ;


 int FUNC_0 (int) ;
 int FUNC_1 (int**) ;
 int FUNC_2 (int) ;

void FUNC_3(uint64_t VAR_0[5][5], unsigned char *VAR_1, size_t VAR_2, size_t VAR_3)
{
    uint64_t *VAR_4 = (uint64_t *)VAR_0;
    size_t VAR_5, VAR_6 = VAR_3 / 8;

    FUNC_2(VAR_3 < (25 * sizeof(VAR_0[0][0])) && (VAR_3 % 8) == 0);

    while (VAR_2 != 0) {
        for (VAR_5 = 0; VAR_5 < VAR_6 && VAR_2 != 0; VAR_5++) {
            uint64_t VAR_7 = FUNC_0(VAR_4[VAR_5]);

            if (VAR_2 < 8) {
                for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
                    *VAR_1++ = (unsigned char)VAR_7;
                    VAR_7 >>= 8;
                }
                return;
            }

            VAR_1[0] = (unsigned char)(VAR_7);
            VAR_1[1] = (unsigned char)(VAR_7 >> 8);
            VAR_1[2] = (unsigned char)(VAR_7 >> 16);
            VAR_1[3] = (unsigned char)(VAR_7 >> 24);
            VAR_1[4] = (unsigned char)(VAR_7 >> 32);
            VAR_1[5] = (unsigned char)(VAR_7 >> 40);
            VAR_1[6] = (unsigned char)(VAR_7 >> 48);
            VAR_1[7] = (unsigned char)(VAR_7 >> 56);
            VAR_1 += 8;
            VAR_2 -= 8;
        }
        if (VAR_2)
            FUNC_1(VAR_0);
    }
}
