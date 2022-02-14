
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal {int (* ah_setDfsCacTxQuiet ) (struct ath_hal*,int ) ;} ;
typedef int HAL_BOOL ;


 int FUNC_0 (struct ath_hal*,int ) ;

void
FUNC_1(struct ath_hal *VAR_0, HAL_BOOL VAR_1)
{

 if (VAR_0->ah_setDfsCacTxQuiet == ((void*)0))
  return;
 VAR_0->ah_setDfsCacTxQuiet(VAR_0, VAR_1);
}
