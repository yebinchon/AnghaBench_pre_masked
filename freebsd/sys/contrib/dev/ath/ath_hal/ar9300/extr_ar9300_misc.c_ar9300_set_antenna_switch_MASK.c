
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal_9300 {int ah_diversity_control; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;
typedef int HAL_ANT_SETTING ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;

HAL_BOOL
FUNC_1(struct ath_hal *VAR_1,
    HAL_ANT_SETTING VAR_2, const struct ieee80211_channel *VAR_3,
    u_int8_t *VAR_4, u_int8_t *VAR_5, u_int8_t *VAR_6)
{
    struct ath_hal_9300 *VAR_7 = FUNC_0(VAR_1);
    VAR_7->ah_diversity_control = VAR_2;

    return VAR_0;
}
