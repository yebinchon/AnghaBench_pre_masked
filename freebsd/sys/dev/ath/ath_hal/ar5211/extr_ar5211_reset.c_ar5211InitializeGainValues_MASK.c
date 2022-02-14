
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t currStepNum; int loTrig; int hiTrig; int active; int * currStep; } ;
struct ath_hal_5211 {TYPE_1__ ah_gainValues; } ;
struct ath_hal {int dummy; } ;
struct TYPE_4__ {size_t defaultStepNum; int * optStep; } ;
typedef TYPE_1__ GAIN_VALUES ;


 struct ath_hal_5211* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

void
FUNC_1(struct ath_hal *VAR_2)
{
 struct ath_hal_5211 *VAR_3 = FUNC_0(VAR_2);
 GAIN_VALUES *VAR_4 = &VAR_3->ah_gainValues;


 VAR_4->currStepNum = VAR_1.defaultStepNum;
 VAR_4->currStep = &VAR_1.optStep[VAR_1.defaultStepNum];
 VAR_4->active = VAR_0;
 VAR_4->loTrig = 20;
 VAR_4->hiTrig = 35;
}
