
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {int halRxChainMask; } ;
struct TYPE_4__ {TYPE_1__ ah_caps; } ;
typedef int HAL_BOOL ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*,struct ieee80211_channel*,int ,int ,int *,int ,int*) ;

HAL_BOOL
FUNC_2(struct ath_hal *VAR_0,
    struct ieee80211_channel *VAR_1, u_int VAR_2, HAL_BOOL VAR_3,
    HAL_BOOL *VAR_4)
{

 u_int32_t VAR_5 = 0xfffffff;

 return FUNC_1(VAR_0, VAR_1,
     FUNC_0(VAR_0)->ah_caps.halRxChainMask,
     VAR_3,
     VAR_4,
     0,
     &VAR_5);
}
