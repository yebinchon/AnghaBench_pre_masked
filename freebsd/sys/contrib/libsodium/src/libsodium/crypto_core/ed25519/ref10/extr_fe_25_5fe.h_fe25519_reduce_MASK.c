
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;
typedef int* fe25519 ;



__attribute__((used)) static void
FUNC_0(fe25519 VAR_0, const fe25519 VAR_1)
{
    int32_t VAR_2 = VAR_1[0];
    int32_t VAR_3 = VAR_1[1];
    int32_t VAR_4 = VAR_1[2];
    int32_t VAR_5 = VAR_1[3];
    int32_t VAR_6 = VAR_1[4];
    int32_t VAR_7 = VAR_1[5];
    int32_t VAR_8 = VAR_1[6];
    int32_t VAR_9 = VAR_1[7];
    int32_t VAR_10 = VAR_1[8];
    int32_t VAR_11 = VAR_1[9];

    int32_t VAR_12;
    int32_t VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;

    VAR_12 = (19 * VAR_11 + ((uint32_t) 1L << 24)) >> 25;
    VAR_12 = (VAR_2 + VAR_12) >> 26;
    VAR_12 = (VAR_3 + VAR_12) >> 25;
    VAR_12 = (VAR_4 + VAR_12) >> 26;
    VAR_12 = (VAR_5 + VAR_12) >> 25;
    VAR_12 = (VAR_6 + VAR_12) >> 26;
    VAR_12 = (VAR_7 + VAR_12) >> 25;
    VAR_12 = (VAR_8 + VAR_12) >> 26;
    VAR_12 = (VAR_9 + VAR_12) >> 25;
    VAR_12 = (VAR_10 + VAR_12) >> 26;
    VAR_12 = (VAR_11 + VAR_12) >> 25;


    VAR_2 += 19 * VAR_12;


    VAR_13 = VAR_2 >> 26;
    VAR_3 += VAR_13;
    VAR_2 -= VAR_13 * ((uint32_t) 1L << 26);
    VAR_14 = VAR_3 >> 25;
    VAR_4 += VAR_14;
    VAR_3 -= VAR_14 * ((uint32_t) 1L << 25);
    VAR_15 = VAR_4 >> 26;
    VAR_5 += VAR_15;
    VAR_4 -= VAR_15 * ((uint32_t) 1L << 26);
    VAR_16 = VAR_5 >> 25;
    VAR_6 += VAR_16;
    VAR_5 -= VAR_16 * ((uint32_t) 1L << 25);
    VAR_17 = VAR_6 >> 26;
    VAR_7 += VAR_17;
    VAR_6 -= VAR_17 * ((uint32_t) 1L << 26);
    VAR_18 = VAR_7 >> 25;
    VAR_8 += VAR_18;
    VAR_7 -= VAR_18 * ((uint32_t) 1L << 25);
    VAR_19 = VAR_8 >> 26;
    VAR_9 += VAR_19;
    VAR_8 -= VAR_19 * ((uint32_t) 1L << 26);
    VAR_20 = VAR_9 >> 25;
    VAR_10 += VAR_20;
    VAR_9 -= VAR_20 * ((uint32_t) 1L << 25);
    VAR_21 = VAR_10 >> 26;
    VAR_11 += VAR_21;
    VAR_10 -= VAR_21 * ((uint32_t) 1L << 26);
    VAR_22 = VAR_11 >> 25;
    VAR_11 -= VAR_22 * ((uint32_t) 1L << 25);

    VAR_0[0] = VAR_2;
    VAR_0[1] = VAR_3;
    VAR_0[2] = VAR_4;
    VAR_0[3] = VAR_5;
    VAR_0[4] = VAR_6;
    VAR_0[5] = VAR_7;
    VAR_0[6] = VAR_8;
    VAR_0[7] = VAR_9;
    VAR_0[8] = VAR_10;
    VAR_0[9] = VAR_11;
}
