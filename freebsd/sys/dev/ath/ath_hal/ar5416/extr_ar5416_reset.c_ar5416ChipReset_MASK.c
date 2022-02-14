
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_channel {int ic_freq; } ;
struct TYPE_4__ {scalar_t__ ah_force_full_reset; } ;
struct ath_hal {TYPE_1__ ah_config; } ;
struct TYPE_6__ {int (* ah_initPLL ) (struct ath_hal*,struct ieee80211_channel const*) ;} ;
struct TYPE_5__ {int ah_chipFullSleep; } ;
typedef int HAL_BOOL ;


 TYPE_3__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct ath_hal*,int ,int ) ;
 TYPE_2__* VAR_7 ;
 int FUNC_3 (struct ath_hal*,int ,int ) ;
 int FUNC_4 (struct ath_hal*,int ) ;
 int FUNC_5 (struct ath_hal*,struct ieee80211_channel const*) ;
 scalar_t__ FUNC_6 (struct ath_hal*,int ) ;
 int FUNC_7 (struct ath_hal*,struct ieee80211_channel const*) ;

HAL_BOOL
FUNC_8(struct ath_hal *VAR_8, const struct ieee80211_channel *VAR_9)
{
 FUNC_2(VAR_8, VAR_1, VAR_9 ? VAR_9->ic_freq : 0);



 if (FUNC_1(VAR_8) &&
     FUNC_6(VAR_8, VAR_3)) {
  if (!FUNC_4(VAR_8, VAR_5))
   return VAR_0;
 } else if (VAR_8->ah_config.ah_force_full_reset) {
  if (!FUNC_4(VAR_8, VAR_5))
   return VAR_0;
 } else {
  if (!FUNC_4(VAR_8, VAR_6))
   return VAR_0;
 }


 if (!FUNC_3(VAR_8, VAR_4, VAR_2))
        return VAR_0;





 FUNC_0(VAR_8)->ah_initPLL(VAR_8, VAR_9);







 FUNC_5(VAR_8, VAR_9);

 return VAR_2;
}
