
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_channel {int dummy; } ;
struct ath_hal_5212 {TYPE_1__* ah_rfHal; } ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {int (* setChannel ) (struct ath_hal*,struct ieee80211_channel const*) ;} ;
typedef int HAL_BOOL ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ath_hal*,struct ieee80211_channel const*) ;

HAL_BOOL
FUNC_2(struct ath_hal *VAR_2, const struct ieee80211_channel *VAR_3)
{
 struct ath_hal_5212 *VAR_4 = FUNC_0(VAR_2);


 if (!VAR_4->ah_rfHal->setChannel(VAR_2, VAR_3))
  return VAR_0;
 return VAR_1;
}
