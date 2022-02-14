
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_private {int ah_curchan; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 struct ath_hal_private* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*,int ) ;

HAL_BOOL
FUNC_2(struct ath_hal *VAR_0)
{
 struct ath_hal_private *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_0, VAR_1->ah_curchan);
}
