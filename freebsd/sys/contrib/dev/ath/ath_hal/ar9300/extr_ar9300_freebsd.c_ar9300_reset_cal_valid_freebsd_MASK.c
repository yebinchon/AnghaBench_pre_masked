
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int FUNC_0 (struct ath_hal*,struct ieee80211_channel const*,int *,int) ;

HAL_BOOL
FUNC_1(struct ath_hal *VAR_1,
    const struct ieee80211_channel *VAR_2)
{

 HAL_BOOL VAR_3 = VAR_0;

 FUNC_0(VAR_1, VAR_2, &VAR_3, 0xffffffff);
 return (VAR_3);
}
