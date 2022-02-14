
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct ath_hal {int dummy; } ;
struct TYPE_6__ {TYPE_1__* ah_eeprom; } ;
struct TYPE_5__ {int numChannels; void* pChannels; } ;
struct TYPE_4__ {TYPE_2__* ee_modePowerArray5112; } ;
typedef TYPE_1__ HAL_EEPROM ;
typedef int HAL_BOOL ;
typedef int EXPN_DATA_PER_CHANNEL_5112 ;
typedef TYPE_2__ EEPROM_POWER_EXPN_5112 ;


 int VAR_0 ;
 void* VAR_1 ;
 TYPE_3__* FUNC_0 (struct ath_hal*) ;
 int VAR_2 ;




 int FUNC_1 (int,int) ;

__attribute__((used)) static HAL_BOOL
FUNC_2(struct ath_hal *VAR_3, int VAR_4,
     const void *VAR_5, uint32_t VAR_6, void **VAR_7, uint32_t *VAR_8)
{
 HAL_EEPROM *VAR_9 = FUNC_0(VAR_3)->ah_eeprom;
 const EEPROM_POWER_EXPN_5112 *VAR_10;

 switch (VAR_4) {
 case 131:
  *VAR_7 = VAR_9;
  *VAR_8 = sizeof(*VAR_9);
  return VAR_2;
 case 130:
 case 129:
 case 128:
  VAR_10 = &VAR_9->ee_modePowerArray5112[
      VAR_4 - 130];
  *VAR_7 = VAR_10->pChannels;
  *VAR_8 = (*VAR_7 == VAR_1) ? 0 :
   FUNC_1(sizeof(uint16_t) * VAR_10->numChannels,
    sizeof(uint32_t)) +
   sizeof(EXPN_DATA_PER_CHANNEL_5112) * VAR_10->numChannels;
  return VAR_2;
 }
 return VAR_0;
}
