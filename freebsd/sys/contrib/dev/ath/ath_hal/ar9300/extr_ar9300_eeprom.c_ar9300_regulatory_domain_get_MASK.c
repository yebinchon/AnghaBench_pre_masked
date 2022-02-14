
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int16_t ;
struct ath_hal {int dummy; } ;
struct TYPE_4__ {int * reg_dmn; } ;
struct TYPE_5__ {TYPE_1__ base_eep_header; } ;
typedef TYPE_2__ ar9300_eeprom_t ;
struct TYPE_6__ {TYPE_2__ ah_eeprom; } ;


 TYPE_3__* FUNC_0 (struct ath_hal*) ;

u_int16_t *FUNC_1(struct ath_hal *VAR_0)
{
    ar9300_eeprom_t *VAR_1 = &FUNC_0(VAR_0)->ah_eeprom;
    return VAR_1->base_eep_header.reg_dmn;
}
