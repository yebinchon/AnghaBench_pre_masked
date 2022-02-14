
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_5212 {scalar_t__ ah_enable32kHzClock; } ;
struct ath_hal {int dummy; } ;
typedef scalar_t__ HAL_OPMODE ;
typedef int HAL_BOOL ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct ath_hal*,int ) ;

HAL_BOOL
FUNC_2(struct ath_hal *VAR_5, HAL_OPMODE VAR_6)
{
 if (VAR_6 != VAR_3) {
  struct ath_hal_5212 *VAR_7 = FUNC_0(VAR_5);
  return FUNC_1(VAR_5, VAR_1) &&
         (VAR_7->ah_enable32kHzClock == VAR_4 ||
          VAR_7->ah_enable32kHzClock == VAR_2);
 } else
  return VAR_0;
}
