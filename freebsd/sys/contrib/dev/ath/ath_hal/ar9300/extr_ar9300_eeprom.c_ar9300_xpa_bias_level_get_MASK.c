
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
typedef int int32_t ;
struct TYPE_6__ {int xpa_bias_lvl; } ;
struct TYPE_5__ {int xpa_bias_lvl; } ;
struct TYPE_7__ {TYPE_2__ modal_header_5g; TYPE_1__ modal_header_2g; } ;
typedef TYPE_3__ ar9300_eeprom_t ;
struct TYPE_8__ {TYPE_3__ ah_eeprom; } ;
typedef scalar_t__ HAL_BOOL ;


 TYPE_4__* FUNC_0 (struct ath_hal*) ;

int32_t FUNC_1(struct ath_hal *VAR_0, HAL_BOOL VAR_1)
{
    ar9300_eeprom_t *VAR_2 = &FUNC_0(VAR_0)->ah_eeprom;
    if (VAR_1) {
        return VAR_2->modal_header_2g.xpa_bias_lvl;
    } else {
        return VAR_2->modal_header_5g.xpa_bias_lvl;
    }
}
