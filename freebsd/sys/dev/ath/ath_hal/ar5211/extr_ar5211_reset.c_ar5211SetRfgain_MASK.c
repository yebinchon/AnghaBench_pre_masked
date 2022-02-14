
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_11__ {TYPE_3__* ah_eeprom; } ;
struct TYPE_10__ {TYPE_2__* currStep; int active; } ;
struct TYPE_7__ {int gSel; int pd84; int pd90; int clip; } ;
struct TYPE_9__ {TYPE_1__ ee_cornerCal; } ;
struct TYPE_8__ {int * paramVal; } ;
typedef TYPE_3__ HAL_EEPROM ;
typedef TYPE_4__ GAIN_VALUES ;


 TYPE_6__* FUNC_0 (struct ath_hal*) ;

__attribute__((used)) static void
FUNC_1(struct ath_hal *VAR_0, const GAIN_VALUES *VAR_1)
{
 HAL_EEPROM *VAR_2 = FUNC_0(VAR_0)->ah_eeprom;

 if (!VAR_1->active)
  return;
 VAR_2->ee_cornerCal.clip = VAR_1->currStep->paramVal[0];
 VAR_2->ee_cornerCal.pd90 = VAR_1->currStep->paramVal[1];
 VAR_2->ee_cornerCal.pd84 = VAR_1->currStep->paramVal[2];
 VAR_2->ee_cornerCal.gSel = VAR_1->currStep->paramVal[3];
}
