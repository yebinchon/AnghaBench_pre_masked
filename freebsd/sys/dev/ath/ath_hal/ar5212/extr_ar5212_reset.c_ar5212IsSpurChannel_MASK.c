
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 scalar_t__ FUNC_0 (struct ath_hal*) ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 int FUNC_3 (struct ath_hal*,struct ieee80211_channel const*) ;

HAL_BOOL
FUNC_4(struct ath_hal *VAR_0, const struct ieee80211_channel *VAR_1)
{
 uint16_t VAR_2 = FUNC_3(VAR_0, VAR_1);
 uint32_t VAR_3 =
     ((FUNC_1(VAR_0) || FUNC_2(VAR_0) || FUNC_0(VAR_0)) ? 40 : 32);
 return ( ((VAR_2 % VAR_3) != 0)
              && (((VAR_2 % VAR_3) < 10)
             || (((VAR_2) % VAR_3) > 22)) );
}
