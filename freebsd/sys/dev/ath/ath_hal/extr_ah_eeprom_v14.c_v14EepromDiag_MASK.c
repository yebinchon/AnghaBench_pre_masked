
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {int * ah_eeprom; } ;
typedef int HAL_EEPROM_v14 ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_1 ;


__attribute__((used)) static HAL_BOOL
FUNC_1(struct ath_hal *VAR_2, int VAR_3,
     const void *VAR_4, uint32_t VAR_5, void **VAR_6, uint32_t *VAR_7)
{
 HAL_EEPROM_v14 *VAR_8 = FUNC_0(VAR_2)->ah_eeprom;

 switch (VAR_3) {
 case 128:
  *VAR_6 = VAR_8;
  *VAR_7 = sizeof(HAL_EEPROM_v14);
  return VAR_1;
 }
 return VAR_0;
}
