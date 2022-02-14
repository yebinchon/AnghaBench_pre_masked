
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_2__ {int * ah_eeprom; } ;
typedef int HAL_EEPROM_v4k ;


 int * VAR_0 ;
 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct ath_hal *VAR_1)
{
 HAL_EEPROM_v4k *VAR_2 = FUNC_0(VAR_1)->ah_eeprom;

 FUNC_1(VAR_2);
 FUNC_0(VAR_1)->ah_eeprom = VAR_0;
}
