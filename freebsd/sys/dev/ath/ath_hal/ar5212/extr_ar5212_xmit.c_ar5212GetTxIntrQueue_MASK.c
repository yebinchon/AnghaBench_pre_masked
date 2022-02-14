
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ath_hal_5212 {int ah_intrTxqs; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;

void
FUNC_1(struct ath_hal *VAR_0, uint32_t *VAR_1)
{
 struct ath_hal_5212 *VAR_2 = FUNC_0(VAR_0);
 *VAR_1 &= VAR_2->ah_intrTxqs;
 VAR_2->ah_intrTxqs &= ~(*VAR_1);
}
