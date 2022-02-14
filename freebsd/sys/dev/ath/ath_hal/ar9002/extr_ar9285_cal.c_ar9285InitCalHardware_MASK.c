
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (struct ath_hal*,struct ieee80211_channel const*) ;

HAL_BOOL
FUNC_3(struct ath_hal *VAR_2,
    const struct ieee80211_channel *VAR_3)
{
 if (FUNC_0(VAR_2) && FUNC_1(VAR_2) &&
     (! FUNC_2(VAR_2, VAR_3)))
  return VAR_0;

 return VAR_1;
}
