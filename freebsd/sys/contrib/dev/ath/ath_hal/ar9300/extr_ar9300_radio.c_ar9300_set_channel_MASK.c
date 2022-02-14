
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u_int8_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct ieee80211_channel {int ic_flags; int ic_freq; } ;
struct ath_hal {int dummy; } ;
struct TYPE_10__ {scalar_t__ clk_25mhz; } ;
struct TYPE_9__ {struct ieee80211_channel* ah_curchan; } ;
struct TYPE_8__ {int synth_center; } ;
struct TYPE_7__ {int channel; } ;
typedef TYPE_1__ HAL_CHANNEL_INTERNAL ;
typedef int HAL_BOOL ;
typedef TYPE_2__ CHAN_CENTERS ;


 TYPE_6__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 TYPE_5__* FUNC_1 (struct ath_hal*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 scalar_t__ FUNC_4 (struct ath_hal*) ;
 scalar_t__ FUNC_5 (struct ath_hal*) ;
 scalar_t__ FUNC_6 (struct ath_hal*) ;
 scalar_t__ FUNC_7 (struct ath_hal*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (struct ieee80211_channel*) ;
 int FUNC_12 (struct ath_hal*,int ,int ) ;
 int FUNC_13 (struct ath_hal*,int ,int ,int) ;
 int FUNC_14 (struct ath_hal*,int ,int) ;
 int* VAR_7 ;
 int* VAR_8 ;
 int FUNC_15 (struct ath_hal*,struct ieee80211_channel*,TYPE_2__*) ;
 TYPE_1__* FUNC_16 (struct ath_hal*,struct ieee80211_channel*) ;
 int FUNC_17 (struct ath_hal*,int) ;
 int FUNC_18 (struct ath_hal*,int ,int ) ;

__attribute__((used)) static HAL_BOOL
FUNC_19(struct ath_hal *VAR_9, struct ieee80211_channel *VAR_10)
{
    u_int16_t VAR_11, VAR_12 = 0, VAR_13 = 0;
    u_int32_t VAR_14, VAR_15, VAR_16;
    u_int8_t VAR_17 = FUNC_0(VAR_9)->clk_25mhz;
    CHAN_CENTERS VAR_18;
    int VAR_19;
    FUNC_15(VAR_9, VAR_10, &VAR_18);
    VAR_14 = VAR_18.synth_center;

    if (VAR_14 < 4800) {
        VAR_11 = 1;

        if (FUNC_4(VAR_9)) {
            uint32_t VAR_20;
            VAR_20 = FUNC_17(VAR_9, VAR_14);
            FUNC_10(VAR_20 > 0 && VAR_20 <= 14);
            if (VAR_17) {
                VAR_15 = VAR_7[VAR_20 - 1];
            } else {
                VAR_15 = VAR_8[VAR_20 - 1];
            }
        } else if (FUNC_5(VAR_9) || FUNC_2(VAR_9)) {
            u_int32_t VAR_21;






            VAR_15 = (VAR_14 * 4) / 120;
            VAR_21 = (((VAR_14 * 4) % 120) * 0x20000) / 120;
            VAR_15 = (VAR_15 << 17) | (VAR_21);
        } else if (FUNC_7(VAR_9) || FUNC_6(VAR_9) || FUNC_3(VAR_9)) {
            u_int32_t VAR_22;
            if (VAR_17) {






                if (FUNC_6(VAR_9) || FUNC_3(VAR_9)) {

                    VAR_15 = (VAR_14 * 4) / 75;
                    VAR_22 = (((VAR_14 * 4) % 75) * 0x20000) / 75;
                } else {
                    VAR_15 = (VAR_14 * 2) / 75;
                    VAR_22 = (((VAR_14 * 2) % 75) * 0x20000) / 75;
                }
            } else {






                if (FUNC_6(VAR_9)) {

                    VAR_15 = (VAR_14 * 4) / 120;
                    VAR_22 = (((VAR_14 * 4) % 120) * 0x20000) / 120;
                } else {
                    VAR_15 = (VAR_14 * 2) / 120;
                    VAR_22 = (((VAR_14 * 2) % 120) * 0x20000) / 120;
                }
            }
            VAR_15 = (VAR_15 << 17) | (VAR_22);
        } else {
            VAR_15 = FUNC_8(VAR_14);
        }
    } else {
        VAR_11 = 0;
        if ((FUNC_7(VAR_9) || FUNC_6(VAR_9)) && VAR_17){
            u_int32_t VAR_23;






            VAR_15 = VAR_14 / 75 ;
            VAR_23 = ((VAR_14 % 75) * 0x20000) / 75;
            VAR_15 = (VAR_15 << 17) | (VAR_23);
        } else {
            VAR_15 = FUNC_9(VAR_14);

            VAR_15 >>= 1;
        }
    }



    VAR_12 = 1;
    VAR_13 = 0;
    VAR_19 = 0;

    VAR_16 = (VAR_11 << 29);
    FUNC_14(VAR_9, VAR_5, VAR_16);


    FUNC_13(VAR_9,
        VAR_2, VAR_4, 1);


    VAR_16 =
        (VAR_15 << 2) |
        (VAR_13 << 28) |
        (VAR_12 << 30) |
        (VAR_19 << 31);
    if (FUNC_11(VAR_10)) {
        VAR_16 += VAR_6;
    }
    FUNC_14(VAR_9, VAR_3, VAR_16);

    VAR_19 = 1;
    VAR_16 |= VAR_19 << 31;
    FUNC_14(VAR_9, VAR_3, VAR_16);


    FUNC_1(VAR_9)->ah_curchan = VAR_10;

    return VAR_1;
}
