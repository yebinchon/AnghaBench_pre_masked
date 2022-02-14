
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
typedef int int8_t ;
struct TYPE_4__ {TYPE_1__* ah_eeprom; } ;
struct TYPE_3__ {int ee_antennaGainMax; } ;
typedef int HAL_STATUS ;
typedef TYPE_1__ HAL_EEPROM_v4k ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;

 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static HAL_STATUS
FUNC_1(struct ath_hal *VAR_2, int VAR_3, int VAR_4)
{
 HAL_EEPROM_v4k *VAR_5 = FUNC_0(VAR_2)->ah_eeprom;

 switch (VAR_3) {
 case 128:
  VAR_5->ee_antennaGainMax = (int8_t) VAR_4;
  return VAR_1;
 }
 return VAR_0;
}
