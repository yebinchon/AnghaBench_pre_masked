
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t currStepNum; int loTrig; int hiTrig; void* active; int * currStep; } ;
struct ath_hal_5212 {TYPE_1__ ah_gainValues; } ;
struct ath_hal {int dummy; } ;
struct TYPE_6__ {size_t defaultStepNum; int * optStep; } ;
struct TYPE_5__ {size_t defaultStepNum; int * optStep; } ;
typedef TYPE_1__ GAIN_VALUES ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 void* VAR_0 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;

void
FUNC_2(struct ath_hal *VAR_3)
{
 struct ath_hal_5212 *VAR_4 = FUNC_0(VAR_3);
 GAIN_VALUES *VAR_5 = &VAR_4->ah_gainValues;


 if (FUNC_1(VAR_3)) {
  VAR_5->currStepNum = VAR_2;
  VAR_5->currStep =
   &VAR_2[VAR_2];
  VAR_5->active = VAR_0;
  VAR_5->loTrig = 20;
  VAR_5->hiTrig = 85;
 } else {
  VAR_5->currStepNum = VAR_1.defaultStepNum;
  VAR_5->currStep = &VAR_1.optStep[VAR_1.defaultStepNum];
  VAR_5->active = VAR_0;
  VAR_5->loTrig = 20;
  VAR_5->hiTrig = 35;
 }
}
