
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal_9300 {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_4__ {int channel; } ;
typedef TYPE_1__ HAL_CHANNEL_INTERNAL ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct ath_hal*,int ,int ) ;
 int FUNC_6 (struct ath_hal*,int ,int ,int) ;
 int FUNC_7 (int) ;
 scalar_t__* FUNC_8 (struct ath_hal*,int) ;
 TYPE_1__* FUNC_9 (struct ath_hal*,struct ieee80211_channel*) ;

__attribute__((used)) static void
FUNC_10(struct ath_hal *VAR_31, struct ieee80211_channel *VAR_32)
{
    int VAR_33;
    int VAR_34 = 10;
    int VAR_35 = 0;
    int VAR_36 = 0;
    int VAR_37 = 0;
    int VAR_38 = 0;
    int VAR_39 = 0;
    int VAR_40;
    int VAR_41;
    u_int8_t* VAR_42;
    struct ath_hal_9300 *VAR_43;
    VAR_43 = FUNC_0(VAR_31);
    HAL_CHANNEL_INTERNAL *VAR_44 = FUNC_9(VAR_31, VAR_32);

    if (FUNC_4(VAR_44)) {
        VAR_42 = FUNC_8(VAR_31, 0);
        VAR_41 = 0;
    } else {
        VAR_42 = FUNC_8(VAR_31, 1);
        VAR_41 = 1;
    }

    if (FUNC_3(VAR_32)) {
        VAR_34 = 19;
        if (FUNC_5(VAR_31, VAR_4, VAR_3)
            == 0x0)
        {
            VAR_33 = VAR_44->channel - 10;
        } else {
            VAR_33 = VAR_44->channel + 10;
        }
    } else {
        VAR_34 = 10;
        VAR_33 = VAR_44->channel;
    }


    FUNC_6(VAR_31, VAR_26, VAR_29, 0);
    FUNC_6(VAR_31, VAR_21, VAR_23, 0);
    FUNC_6(VAR_31, VAR_21, VAR_22, 0);
    FUNC_6(VAR_31,
        VAR_10, VAR_11, 0);
    FUNC_6(VAR_31,
        VAR_21, VAR_24, 0);
    FUNC_6(VAR_31,
        VAR_21, VAR_25, 0);
    FUNC_6(VAR_31, VAR_26, VAR_30, 0);
    FUNC_6(VAR_31, VAR_15, VAR_18, 0);
    FUNC_6(VAR_31,
        VAR_15, VAR_17, 0);
    FUNC_6(VAR_31, VAR_15, VAR_16, 0);
    FUNC_6(VAR_31, VAR_26, VAR_28, 0);
    FUNC_6(VAR_31, VAR_26, VAR_27, 0);
    FUNC_6(VAR_31,
        VAR_7, VAR_9, 0);
    FUNC_6(VAR_31,
        VAR_12, VAR_14, 0);
    FUNC_6(VAR_31,
        VAR_0, VAR_2, 0);
    FUNC_6(VAR_31,
        VAR_7, VAR_8, 0);
    FUNC_6(VAR_31,
        VAR_0, VAR_1, 0);
    FUNC_6(VAR_31,
        VAR_12, VAR_13, 0);
    FUNC_6(VAR_31, VAR_15, VAR_19, 0);

    VAR_40 = 0;
    while (VAR_42[VAR_40] && VAR_40 < 5) {
        VAR_35 = FUNC_2(VAR_42[VAR_40], VAR_41) - VAR_33;
        if (FUNC_7(VAR_35) < VAR_34) {






            if (FUNC_3(VAR_32)) {
                if (VAR_35 < 0) {
                    if (FUNC_5(
                        VAR_31, VAR_4, VAR_3) == 0x0)
                    {
                        VAR_37 = 1;
                    } else {
                        VAR_37 = 0;
                    }
                    VAR_36 = ((VAR_35 + 10) << 9) / 11;
                } else {
                    if (FUNC_5(VAR_31,
                        VAR_4, VAR_3) == 0x0)
                    {
                        VAR_37 = 0;
                    } else {
                        VAR_37 = 1;
                    }
                    VAR_36 = ((VAR_35 - 10) << 9) / 11;
                }
                VAR_38 = (VAR_35 << 17) / 5;
            } else {
                VAR_37 = 0;
                VAR_36 = (VAR_35 << 9) / 11;
                VAR_38 = (VAR_35 << 18) / 5;
            }
            VAR_36 = VAR_36 & 0x3ff;
            VAR_38 = VAR_38 & 0xfffff;
            FUNC_6(VAR_31,
                VAR_26, VAR_29, 0x1);
            FUNC_6(VAR_31,
                VAR_21, VAR_23, VAR_36);
            FUNC_6(VAR_31,
                VAR_21, VAR_22,
                VAR_38);
            FUNC_6(VAR_31,
                VAR_10, VAR_11,
                VAR_37);
            FUNC_6(VAR_31,
                VAR_21, VAR_24, 0x1);
            FUNC_6(VAR_31,
                VAR_21, VAR_25,
                0x1);
            FUNC_6(VAR_31,
                VAR_26, VAR_30, 0x1);
            FUNC_6(VAR_31,
                VAR_15, VAR_20, 34);
            FUNC_6(VAR_31,
                VAR_15, VAR_18, 1);







            if (!FUNC_1(VAR_31) && (FUNC_5(VAR_31, VAR_5,
                                           VAR_6) == 0x1)) {
                FUNC_6(VAR_31, VAR_15,
                    VAR_17, 1);
            }

            VAR_39 = (VAR_35 << 4) / 5;
            if (VAR_39 < 0) {
                VAR_39 = VAR_39 - 1;
            }
            VAR_39 = VAR_39 & 0x7f;


            FUNC_6(VAR_31,
                VAR_15, VAR_16, 0x1);
            FUNC_6(VAR_31,
                VAR_26, VAR_28, 0x1);
            FUNC_6(VAR_31,
                VAR_26, VAR_27, 0x1);
            FUNC_6(VAR_31,
                VAR_7,
                VAR_9, VAR_39);
            FUNC_6(VAR_31,
                VAR_12, VAR_14,
                VAR_39);
            FUNC_6(VAR_31,
                VAR_0,
                VAR_2, VAR_39);
            FUNC_6(VAR_31,
                VAR_7, VAR_8,
                0xc);
            FUNC_6(VAR_31,
                VAR_0, VAR_1,
                0xc);
            FUNC_6(VAR_31,
                VAR_12, VAR_13, 0xa0);
            FUNC_6(VAR_31,
                VAR_15, VAR_19, 0xff);
            break;
        }
        VAR_40++;
    }
}
