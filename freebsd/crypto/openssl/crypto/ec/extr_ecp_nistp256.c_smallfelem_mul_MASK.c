
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint128_t ;
typedef int u64 ;
typedef int* smallfelem ;
typedef int* longfelem ;
typedef int limb ;



__attribute__((used)) static void FUNC_0(longfelem VAR_0, const smallfelem VAR_1,
                           const smallfelem VAR_2)
{
    limb VAR_3;
    u64 VAR_4, VAR_5;

    VAR_3 = ((uint128_t) VAR_1[0]) * VAR_2[0];
    VAR_5 = VAR_3;
    VAR_4 = VAR_3 >> 64;
    VAR_0[0] = VAR_5;
    VAR_0[1] = VAR_4;

    VAR_3 = ((uint128_t) VAR_1[0]) * VAR_2[1];
    VAR_5 = VAR_3;
    VAR_4 = VAR_3 >> 64;
    VAR_0[1] += VAR_5;
    VAR_0[2] = VAR_4;

    VAR_3 = ((uint128_t) VAR_1[1]) * VAR_2[0];
    VAR_5 = VAR_3;
    VAR_4 = VAR_3 >> 64;
    VAR_0[1] += VAR_5;
    VAR_0[2] += VAR_4;

    VAR_3 = ((uint128_t) VAR_1[0]) * VAR_2[2];
    VAR_5 = VAR_3;
    VAR_4 = VAR_3 >> 64;
    VAR_0[2] += VAR_5;
    VAR_0[3] = VAR_4;

    VAR_3 = ((uint128_t) VAR_1[1]) * VAR_2[1];
    VAR_5 = VAR_3;
    VAR_4 = VAR_3 >> 64;
    VAR_0[2] += VAR_5;
    VAR_0[3] += VAR_4;

    VAR_3 = ((uint128_t) VAR_1[2]) * VAR_2[0];
    VAR_5 = VAR_3;
    VAR_4 = VAR_3 >> 64;
    VAR_0[2] += VAR_5;
    VAR_0[3] += VAR_4;

    VAR_3 = ((uint128_t) VAR_1[0]) * VAR_2[3];
    VAR_5 = VAR_3;
    VAR_4 = VAR_3 >> 64;
    VAR_0[3] += VAR_5;
    VAR_0[4] = VAR_4;

    VAR_3 = ((uint128_t) VAR_1[1]) * VAR_2[2];
    VAR_5 = VAR_3;
    VAR_4 = VAR_3 >> 64;
    VAR_0[3] += VAR_5;
    VAR_0[4] += VAR_4;

    VAR_3 = ((uint128_t) VAR_1[2]) * VAR_2[1];
    VAR_5 = VAR_3;
    VAR_4 = VAR_3 >> 64;
    VAR_0[3] += VAR_5;
    VAR_0[4] += VAR_4;

    VAR_3 = ((uint128_t) VAR_1[3]) * VAR_2[0];
    VAR_5 = VAR_3;
    VAR_4 = VAR_3 >> 64;
    VAR_0[3] += VAR_5;
    VAR_0[4] += VAR_4;

    VAR_3 = ((uint128_t) VAR_1[1]) * VAR_2[3];
    VAR_5 = VAR_3;
    VAR_4 = VAR_3 >> 64;
    VAR_0[4] += VAR_5;
    VAR_0[5] = VAR_4;

    VAR_3 = ((uint128_t) VAR_1[2]) * VAR_2[2];
    VAR_5 = VAR_3;
    VAR_4 = VAR_3 >> 64;
    VAR_0[4] += VAR_5;
    VAR_0[5] += VAR_4;

    VAR_3 = ((uint128_t) VAR_1[3]) * VAR_2[1];
    VAR_5 = VAR_3;
    VAR_4 = VAR_3 >> 64;
    VAR_0[4] += VAR_5;
    VAR_0[5] += VAR_4;

    VAR_3 = ((uint128_t) VAR_1[2]) * VAR_2[3];
    VAR_5 = VAR_3;
    VAR_4 = VAR_3 >> 64;
    VAR_0[5] += VAR_5;
    VAR_0[6] = VAR_4;

    VAR_3 = ((uint128_t) VAR_1[3]) * VAR_2[2];
    VAR_5 = VAR_3;
    VAR_4 = VAR_3 >> 64;
    VAR_0[5] += VAR_5;
    VAR_0[6] += VAR_4;

    VAR_3 = ((uint128_t) VAR_1[3]) * VAR_2[3];
    VAR_5 = VAR_3;
    VAR_4 = VAR_3 >> 64;
    VAR_0[6] += VAR_5;
    VAR_0[7] = VAR_4;
}
