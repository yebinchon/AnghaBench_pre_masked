
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_4__ {int ah_diversityControl; } ;
struct TYPE_3__ {struct ieee80211_channel* ah_curchan; } ;
typedef int HAL_BOOL ;
typedef int HAL_ANT_SETTING ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 struct ieee80211_channel const* VAR_0 ;
 TYPE_1__* FUNC_1 (struct ath_hal*) ;
 int VAR_1 ;
 int FUNC_2 (struct ath_hal*,int ,struct ieee80211_channel const*) ;

HAL_BOOL
FUNC_3(struct ath_hal *VAR_2, HAL_ANT_SETTING VAR_3)
{
 const struct ieee80211_channel *VAR_4 = FUNC_1(VAR_2)->ah_curchan;

 if (VAR_4 == VAR_0) {
  FUNC_0(VAR_2)->ah_diversityControl = VAR_3;
  return VAR_1;
 }
 return FUNC_2(VAR_2, VAR_3, VAR_4);
}
