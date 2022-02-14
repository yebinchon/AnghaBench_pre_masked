
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_private {int ah_curchan; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 struct ath_hal_private* FUNC_0 (struct ath_hal*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ath_hal*,int ) ;

HAL_BOOL
FUNC_2(struct ath_hal *VAR_2)
{
    struct ath_hal_private *VAR_3 = FUNC_0(VAR_2);

    if (FUNC_1(VAR_2, VAR_3->ah_curchan)) {
        return VAR_1;
    }
    return VAR_0;
}
