
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_channel {int dummy; } ;
struct ath_hal_5212 {int ah_diversity; scalar_t__ ah_antControl; int ah_phyPowerOn; } ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {struct ieee80211_channel* ah_curchan; } ;
typedef int HAL_BOOL ;
typedef scalar_t__ HAL_ANT_SETTING ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 struct ieee80211_channel const* VAR_0 ;
 TYPE_1__* FUNC_1 (struct ath_hal*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ath_hal*,scalar_t__,struct ieee80211_channel const*) ;

HAL_BOOL
FUNC_3(struct ath_hal *VAR_3, HAL_ANT_SETTING VAR_4)
{
 struct ath_hal_5212 *VAR_5 = FUNC_0(VAR_3);
 const struct ieee80211_channel *VAR_6 = FUNC_1(VAR_3)->ah_curchan;

 if (!VAR_5->ah_phyPowerOn || VAR_6 == VAR_0) {

  VAR_5->ah_antControl = VAR_4;
  VAR_5->ah_diversity = (VAR_4 == VAR_2);
  return VAR_1;
 }
 return FUNC_2(VAR_3, VAR_4, VAR_6);
}
