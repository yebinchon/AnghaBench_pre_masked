
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {int ah_powerLimit; struct ieee80211_channel* ah_curchan; } ;
typedef int HAL_BOOL ;


 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (struct ath_hal*) ;
 int VAR_0 ;
 int FUNC_2 (struct ath_hal*,struct ieee80211_channel*,int ) ;
 int FUNC_3 (struct ath_hal*,struct ieee80211_channel*,int *) ;

HAL_BOOL
FUNC_4(struct ath_hal *VAR_1, uint32_t VAR_2)
{

 struct ieee80211_channel VAR_3 = *FUNC_1(VAR_1)->ah_curchan;
 uint16_t VAR_4[2];
 HAL_BOOL VAR_5;

 FUNC_2(VAR_1, &VAR_3, VAR_5);
 FUNC_1(VAR_1)->ah_powerLimit = FUNC_0(VAR_2, VAR_0);
 return FUNC_3(VAR_1, &VAR_3, VAR_4);
}
