
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x ;
typedef int uint32_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static void FUNC_3(uint32_t VAR_0[16])
{
    int VAR_1;
    uint32_t VAR_2[16];
    FUNC_2(VAR_2, VAR_0, sizeof(VAR_2));
    for (VAR_1 = 8; VAR_1 > 0; VAR_1 -= 2) {
        VAR_2[4] ^= FUNC_1(VAR_2[0] + VAR_2[12], 7);
        VAR_2[8] ^= FUNC_1(VAR_2[4] + VAR_2[0], 9);
        VAR_2[12] ^= FUNC_1(VAR_2[8] + VAR_2[4], 13);
        VAR_2[0] ^= FUNC_1(VAR_2[12] + VAR_2[8], 18);
        VAR_2[9] ^= FUNC_1(VAR_2[5] + VAR_2[1], 7);
        VAR_2[13] ^= FUNC_1(VAR_2[9] + VAR_2[5], 9);
        VAR_2[1] ^= FUNC_1(VAR_2[13] + VAR_2[9], 13);
        VAR_2[5] ^= FUNC_1(VAR_2[1] + VAR_2[13], 18);
        VAR_2[14] ^= FUNC_1(VAR_2[10] + VAR_2[6], 7);
        VAR_2[2] ^= FUNC_1(VAR_2[14] + VAR_2[10], 9);
        VAR_2[6] ^= FUNC_1(VAR_2[2] + VAR_2[14], 13);
        VAR_2[10] ^= FUNC_1(VAR_2[6] + VAR_2[2], 18);
        VAR_2[3] ^= FUNC_1(VAR_2[15] + VAR_2[11], 7);
        VAR_2[7] ^= FUNC_1(VAR_2[3] + VAR_2[15], 9);
        VAR_2[11] ^= FUNC_1(VAR_2[7] + VAR_2[3], 13);
        VAR_2[15] ^= FUNC_1(VAR_2[11] + VAR_2[7], 18);
        VAR_2[1] ^= FUNC_1(VAR_2[0] + VAR_2[3], 7);
        VAR_2[2] ^= FUNC_1(VAR_2[1] + VAR_2[0], 9);
        VAR_2[3] ^= FUNC_1(VAR_2[2] + VAR_2[1], 13);
        VAR_2[0] ^= FUNC_1(VAR_2[3] + VAR_2[2], 18);
        VAR_2[6] ^= FUNC_1(VAR_2[5] + VAR_2[4], 7);
        VAR_2[7] ^= FUNC_1(VAR_2[6] + VAR_2[5], 9);
        VAR_2[4] ^= FUNC_1(VAR_2[7] + VAR_2[6], 13);
        VAR_2[5] ^= FUNC_1(VAR_2[4] + VAR_2[7], 18);
        VAR_2[11] ^= FUNC_1(VAR_2[10] + VAR_2[9], 7);
        VAR_2[8] ^= FUNC_1(VAR_2[11] + VAR_2[10], 9);
        VAR_2[9] ^= FUNC_1(VAR_2[8] + VAR_2[11], 13);
        VAR_2[10] ^= FUNC_1(VAR_2[9] + VAR_2[8], 18);
        VAR_2[12] ^= FUNC_1(VAR_2[15] + VAR_2[14], 7);
        VAR_2[13] ^= FUNC_1(VAR_2[12] + VAR_2[15], 9);
        VAR_2[14] ^= FUNC_1(VAR_2[13] + VAR_2[12], 13);
        VAR_2[15] ^= FUNC_1(VAR_2[14] + VAR_2[13], 18);
    }
    for (VAR_1 = 0; VAR_1 < 16; ++VAR_1)
        VAR_0[VAR_1] += VAR_2[VAR_1];
    FUNC_0(VAR_2, sizeof(VAR_2));
}
