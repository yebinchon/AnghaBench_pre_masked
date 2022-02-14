
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int64_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__* fe ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static void FUNC_2(fe VAR_2, const uint8_t *VAR_3)
{

    int64_t VAR_4 = FUNC_1(VAR_3);
    int64_t VAR_5 = FUNC_0(VAR_3 + 4) << 6;
    int64_t VAR_6 = FUNC_0(VAR_3 + 7) << 5;
    int64_t VAR_7 = FUNC_0(VAR_3 + 10) << 3;
    int64_t VAR_8 = FUNC_0(VAR_3 + 13) << 2;
    int64_t VAR_9 = FUNC_1(VAR_3 + 16);
    int64_t VAR_10 = FUNC_0(VAR_3 + 20) << 7;
    int64_t VAR_11 = FUNC_0(VAR_3 + 23) << 5;
    int64_t VAR_12 = FUNC_0(VAR_3 + 26) << 4;
    int64_t VAR_13 = (FUNC_0(VAR_3 + 29) & 0x7fffff) << 2;
    int64_t VAR_14;
    int64_t VAR_15;
    int64_t VAR_16;
    int64_t VAR_17;
    int64_t VAR_18;
    int64_t VAR_19;
    int64_t VAR_20;
    int64_t VAR_21;
    int64_t VAR_22;
    int64_t VAR_23;

    VAR_23 = VAR_13 + (1 << 24); VAR_4 += (VAR_23 >> 25) * 19; VAR_13 -= VAR_23 & VAR_1;
    VAR_15 = VAR_5 + (1 << 24); VAR_6 += VAR_15 >> 25; VAR_5 -= VAR_15 & VAR_1;
    VAR_17 = VAR_7 + (1 << 24); VAR_8 += VAR_17 >> 25; VAR_7 -= VAR_17 & VAR_1;
    VAR_19 = VAR_9 + (1 << 24); VAR_10 += VAR_19 >> 25; VAR_9 -= VAR_19 & VAR_1;
    VAR_21 = VAR_11 + (1 << 24); VAR_12 += VAR_21 >> 25; VAR_11 -= VAR_21 & VAR_1;

    VAR_14 = VAR_4 + (1 << 25); VAR_5 += VAR_14 >> 26; VAR_4 -= VAR_14 & VAR_0;
    VAR_16 = VAR_6 + (1 << 25); VAR_7 += VAR_16 >> 26; VAR_6 -= VAR_16 & VAR_0;
    VAR_18 = VAR_8 + (1 << 25); VAR_9 += VAR_18 >> 26; VAR_8 -= VAR_18 & VAR_0;
    VAR_20 = VAR_10 + (1 << 25); VAR_11 += VAR_20 >> 26; VAR_10 -= VAR_20 & VAR_0;
    VAR_22 = VAR_12 + (1 << 25); VAR_13 += VAR_22 >> 26; VAR_12 -= VAR_22 & VAR_0;

    VAR_2[0] = (int32_t)VAR_4;
    VAR_2[1] = (int32_t)VAR_5;
    VAR_2[2] = (int32_t)VAR_6;
    VAR_2[3] = (int32_t)VAR_7;
    VAR_2[4] = (int32_t)VAR_8;
    VAR_2[5] = (int32_t)VAR_9;
    VAR_2[6] = (int32_t)VAR_10;
    VAR_2[7] = (int32_t)VAR_11;
    VAR_2[8] = (int32_t)VAR_12;
    VAR_2[9] = (int32_t)VAR_13;
}
