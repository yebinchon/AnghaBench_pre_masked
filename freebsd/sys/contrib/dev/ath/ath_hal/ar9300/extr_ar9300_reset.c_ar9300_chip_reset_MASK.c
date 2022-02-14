
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_channel {int ic_freq; } ;
struct ath_hal_9300 {scalar_t__ ah_chip_full_sleep; } ;
struct TYPE_2__ {int ah_force_full_reset; } ;
struct ath_hal {TYPE_1__ ah_config; } ;
typedef scalar_t__ HAL_BOOL ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct ath_hal*,int ,int ) ;
 int FUNC_3 (struct ath_hal*,int ) ;
 int FUNC_4 (struct ath_hal*,struct ieee80211_channel*) ;
 int FUNC_5 (struct ath_hal*) ;
 int FUNC_6 (struct ath_hal*,int ,scalar_t__) ;
 int FUNC_7 (struct ath_hal*,int) ;
 int FUNC_8 (struct ath_hal*,struct ieee80211_channel*) ;

HAL_BOOL
FUNC_9(struct ath_hal *VAR_9, struct ieee80211_channel *VAR_10)
{
    struct ath_hal_9300 *VAR_11 = FUNC_0(VAR_9);
    int VAR_12 = VAR_8;

    FUNC_2(VAR_9, VAR_1, VAR_10 ? VAR_10->ic_freq : 0);
    if (VAR_11->ah_chip_full_sleep ||
        (VAR_9->ah_config.ah_force_full_reset == 1) ||
        FUNC_3(VAR_9, VAR_5) ||
        (FUNC_3(VAR_9, VAR_3) & VAR_4)) {
            VAR_12 = VAR_7;
    }

    if (!FUNC_7(VAR_9, VAR_12)) {
        return VAR_0;
    }


    if (!FUNC_6(VAR_9, VAR_6, VAR_2)) {
        return VAR_0;
    }

    VAR_11->ah_chip_full_sleep = VAR_0;

    if (FUNC_1(VAR_9)) {
        FUNC_5(VAR_9);
    }

    FUNC_4(VAR_9, VAR_10);







    FUNC_8(VAR_9, VAR_10);

    return VAR_2;
}
