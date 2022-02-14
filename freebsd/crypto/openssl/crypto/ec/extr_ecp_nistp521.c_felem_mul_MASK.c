
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint128_t ;
typedef int* largefelem ;
typedef int* felem ;


 int FUNC_0 (int*,int* const,int) ;

__attribute__((used)) static void FUNC_1(largefelem VAR_0, const felem VAR_1, const felem VAR_2)
{
    felem VAR_3;
    FUNC_0(VAR_3, VAR_2, 2);

    VAR_0[0] = ((uint128_t) VAR_1[0]) * VAR_2[0];

    VAR_0[1] = ((uint128_t) VAR_1[0]) * VAR_2[1] +
             ((uint128_t) VAR_1[1]) * VAR_2[0];

    VAR_0[2] = ((uint128_t) VAR_1[0]) * VAR_2[2] +
             ((uint128_t) VAR_1[1]) * VAR_2[1] +
             ((uint128_t) VAR_1[2]) * VAR_2[0];

    VAR_0[3] = ((uint128_t) VAR_1[0]) * VAR_2[3] +
             ((uint128_t) VAR_1[1]) * VAR_2[2] +
             ((uint128_t) VAR_1[2]) * VAR_2[1] +
             ((uint128_t) VAR_1[3]) * VAR_2[0];

    VAR_0[4] = ((uint128_t) VAR_1[0]) * VAR_2[4] +
             ((uint128_t) VAR_1[1]) * VAR_2[3] +
             ((uint128_t) VAR_1[2]) * VAR_2[2] +
             ((uint128_t) VAR_1[3]) * VAR_2[1] +
             ((uint128_t) VAR_1[4]) * VAR_2[0];

    VAR_0[5] = ((uint128_t) VAR_1[0]) * VAR_2[5] +
             ((uint128_t) VAR_1[1]) * VAR_2[4] +
             ((uint128_t) VAR_1[2]) * VAR_2[3] +
             ((uint128_t) VAR_1[3]) * VAR_2[2] +
             ((uint128_t) VAR_1[4]) * VAR_2[1] +
             ((uint128_t) VAR_1[5]) * VAR_2[0];

    VAR_0[6] = ((uint128_t) VAR_1[0]) * VAR_2[6] +
             ((uint128_t) VAR_1[1]) * VAR_2[5] +
             ((uint128_t) VAR_1[2]) * VAR_2[4] +
             ((uint128_t) VAR_1[3]) * VAR_2[3] +
             ((uint128_t) VAR_1[4]) * VAR_2[2] +
             ((uint128_t) VAR_1[5]) * VAR_2[1] +
             ((uint128_t) VAR_1[6]) * VAR_2[0];

    VAR_0[7] = ((uint128_t) VAR_1[0]) * VAR_2[7] +
             ((uint128_t) VAR_1[1]) * VAR_2[6] +
             ((uint128_t) VAR_1[2]) * VAR_2[5] +
             ((uint128_t) VAR_1[3]) * VAR_2[4] +
             ((uint128_t) VAR_1[4]) * VAR_2[3] +
             ((uint128_t) VAR_1[5]) * VAR_2[2] +
             ((uint128_t) VAR_1[6]) * VAR_2[1] +
             ((uint128_t) VAR_1[7]) * VAR_2[0];

    VAR_0[8] = ((uint128_t) VAR_1[0]) * VAR_2[8] +
             ((uint128_t) VAR_1[1]) * VAR_2[7] +
             ((uint128_t) VAR_1[2]) * VAR_2[6] +
             ((uint128_t) VAR_1[3]) * VAR_2[5] +
             ((uint128_t) VAR_1[4]) * VAR_2[4] +
             ((uint128_t) VAR_1[5]) * VAR_2[3] +
             ((uint128_t) VAR_1[6]) * VAR_2[2] +
             ((uint128_t) VAR_1[7]) * VAR_2[1] +
             ((uint128_t) VAR_1[8]) * VAR_2[0];



    VAR_0[0] += ((uint128_t) VAR_1[1]) * VAR_3[8] +
              ((uint128_t) VAR_1[2]) * VAR_3[7] +
              ((uint128_t) VAR_1[3]) * VAR_3[6] +
              ((uint128_t) VAR_1[4]) * VAR_3[5] +
              ((uint128_t) VAR_1[5]) * VAR_3[4] +
              ((uint128_t) VAR_1[6]) * VAR_3[3] +
              ((uint128_t) VAR_1[7]) * VAR_3[2] +
              ((uint128_t) VAR_1[8]) * VAR_3[1];

    VAR_0[1] += ((uint128_t) VAR_1[2]) * VAR_3[8] +
              ((uint128_t) VAR_1[3]) * VAR_3[7] +
              ((uint128_t) VAR_1[4]) * VAR_3[6] +
              ((uint128_t) VAR_1[5]) * VAR_3[5] +
              ((uint128_t) VAR_1[6]) * VAR_3[4] +
              ((uint128_t) VAR_1[7]) * VAR_3[3] +
              ((uint128_t) VAR_1[8]) * VAR_3[2];

    VAR_0[2] += ((uint128_t) VAR_1[3]) * VAR_3[8] +
              ((uint128_t) VAR_1[4]) * VAR_3[7] +
              ((uint128_t) VAR_1[5]) * VAR_3[6] +
              ((uint128_t) VAR_1[6]) * VAR_3[5] +
              ((uint128_t) VAR_1[7]) * VAR_3[4] +
              ((uint128_t) VAR_1[8]) * VAR_3[3];

    VAR_0[3] += ((uint128_t) VAR_1[4]) * VAR_3[8] +
              ((uint128_t) VAR_1[5]) * VAR_3[7] +
              ((uint128_t) VAR_1[6]) * VAR_3[6] +
              ((uint128_t) VAR_1[7]) * VAR_3[5] +
              ((uint128_t) VAR_1[8]) * VAR_3[4];

    VAR_0[4] += ((uint128_t) VAR_1[5]) * VAR_3[8] +
              ((uint128_t) VAR_1[6]) * VAR_3[7] +
              ((uint128_t) VAR_1[7]) * VAR_3[6] +
              ((uint128_t) VAR_1[8]) * VAR_3[5];

    VAR_0[5] += ((uint128_t) VAR_1[6]) * VAR_3[8] +
              ((uint128_t) VAR_1[7]) * VAR_3[7] +
              ((uint128_t) VAR_1[8]) * VAR_3[6];

    VAR_0[6] += ((uint128_t) VAR_1[7]) * VAR_3[8] +
              ((uint128_t) VAR_1[8]) * VAR_3[7];

    VAR_0[7] += ((uint128_t) VAR_1[8]) * VAR_3[8];
}
