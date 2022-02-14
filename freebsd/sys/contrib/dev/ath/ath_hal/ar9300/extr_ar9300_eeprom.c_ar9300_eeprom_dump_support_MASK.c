
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct ath_hal {int dummy; } ;
typedef int ar9300_eeprom_t ;
struct TYPE_2__ {int ah_eeprom; } ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;

u_int
FUNC_1(struct ath_hal *VAR_0, void **VAR_1)
{
    *VAR_1 = &(FUNC_0(VAR_0)->ah_eeprom);
    return sizeof(ar9300_eeprom_t);
}
