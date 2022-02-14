
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_5212 {int ah_stats; int ah_mibStats; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_ANI_STATS ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*,int *) ;

HAL_ANI_STATS *
FUNC_2(struct ath_hal *VAR_0)
{
 struct ath_hal_5212 *VAR_1 = FUNC_0(VAR_0);



 FUNC_1(VAR_0, &VAR_1->ah_mibStats);
 return &VAR_1->ah_stats;
}
