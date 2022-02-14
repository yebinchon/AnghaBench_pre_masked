
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_7__ {TYPE_1__* ah_eeprom; } ;
struct TYPE_6__ {scalar_t__ ee_version; int ee_eepMap; } ;
typedef TYPE_1__ HAL_EEPROM ;


 TYPE_1__* VAR_0 ;
 TYPE_4__* FUNC_0 (struct ath_hal*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct ath_hal*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(struct ath_hal *VAR_2)
{
 HAL_EEPROM *VAR_3 = FUNC_0(VAR_2)->ah_eeprom;

        if (VAR_3->ee_version >= VAR_1 && VAR_3->ee_eepMap == 1)
  FUNC_2(VAR_2, VAR_3);
 FUNC_1(VAR_3);
 FUNC_0(VAR_2)->ah_eeprom = VAR_0;
}
