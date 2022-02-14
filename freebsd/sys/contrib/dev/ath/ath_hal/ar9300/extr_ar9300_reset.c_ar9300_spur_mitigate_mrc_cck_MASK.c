
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
typedef int u_int32_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {int channel; } ;
typedef TYPE_1__ HAL_CHANNEL_INTERNAL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 scalar_t__ FUNC_4 (struct ath_hal*) ;
 int FUNC_5 (scalar_t__,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (struct ieee80211_channel*) ;
 int VAR_10 ;
 int FUNC_7 (struct ath_hal*,int ,int ) ;
 int FUNC_8 (struct ath_hal*,int ,int ,int) ;
 scalar_t__* FUNC_9 (struct ath_hal*,int) ;
 TYPE_1__* FUNC_10 (struct ath_hal*,struct ieee80211_channel*) ;

__attribute__((used)) static void
FUNC_11(struct ath_hal *VAR_11, struct ieee80211_channel *VAR_12)
{
    int VAR_13;

    u_int32_t VAR_14[4] = { 2420, 2440, 2464, 2480 };
    u_int32_t VAR_15[2] = { 2440, 2464};
    int VAR_16, VAR_17 = 0, VAR_18;
    u_int8_t* VAR_19 = ((void*)0);
    int VAR_20;
    int VAR_21 = 10;
    int VAR_22 = VAR_10;
    HAL_CHANNEL_INTERNAL *VAR_23 = FUNC_10(VAR_11, VAR_12);





    if (FUNC_0(VAR_11) || FUNC_2(VAR_11) ||
        FUNC_4(VAR_11) || FUNC_3(VAR_11)) {
        VAR_19 = FUNC_9(VAR_11, 1);
        if (VAR_19[0] == 0) {
            return;
        }
        if (FUNC_6(VAR_12)) {
            VAR_21 = 19;
            if (FUNC_7(VAR_11, VAR_8, VAR_7)
                == 0x0)
            {
                VAR_20 = VAR_23->channel + 10;
            } else {
                VAR_20 = VAR_23->channel - 10;
            }
        } else {
            VAR_21 = 10;
            VAR_20 = VAR_23->channel;
        }
    } else if(FUNC_1(VAR_11)) {
        VAR_21 = 5;
        VAR_22 = 2;
        VAR_20 = VAR_23->channel;
    } else {
        VAR_21 = 10;
        VAR_22 = 4;
        VAR_20 = VAR_23->channel;
    }

    for (VAR_13 = 0; VAR_13 < VAR_22; VAR_13++) {
        VAR_17 = 0;

        if (FUNC_0(VAR_11) || FUNC_2(VAR_11) ||
            FUNC_4(VAR_11) || FUNC_3(VAR_11)) {
            VAR_16 =
                FUNC_5(VAR_19[VAR_13], VAR_9) - VAR_20;
        } else if(FUNC_1(VAR_11)) {
            VAR_16 = VAR_15[VAR_13] - VAR_20;
        } else {
            VAR_16 = VAR_14[VAR_13] - VAR_20;
        }

        if (VAR_16 < 0) {
            VAR_17 = 1;
            VAR_16 = -VAR_16;
        }
        if (VAR_16 < VAR_21) {
            VAR_18 = (int)((VAR_16 << 19) / 11);
            if (VAR_17 == 1) {
                VAR_18 = -VAR_18;
            }
            VAR_18 = VAR_18 & 0xfffff;

            FUNC_8(VAR_11,
                VAR_0, VAR_1, 0x7);

            FUNC_8(VAR_11,
                VAR_2, VAR_5, 0x7f);

            FUNC_8(VAR_11,
                VAR_2, VAR_4, 0x2);

            FUNC_8(VAR_11,
                VAR_2, VAR_6, 0x1);

            FUNC_8(VAR_11,
                VAR_2, VAR_3,
                VAR_18);
            return;
        }
    }


    FUNC_8(VAR_11, VAR_0, VAR_1, 0x5);

    FUNC_8(VAR_11,
        VAR_2, VAR_6, 0x0);

    FUNC_8(VAR_11,
        VAR_2, VAR_3, 0x0);
}
