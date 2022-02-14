
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u128 ;
typedef int* fe51 ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(fe51 VAR_1, fe51 VAR_2)
{
    u128 VAR_3 = VAR_2[0] * (u128)121666;
    u128 VAR_4 = VAR_2[1] * (u128)121666;
    u128 VAR_5 = VAR_2[2] * (u128)121666;
    u128 VAR_6 = VAR_2[3] * (u128)121666;
    u128 VAR_7 = VAR_2[4] * (u128)121666;
    uint64_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

    VAR_6 += (uint64_t)(VAR_5 >> 51); VAR_10 = (uint64_t)VAR_5 & VAR_0;
    VAR_4 += (uint64_t)(VAR_3 >> 51); VAR_8 = (uint64_t)VAR_3 & VAR_0;

    VAR_7 += (uint64_t)(VAR_6 >> 51); VAR_11 = (uint64_t)VAR_6 & VAR_0;
    VAR_10 += (uint64_t)(VAR_4 >> 51); VAR_9 = (uint64_t)VAR_4 & VAR_0;

    VAR_8 += (uint64_t)(VAR_7 >> 51) * 19; VAR_12 = (uint64_t)VAR_7 & VAR_0;
    VAR_11 += VAR_10 >> 51; VAR_10 &= VAR_0;
    VAR_9 += VAR_8 >> 51; VAR_8 &= VAR_0;

    VAR_1[0] = VAR_8;
    VAR_1[1] = VAR_9;
    VAR_1[2] = VAR_10;
    VAR_1[3] = VAR_11;
    VAR_1[4] = VAR_12;
}
