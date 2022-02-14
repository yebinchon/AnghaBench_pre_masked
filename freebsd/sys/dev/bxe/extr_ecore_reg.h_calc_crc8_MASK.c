
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static inline uint8_t FUNC_0(uint32_t VAR_0, uint8_t VAR_1)
{
    uint8_t VAR_2[32];
    uint8_t VAR_3[8];
    uint8_t VAR_4[8];
    uint8_t VAR_5;
    uint8_t VAR_6;


    for (VAR_6 = 0; VAR_6 < 32; VAR_6++) {
 VAR_2[VAR_6] = (uint8_t)(VAR_0 & 1);
 VAR_0 = VAR_0 >> 1;
    }


    for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
 VAR_4[VAR_6] = VAR_1 & 1;
 VAR_1 = VAR_1 >> 1;
    }

    VAR_3[0] = VAR_2[31] ^ VAR_2[30] ^ VAR_2[28] ^ VAR_2[23] ^ VAR_2[21] ^ VAR_2[19] ^ VAR_2[18] ^
     VAR_2[16] ^ VAR_2[14] ^ VAR_2[12] ^ VAR_2[8] ^ VAR_2[7] ^ VAR_2[6] ^ VAR_2[0] ^ VAR_4[4] ^
     VAR_4[6] ^ VAR_4[7];
    VAR_3[1] = VAR_2[30] ^ VAR_2[29] ^ VAR_2[28] ^ VAR_2[24] ^ VAR_2[23] ^ VAR_2[22] ^ VAR_2[21] ^
     VAR_2[20] ^ VAR_2[18] ^ VAR_2[17] ^ VAR_2[16] ^ VAR_2[15] ^ VAR_2[14] ^ VAR_2[13] ^
     VAR_2[12] ^ VAR_2[9] ^ VAR_2[6] ^ VAR_2[1] ^ VAR_2[0] ^ VAR_4[0] ^ VAR_4[4] ^ VAR_4[5] ^ VAR_4[6];
    VAR_3[2] = VAR_2[29] ^ VAR_2[28] ^ VAR_2[25] ^ VAR_2[24] ^ VAR_2[22] ^ VAR_2[17] ^ VAR_2[15] ^
     VAR_2[13] ^ VAR_2[12] ^ VAR_2[10] ^ VAR_2[8] ^ VAR_2[6] ^ VAR_2[2] ^ VAR_2[1] ^ VAR_2[0] ^
     VAR_4[0] ^ VAR_4[1] ^ VAR_4[4] ^ VAR_4[5];
    VAR_3[3] = VAR_2[30] ^ VAR_2[29] ^ VAR_2[26] ^ VAR_2[25] ^ VAR_2[23] ^ VAR_2[18] ^ VAR_2[16] ^
     VAR_2[14] ^ VAR_2[13] ^ VAR_2[11] ^ VAR_2[9] ^ VAR_2[7] ^ VAR_2[3] ^ VAR_2[2] ^ VAR_2[1] ^
     VAR_4[1] ^ VAR_4[2] ^ VAR_4[5] ^ VAR_4[6];
    VAR_3[4] = VAR_2[31] ^ VAR_2[30] ^ VAR_2[27] ^ VAR_2[26] ^ VAR_2[24] ^ VAR_2[19] ^ VAR_2[17] ^
     VAR_2[15] ^ VAR_2[14] ^ VAR_2[12] ^ VAR_2[10] ^ VAR_2[8] ^ VAR_2[4] ^ VAR_2[3] ^ VAR_2[2] ^
     VAR_4[0] ^ VAR_4[2] ^ VAR_4[3] ^ VAR_4[6] ^ VAR_4[7];
    VAR_3[5] = VAR_2[31] ^ VAR_2[28] ^ VAR_2[27] ^ VAR_2[25] ^ VAR_2[20] ^ VAR_2[18] ^ VAR_2[16] ^
     VAR_2[15] ^ VAR_2[13] ^ VAR_2[11] ^ VAR_2[9] ^ VAR_2[5] ^ VAR_2[4] ^ VAR_2[3] ^ VAR_4[1] ^
     VAR_4[3] ^ VAR_4[4] ^ VAR_4[7];
    VAR_3[6] = VAR_2[29] ^ VAR_2[28] ^ VAR_2[26] ^ VAR_2[21] ^ VAR_2[19] ^ VAR_2[17] ^ VAR_2[16] ^
     VAR_2[14] ^ VAR_2[12] ^ VAR_2[10] ^ VAR_2[6] ^ VAR_2[5] ^ VAR_2[4] ^ VAR_4[2] ^ VAR_4[4] ^ VAR_4[5];
    VAR_3[7] = VAR_2[30] ^ VAR_2[29] ^ VAR_2[27] ^ VAR_2[22] ^ VAR_2[20] ^ VAR_2[18] ^ VAR_2[17] ^
     VAR_2[15] ^ VAR_2[13] ^ VAR_2[11] ^ VAR_2[7] ^ VAR_2[6] ^ VAR_2[5] ^ VAR_4[3] ^ VAR_4[5] ^ VAR_4[6];

    VAR_5 = 0;
    for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
 VAR_5 |= (VAR_3[VAR_6] << VAR_6);
    }

    return VAR_5;
}
