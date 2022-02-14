
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
typedef int int32_t ;
struct TYPE_4__ {int* params_for_tuning_caps; } ;
struct TYPE_5__ {TYPE_1__ base_eep_header; } ;
typedef TYPE_2__ ar9300_eeprom_t ;
struct TYPE_6__ {TYPE_2__ ah_eeprom; } ;


 TYPE_3__* FUNC_0 (struct ath_hal*) ;

__attribute__((used)) static int32_t FUNC_1(struct ath_hal *VAR_0)
{
    int VAR_1;
    ar9300_eeprom_t *VAR_2 = &FUNC_0(VAR_0)->ah_eeprom;
    VAR_1 = VAR_2->base_eep_header.params_for_tuning_caps[0];
    return VAR_1;
}
