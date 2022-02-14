
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal_private {int ah_powerLimit; int ah_extraTxPow; struct ieee80211_channel* ah_curchan; } ;
struct ath_hal_9300 {int ah_eeprom; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_CHANNEL_INTERNAL ;
typedef int HAL_BOOL ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 struct ath_hal_private* FUNC_2 (struct ath_hal*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct ath_hal*,int *,struct ieee80211_channel const*,int ,int ,int ,int ) ;
 int * FUNC_4 (struct ath_hal*,struct ieee80211_channel const*) ;
 int FUNC_5 (struct ath_hal_private*,int *,struct ieee80211_channel const*) ;
 int FUNC_6 (struct ath_hal*,struct ieee80211_channel const*) ;
 int FUNC_7 (struct ath_hal*,struct ieee80211_channel const*) ;

HAL_BOOL
FUNC_8(struct ath_hal *VAR_4, u_int32_t VAR_5,
    u_int16_t VAR_6, u_int16_t VAR_7)
{
    struct ath_hal_9300 *VAR_8 = FUNC_0(VAR_4);
    struct ath_hal_private *VAR_9 = FUNC_2(VAR_4);
    const struct ieee80211_channel *VAR_10 = VAR_9->ah_curchan;
    HAL_CHANNEL_INTERNAL *VAR_11 = FUNC_4(VAR_4, VAR_10);

    if (((void*)0) == VAR_10) {
        return VAR_0;
    }

    VAR_9->ah_powerLimit = FUNC_1(VAR_5, VAR_3);
    VAR_9->ah_extraTxPow = VAR_6;

    if(VAR_10 == ((void*)0)) {
        return VAR_0;
    }
    if (FUNC_3(VAR_4, &VAR_8->ah_eeprom, VAR_10,
        FUNC_7(VAR_4, VAR_10), FUNC_6(VAR_4, VAR_10),
        FUNC_5(VAR_9, VAR_11, VAR_10),
        FUNC_1(VAR_3, VAR_9->ah_powerLimit)) != VAR_2)
    {
        return VAR_0;
    }
    return VAR_1;
}
