
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ah_eeprom; } ;
struct TYPE_3__ {int ee_Amode; int ee_Bmode; int ee_Gmode; int ee_turbo5Disable; int ee_turbo2Disable; int ee_opCap; } ;
typedef int HAL_STATUS ;
typedef TYPE_1__ HAL_EEPROM ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static HAL_STATUS
FUNC_1(struct ath_hal *VAR_6, int VAR_7, int VAR_8)
{
 HAL_EEPROM *VAR_9 = FUNC_0(VAR_6)->ah_eeprom;

 switch (VAR_7) {
 case 135:
  VAR_9->ee_Amode = VAR_8;
  return VAR_5;
 case 134:
  VAR_9->ee_Bmode = VAR_8;
  return VAR_5;
 case 130:
  VAR_9->ee_Gmode = VAR_8;
  return VAR_5;
 case 128:
  VAR_9->ee_turbo5Disable = VAR_8;
  return VAR_5;
 case 129:
  VAR_9->ee_turbo2Disable = VAR_8;
  return VAR_5;
 case 132:
  if (VAR_8)
   VAR_9->ee_opCap &= ~VAR_2;
  else
   VAR_9->ee_opCap |= VAR_2;
  return VAR_5;
 case 131:
  if (VAR_8)
   VAR_9->ee_opCap &= ~VAR_3;
  else
   VAR_9->ee_opCap |= VAR_3;
  return VAR_5;
 case 136:
  if (VAR_8)
   VAR_9->ee_opCap &= ~VAR_0;
  else
   VAR_9->ee_opCap |= VAR_0;
  return VAR_5;
 case 133:
  if (VAR_8)
   VAR_9->ee_opCap &= ~VAR_1;
  else
   VAR_9->ee_opCap |= VAR_1;
  return VAR_5;
 }
 return VAR_4;
}
