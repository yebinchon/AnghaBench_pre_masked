
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
typedef int mask_p ;
typedef int mask_m ;
typedef int int8_t ;
typedef scalar_t__ HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;


 int const VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;
 int const VAR_13 ;
 int const VAR_14 ;
 int const VAR_15 ;
 int const VAR_16 ;
 int const VAR_17 ;


 int const VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

 int const VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;



 int const FUNC_0 (int ) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int const VAR_32 ;
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (struct ath_hal*,int const) ;
 int FUNC_4 (struct ath_hal*,int const,int) ;
 int FUNC_5 (struct ath_hal*) ;
 int FUNC_6 (struct ath_hal*) ;
 int FUNC_7 (struct ath_hal*) ;
 int FUNC_8 (int,int) ;
 size_t FUNC_9 (int) ;
 int FUNC_10 (struct ath_hal*,int,scalar_t__) ;
 int FUNC_11 (struct ath_hal*,struct ieee80211_channel const*) ;

__attribute__((used)) static void
FUNC_12(struct ath_hal *VAR_33, const struct ieee80211_channel *VAR_34)
{
    uint16_t VAR_35 = FUNC_11(VAR_33, VAR_34);
    static const int VAR_36[4] = { 130, 129,
                133, 132 };
    static const int VAR_37[4] = { 128, 131,
                135, 134 };
    static const int VAR_38[4] = { 0, 100, 0, 0 };

    int VAR_39 = VAR_2;
    int VAR_40, VAR_41;
    int VAR_42;
    int VAR_43;
    int VAR_44;
    int VAR_45, VAR_46, VAR_47;
    int VAR_48, VAR_49;
    int VAR_50;

    int8_t VAR_51[123];
    int8_t VAR_52[123];
    int8_t VAR_53;
    int VAR_54;
    int VAR_55;
    HAL_BOOL VAR_56 = FUNC_1(VAR_34);

    FUNC_2(VAR_51, sizeof(VAR_51));
    FUNC_2(VAR_52, sizeof(VAR_52));






    for (VAR_50 = 0; VAR_50 < VAR_0; VAR_50++) {
        VAR_55 = FUNC_10(VAR_33, VAR_50, VAR_56);
        if (VAR_2 == VAR_55)
            break;
        VAR_55 = VAR_55 - (VAR_35 * 10);
        if ((VAR_55 > -95) && (VAR_55 < 95)) {
            VAR_39 = VAR_55;
            break;
        }
    }
    if (VAR_2 == VAR_39)
        return;

    VAR_40 = VAR_39 * 32;

    VAR_48 = FUNC_3(VAR_33, FUNC_0(0));
    VAR_49 = VAR_48 | (VAR_31 |
        VAR_30 |
        VAR_28 |
        VAR_29);

    FUNC_6(VAR_33);

    FUNC_4(VAR_33, FUNC_0(0), VAR_49);

    VAR_49 = (VAR_21 |
        VAR_19 |
        VAR_22 |
        VAR_20 |
        FUNC_8(VAR_1, VAR_23));
    FUNC_4(VAR_33, VAR_18, VAR_49);






    VAR_43 = ((VAR_39 * 524288) / 100) &
        VAR_25;




    VAR_44 = FUNC_1(VAR_34) ? 440 : 400;
    VAR_42 = ((VAR_39 * 2048) / VAR_44) & 0x3ff;

    VAR_49 = (VAR_27 |
        FUNC_8(VAR_42, VAR_26) |
        FUNC_8(VAR_43, VAR_25));
    FUNC_4(VAR_33, VAR_24, VAR_49);
    VAR_41 = -6000;
    VAR_45 = VAR_40 + 100;
    VAR_46 = VAR_40 - 100;

    for (VAR_50 = 0; VAR_50 < 4; VAR_50++) {
        int VAR_57 = 0;
        int VAR_58 = 0;
        int VAR_59 = 0;
        for (VAR_59 = 0; VAR_59 < 30; VAR_59++) {
            if ((VAR_41 > VAR_46) && (VAR_41 < VAR_45)) {
                VAR_57 = VAR_57 | 0x1 << VAR_59;
                VAR_58 = VAR_58 | 0x1 << VAR_59;
            }
            VAR_41 += 100;
        }
        VAR_41 += VAR_38[VAR_50];
        FUNC_4(VAR_33, VAR_36[VAR_50], VAR_57);
        FUNC_4(VAR_33, VAR_37[VAR_50], VAR_58);
    }
    VAR_47 = 6100;
    VAR_45 = VAR_40 + 120;
    VAR_46 = VAR_40 - 120;

    for (VAR_50 = 0; VAR_50 < 123; VAR_50++) {
        if ((VAR_47 > VAR_46) && (VAR_47 < VAR_45)) {
            if ((FUNC_9(VAR_47 - VAR_40)) < 75) {
                VAR_53 = 1;
            } else {
                VAR_53 = 0;
            }
            if (VAR_47 < 0) {
                VAR_51[FUNC_9(VAR_47 / 100)] = VAR_53;
            } else {
                VAR_52[VAR_47 / 100] = VAR_53;
            }
        }
        VAR_47 -= 100;
    }

    VAR_54 = (VAR_51[46] << 30) | (VAR_51[47] << 28)
          | (VAR_51[48] << 26) | (VAR_51[49] << 24)
          | (VAR_51[50] << 22) | (VAR_51[51] << 20)
          | (VAR_51[52] << 18) | (VAR_51[53] << 16)
          | (VAR_51[54] << 14) | (VAR_51[55] << 12)
          | (VAR_51[56] << 10) | (VAR_51[57] << 8)
          | (VAR_51[58] << 6) | (VAR_51[59] << 4)
          | (VAR_51[60] << 2) | (VAR_51[61] << 0);
    FUNC_4(VAR_33, VAR_7, VAR_54);
    FUNC_4(VAR_33, VAR_32, VAR_54);

    VAR_54 = (VAR_51[31] << 28)
          | (VAR_51[32] << 26) | (VAR_51[33] << 24)
          | (VAR_51[34] << 22) | (VAR_51[35] << 20)
          | (VAR_51[36] << 18) | (VAR_51[37] << 16)
          | (VAR_51[48] << 14) | (VAR_51[39] << 12)
          | (VAR_51[40] << 10) | (VAR_51[41] << 8)
          | (VAR_51[42] << 6) | (VAR_51[43] << 4)
          | (VAR_51[44] << 2) | (VAR_51[45] << 0);
    FUNC_4(VAR_33, VAR_8, VAR_54);
    FUNC_4(VAR_33, VAR_12, VAR_54);

    VAR_54 = (VAR_51[16] << 30) | (VAR_51[16] << 28)
          | (VAR_51[18] << 26) | (VAR_51[18] << 24)
          | (VAR_51[20] << 22) | (VAR_51[20] << 20)
          | (VAR_51[22] << 18) | (VAR_51[22] << 16)
          | (VAR_51[24] << 14) | (VAR_51[24] << 12)
          | (VAR_51[25] << 10) | (VAR_51[26] << 8)
          | (VAR_51[27] << 6) | (VAR_51[28] << 4)
          | (VAR_51[29] << 2) | (VAR_51[30] << 0);
    FUNC_4(VAR_33, VAR_9, VAR_54);
    FUNC_4(VAR_33, VAR_11, VAR_54);

    VAR_54 = (VAR_51[ 0] << 30) | (VAR_51[ 1] << 28)
          | (VAR_51[ 2] << 26) | (VAR_51[ 3] << 24)
          | (VAR_51[ 4] << 22) | (VAR_51[ 5] << 20)
          | (VAR_51[ 6] << 18) | (VAR_51[ 7] << 16)
          | (VAR_51[ 8] << 14) | (VAR_51[ 9] << 12)
          | (VAR_51[10] << 10) | (VAR_51[11] << 8)
          | (VAR_51[12] << 6) | (VAR_51[13] << 4)
          | (VAR_51[14] << 2) | (VAR_51[15] << 0);
    FUNC_4(VAR_33, VAR_17, VAR_54);
    FUNC_4(VAR_33, VAR_10, VAR_54);

    VAR_54 = (VAR_52[15] << 28)
          | (VAR_52[14] << 26) | (VAR_52[13] << 24)
          | (VAR_52[12] << 22) | (VAR_52[11] << 20)
          | (VAR_52[10] << 18) | (VAR_52[ 9] << 16)
          | (VAR_52[ 8] << 14) | (VAR_52[ 7] << 12)
          | (VAR_52[ 6] << 10) | (VAR_52[ 5] << 8)
          | (VAR_52[ 4] << 6) | (VAR_52[ 3] << 4)
          | (VAR_52[ 2] << 2) | (VAR_52[ 1] << 0);
    FUNC_4(VAR_33, VAR_3, VAR_54);
    FUNC_4(VAR_33, VAR_13, VAR_54);

    VAR_54 = (VAR_52[30] << 28)
          | (VAR_52[29] << 26) | (VAR_52[28] << 24)
          | (VAR_52[27] << 22) | (VAR_52[26] << 20)
          | (VAR_52[25] << 18) | (VAR_52[24] << 16)
          | (VAR_52[23] << 14) | (VAR_52[22] << 12)
          | (VAR_52[21] << 10) | (VAR_52[20] << 8)
          | (VAR_52[19] << 6) | (VAR_52[18] << 4)
          | (VAR_52[17] << 2) | (VAR_52[16] << 0);
    FUNC_4(VAR_33, VAR_4, VAR_54);
    FUNC_4(VAR_33, VAR_14, VAR_54);

    VAR_54 = (VAR_52[45] << 28)
          | (VAR_52[44] << 26) | (VAR_52[43] << 24)
          | (VAR_52[42] << 22) | (VAR_52[41] << 20)
          | (VAR_52[40] << 18) | (VAR_52[39] << 16)
          | (VAR_52[38] << 14) | (VAR_52[37] << 12)
          | (VAR_52[36] << 10) | (VAR_52[35] << 8)
          | (VAR_52[34] << 6) | (VAR_52[33] << 4)
          | (VAR_52[32] << 2) | (VAR_52[31] << 0);
    FUNC_4(VAR_33, VAR_5, VAR_54);
    FUNC_4(VAR_33, VAR_15, VAR_54);

    VAR_54 = (VAR_52[61] << 30) | (VAR_52[60] << 28)
          | (VAR_52[59] << 26) | (VAR_52[58] << 24)
          | (VAR_52[57] << 22) | (VAR_52[56] << 20)
          | (VAR_52[55] << 18) | (VAR_52[54] << 16)
          | (VAR_52[53] << 14) | (VAR_52[52] << 12)
          | (VAR_52[51] << 10) | (VAR_52[50] << 8)
          | (VAR_52[49] << 6) | (VAR_52[48] << 4)
          | (VAR_52[47] << 2) | (VAR_52[46] << 0);
    FUNC_4(VAR_33, VAR_6, VAR_54);
    FUNC_4(VAR_33, VAR_16, VAR_54);

    FUNC_7(VAR_33);
    FUNC_5(VAR_33);
}
