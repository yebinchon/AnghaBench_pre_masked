
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u128 ;
typedef int* fe51 ;


 int VAR_0 ;
 int FUNC_0 (int*,int* const,int* const) ;

__attribute__((used)) static void FUNC_1(fe51 VAR_1, const fe51 VAR_2)
{




    uint64_t VAR_3 = VAR_2[0];
    uint64_t VAR_4 = VAR_2[1];
    uint64_t VAR_5 = VAR_2[2];
    uint64_t VAR_6 = VAR_2[3];
    uint64_t VAR_7 = VAR_2[4];
    u128 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

    VAR_8 = (u128)VAR_3 * VAR_3; VAR_3 *= 2;
    VAR_9 = (u128)VAR_3 * VAR_4;
    VAR_10 = (u128)VAR_3 * VAR_5;
    VAR_11 = (u128)VAR_3 * VAR_6;
    VAR_12 = (u128)VAR_3 * VAR_7;

    VAR_3 = VAR_7;
    VAR_11 += (u128)VAR_3 * (VAR_7 *= 19);

    VAR_10 += (u128)VAR_4 * VAR_4; VAR_4 *= 2;
    VAR_11 += (u128)VAR_4 * VAR_5;
    VAR_12 += (u128)VAR_4 * VAR_6;
    VAR_8 += (u128)VAR_4 * VAR_7;

    VAR_3 = VAR_6;
    VAR_9 += (u128)VAR_3 * (VAR_6 *= 19);
    VAR_10 += (u128)(VAR_3 * 2) * VAR_7;

    VAR_12 += (u128)VAR_5 * VAR_5; VAR_5 *= 2;
    VAR_8 += (u128)VAR_5 * VAR_6;
    VAR_9 += (u128)VAR_5 * VAR_7;


    VAR_11 += (uint64_t)(VAR_10 >> 51); VAR_5 = (uint64_t)VAR_10 & VAR_0;
    VAR_9 += (uint64_t)(VAR_8 >> 51); VAR_3 = (uint64_t)VAR_8 & VAR_0;

    VAR_12 += (uint64_t)(VAR_11 >> 51); VAR_6 = (uint64_t)VAR_11 & VAR_0;
    VAR_5 += (uint64_t)(VAR_9 >> 51); VAR_4 = (uint64_t)VAR_9 & VAR_0;

    VAR_3 += (uint64_t)(VAR_12 >> 51) * 19; VAR_7 = (uint64_t)VAR_12 & VAR_0;
    VAR_6 += VAR_5 >> 51; VAR_5 &= VAR_0;
    VAR_4 += VAR_3 >> 51; VAR_3 &= VAR_0;

    VAR_1[0] = VAR_3;
    VAR_1[1] = VAR_4;
    VAR_1[2] = VAR_5;
    VAR_1[3] = VAR_6;
    VAR_1[4] = VAR_7;

}
