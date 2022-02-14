
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_5__ {void* pChannels; } ;
struct TYPE_4__ {TYPE_2__* ee_modePowerArray5112; } ;
typedef TYPE_1__ HAL_EEPROM ;
typedef TYPE_2__ EEPROM_POWER_EXPN_5112 ;


 void* VAR_0 ;
 int FUNC_0 (void*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct ath_hal *VAR_3, HAL_EEPROM *VAR_4)
{
 int VAR_5;
 void *VAR_6;

 for (VAR_5 = VAR_1; VAR_5 <= VAR_2; VAR_5++) {
  EEPROM_POWER_EXPN_5112 *VAR_7 =
   &VAR_4->ee_modePowerArray5112[VAR_5];
  VAR_6 = VAR_7->pChannels;
  if (VAR_6 != VAR_0) {
   VAR_7->pChannels = VAR_0;
   FUNC_0(VAR_6);
  }
 }
}
