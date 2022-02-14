
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int dummy; } ;
struct ath_hal_9300 {int ah_supp_cals; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_CAL_TYPES ;
typedef int HAL_BOOL ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211_channel const*) ;



__attribute__((used)) inline static HAL_BOOL
FUNC_2(struct ath_hal *VAR_2, const struct ieee80211_channel *VAR_3,
    HAL_CAL_TYPES VAR_4)
{
    struct ath_hal_9300 *VAR_5 = FUNC_0(VAR_2);
    HAL_BOOL VAR_6 = VAR_0;

    switch (VAR_4 & VAR_5->ah_supp_cals) {
    case 129:

        if (!FUNC_1(VAR_3)) {
            VAR_6 = VAR_1;
        }
        break;
    case 128:
        VAR_6 = VAR_1;
        break;
    }

    return VAR_6;
}
