
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int* fe25519 ;


 int FUNC_0 (int*,int* const) ;

void
FUNC_1(unsigned char *VAR_0, const fe25519 VAR_1)
{
    fe25519 VAR_2;

    FUNC_0(VAR_2, VAR_1);
    VAR_0[0] = VAR_2[0] >> 0;
    VAR_0[1] = VAR_2[0] >> 8;
    VAR_0[2] = VAR_2[0] >> 16;
    VAR_0[3] = (VAR_2[0] >> 24) | (VAR_2[1] * ((uint32_t) 1 << 2));
    VAR_0[4] = VAR_2[1] >> 6;
    VAR_0[5] = VAR_2[1] >> 14;
    VAR_0[6] = (VAR_2[1] >> 22) | (VAR_2[2] * ((uint32_t) 1 << 3));
    VAR_0[7] = VAR_2[2] >> 5;
    VAR_0[8] = VAR_2[2] >> 13;
    VAR_0[9] = (VAR_2[2] >> 21) | (VAR_2[3] * ((uint32_t) 1 << 5));
    VAR_0[10] = VAR_2[3] >> 3;
    VAR_0[11] = VAR_2[3] >> 11;
    VAR_0[12] = (VAR_2[3] >> 19) | (VAR_2[4] * ((uint32_t) 1 << 6));
    VAR_0[13] = VAR_2[4] >> 2;
    VAR_0[14] = VAR_2[4] >> 10;
    VAR_0[15] = VAR_2[4] >> 18;
    VAR_0[16] = VAR_2[5] >> 0;
    VAR_0[17] = VAR_2[5] >> 8;
    VAR_0[18] = VAR_2[5] >> 16;
    VAR_0[19] = (VAR_2[5] >> 24) | (VAR_2[6] * ((uint32_t) 1 << 1));
    VAR_0[20] = VAR_2[6] >> 7;
    VAR_0[21] = VAR_2[6] >> 15;
    VAR_0[22] = (VAR_2[6] >> 23) | (VAR_2[7] * ((uint32_t) 1 << 3));
    VAR_0[23] = VAR_2[7] >> 5;
    VAR_0[24] = VAR_2[7] >> 13;
    VAR_0[25] = (VAR_2[7] >> 21) | (VAR_2[8] * ((uint32_t) 1 << 4));
    VAR_0[26] = VAR_2[8] >> 4;
    VAR_0[27] = VAR_2[8] >> 12;
    VAR_0[28] = (VAR_2[8] >> 20) | (VAR_2[9] * ((uint32_t) 1 << 6));
    VAR_0[29] = VAR_2[9] >> 2;
    VAR_0[30] = VAR_2[9] >> 10;
    VAR_0[31] = VAR_2[9] >> 18;
}
