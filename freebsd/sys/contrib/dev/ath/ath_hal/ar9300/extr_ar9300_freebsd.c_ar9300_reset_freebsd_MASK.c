
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_channel {int dummy; } ;
struct TYPE_2__ {int halRxChainMask; int halTxChainMask; } ;
struct ath_hal_private {TYPE_1__ ah_caps; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_STATUS ;
typedef int HAL_RESET_TYPE ;
typedef int HAL_OPMODE ;
typedef int HAL_HT_MACMODE ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 struct ath_hal_private* FUNC_0 (struct ath_hal*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ieee80211_channel*) ;
 int FUNC_2 (struct ath_hal*,int ,struct ieee80211_channel*,int ,int ,int ,int ,int ,int *,int ) ;

HAL_BOOL
FUNC_3(struct ath_hal *VAR_4, HAL_OPMODE VAR_5,
    struct ieee80211_channel *VAR_6, HAL_BOOL VAR_7,
    HAL_RESET_TYPE VAR_8,
    HAL_STATUS *VAR_9)
{
 HAL_BOOL VAR_10;
 HAL_HT_MACMODE VAR_11;
 struct ath_hal_private *VAR_12 = FUNC_0(VAR_4);

 VAR_11 =
     FUNC_1(VAR_6) ?
         VAR_3 : VAR_2;

 VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_11,
     VAR_12->ah_caps.halTxChainMask,
     VAR_12->ah_caps.halRxChainMask,
     VAR_1,
     VAR_7,
     VAR_9,
     VAR_0);

 return (VAR_10);
}
