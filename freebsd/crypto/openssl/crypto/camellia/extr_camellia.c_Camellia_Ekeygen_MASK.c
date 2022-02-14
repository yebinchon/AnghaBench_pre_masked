
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int * KEY_TABLE_TYPE ;


 int FUNC_0 (int ,int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int ,int ,int ,int ,int) ;
 scalar_t__ VAR_0 ;

int FUNC_3(int VAR_1, const u8 *VAR_2, KEY_TABLE_TYPE VAR_3)
{
    register u32 VAR_4, VAR_5, VAR_6, VAR_7;

    VAR_3[0] = VAR_4 = FUNC_1(VAR_2);
    VAR_3[1] = VAR_5 = FUNC_1(VAR_2 + 4);
    VAR_3[2] = VAR_6 = FUNC_1(VAR_2 + 8);
    VAR_3[3] = VAR_7 = FUNC_1(VAR_2 + 12);

    if (VAR_1 != 128) {
        VAR_3[8] = VAR_4 = FUNC_1(VAR_2 + 16);
        VAR_3[9] = VAR_5 = FUNC_1(VAR_2 + 20);
        if (VAR_1 == 192) {
            VAR_3[10] = VAR_6 = ~VAR_4;
            VAR_3[11] = VAR_7 = ~VAR_5;
        } else {
            VAR_3[10] = VAR_6 = FUNC_1(VAR_2 + 24);
            VAR_3[11] = VAR_7 = FUNC_1(VAR_2 + 28);
        }
        VAR_4 ^= VAR_3[0], VAR_5 ^= VAR_3[1], VAR_6 ^= VAR_3[2], VAR_7 ^= VAR_3[3];
    }


    FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_0 + 0);
    FUNC_0(VAR_6, VAR_7, VAR_4, VAR_5, VAR_0 + 2);

    VAR_4 ^= VAR_3[0], VAR_5 ^= VAR_3[1], VAR_6 ^= VAR_3[2], VAR_7 ^= VAR_3[3];
    FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_0 + 4);
    FUNC_0(VAR_6, VAR_7, VAR_4, VAR_5, VAR_0 + 6);


    if (VAR_1 == 128) {
        VAR_3[4] = VAR_4, VAR_3[5] = VAR_5, VAR_3[6] = VAR_6, VAR_3[7] = VAR_7;
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, 15);
        VAR_3[12] = VAR_4, VAR_3[13] = VAR_5, VAR_3[14] = VAR_6, VAR_3[15] = VAR_7;
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, 15);
        VAR_3[16] = VAR_4, VAR_3[17] = VAR_5, VAR_3[18] = VAR_6, VAR_3[19] = VAR_7;
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, 15);
        VAR_3[24] = VAR_4, VAR_3[25] = VAR_5;
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, 15);
        VAR_3[28] = VAR_4, VAR_3[29] = VAR_5, VAR_3[30] = VAR_6, VAR_3[31] = VAR_7;
        FUNC_2(VAR_5, VAR_6, VAR_7, VAR_4, 2);
        VAR_3[40] = VAR_5, VAR_3[41] = VAR_6, VAR_3[42] = VAR_7, VAR_3[43] = VAR_4;
        FUNC_2(VAR_5, VAR_6, VAR_7, VAR_4, 17);
        VAR_3[48] = VAR_5, VAR_3[49] = VAR_6, VAR_3[50] = VAR_7, VAR_3[51] = VAR_4;

        VAR_4 = VAR_3[0], VAR_5 = VAR_3[1], VAR_6 = VAR_3[2], VAR_7 = VAR_3[3];
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, 15);
        VAR_3[8] = VAR_4, VAR_3[9] = VAR_5, VAR_3[10] = VAR_6, VAR_3[11] = VAR_7;
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, 30);
        VAR_3[20] = VAR_4, VAR_3[21] = VAR_5, VAR_3[22] = VAR_6, VAR_3[23] = VAR_7;
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, 15);
        VAR_3[26] = VAR_6, VAR_3[27] = VAR_7;
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, 17);
        VAR_3[32] = VAR_4, VAR_3[33] = VAR_5, VAR_3[34] = VAR_6, VAR_3[35] = VAR_7;
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, 17);
        VAR_3[36] = VAR_4, VAR_3[37] = VAR_5, VAR_3[38] = VAR_6, VAR_3[39] = VAR_7;
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, 17);
        VAR_3[44] = VAR_4, VAR_3[45] = VAR_5, VAR_3[46] = VAR_6, VAR_3[47] = VAR_7;

        return 3;
    } else {
        VAR_3[12] = VAR_4, VAR_3[13] = VAR_5, VAR_3[14] = VAR_6, VAR_3[15] = VAR_7;
        VAR_4 ^= VAR_3[8], VAR_5 ^= VAR_3[9], VAR_6 ^= VAR_3[10], VAR_7 ^= VAR_3[11];
        FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, (VAR_0 + 8));
        FUNC_0(VAR_6, VAR_7, VAR_4, VAR_5, (VAR_0 + 10));

        VAR_3[4] = VAR_4, VAR_3[5] = VAR_5, VAR_3[6] = VAR_6, VAR_3[7] = VAR_7;
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, 30);
        VAR_3[20] = VAR_4, VAR_3[21] = VAR_5, VAR_3[22] = VAR_6, VAR_3[23] = VAR_7;
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, 30);
        VAR_3[40] = VAR_4, VAR_3[41] = VAR_5, VAR_3[42] = VAR_6, VAR_3[43] = VAR_7;
        FUNC_2(VAR_5, VAR_6, VAR_7, VAR_4, 19);
        VAR_3[64] = VAR_5, VAR_3[65] = VAR_6, VAR_3[66] = VAR_7, VAR_3[67] = VAR_4;

        VAR_4 = VAR_3[8], VAR_5 = VAR_3[9], VAR_6 = VAR_3[10], VAR_7 = VAR_3[11];
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, 15);
        VAR_3[8] = VAR_4, VAR_3[9] = VAR_5, VAR_3[10] = VAR_6, VAR_3[11] = VAR_7;
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, 15);
        VAR_3[16] = VAR_4, VAR_3[17] = VAR_5, VAR_3[18] = VAR_6, VAR_3[19] = VAR_7;
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, 30);
        VAR_3[36] = VAR_4, VAR_3[37] = VAR_5, VAR_3[38] = VAR_6, VAR_3[39] = VAR_7;
        FUNC_2(VAR_5, VAR_6, VAR_7, VAR_4, 2);
        VAR_3[52] = VAR_5, VAR_3[53] = VAR_6, VAR_3[54] = VAR_7, VAR_3[55] = VAR_4;

        VAR_4 = VAR_3[12], VAR_5 = VAR_3[13], VAR_6 = VAR_3[14], VAR_7 = VAR_3[15];
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, 15);
        VAR_3[12] = VAR_4, VAR_3[13] = VAR_5, VAR_3[14] = VAR_6, VAR_3[15] = VAR_7;
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, 30);
        VAR_3[28] = VAR_4, VAR_3[29] = VAR_5, VAR_3[30] = VAR_6, VAR_3[31] = VAR_7;

        VAR_3[48] = VAR_5, VAR_3[49] = VAR_6, VAR_3[50] = VAR_7, VAR_3[51] = VAR_4;
        FUNC_2(VAR_5, VAR_6, VAR_7, VAR_4, 17);
        VAR_3[56] = VAR_5, VAR_3[57] = VAR_6, VAR_3[58] = VAR_7, VAR_3[59] = VAR_4;

        VAR_4 = VAR_3[0], VAR_5 = VAR_3[1], VAR_6 = VAR_3[2], VAR_7 = VAR_3[3];
        FUNC_2(VAR_5, VAR_6, VAR_7, VAR_4, 13);
        VAR_3[24] = VAR_5, VAR_3[25] = VAR_6, VAR_3[26] = VAR_7, VAR_3[27] = VAR_4;
        FUNC_2(VAR_5, VAR_6, VAR_7, VAR_4, 15);
        VAR_3[32] = VAR_5, VAR_3[33] = VAR_6, VAR_3[34] = VAR_7, VAR_3[35] = VAR_4;
        FUNC_2(VAR_5, VAR_6, VAR_7, VAR_4, 17);
        VAR_3[44] = VAR_5, VAR_3[45] = VAR_6, VAR_3[46] = VAR_7, VAR_3[47] = VAR_4;
        FUNC_2(VAR_6, VAR_7, VAR_4, VAR_5, 2);
        VAR_3[60] = VAR_6, VAR_3[61] = VAR_7, VAR_3[62] = VAR_4, VAR_3[63] = VAR_5;

        return 4;
    }
}
