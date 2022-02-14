
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
typedef size_t u_int ;
struct ath_hal_9300 {scalar_t__ ah_cal_mem; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;

HAL_BOOL
FUNC_1(struct ath_hal *VAR_1, u_int VAR_2, u_int16_t *VAR_3)
{
    struct ath_hal_9300 *VAR_4 = FUNC_0(VAR_1);

    *VAR_3 = ((u_int16_t *)VAR_4->ah_cal_mem)[VAR_2];
    return VAR_0;
}
