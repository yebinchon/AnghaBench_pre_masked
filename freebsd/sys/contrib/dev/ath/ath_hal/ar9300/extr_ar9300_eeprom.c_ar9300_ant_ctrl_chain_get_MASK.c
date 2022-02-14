
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int16_t ;
struct ath_hal {int dummy; } ;
struct TYPE_6__ {int * ant_ctrl_chain; } ;
struct TYPE_5__ {int * ant_ctrl_chain; } ;
struct TYPE_7__ {TYPE_2__ modal_header_5g; TYPE_1__ modal_header_2g; } ;
typedef TYPE_3__ ar9300_eeprom_t ;
struct TYPE_8__ {TYPE_3__ ah_eeprom; } ;
typedef scalar_t__ HAL_BOOL ;


 TYPE_4__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;

u_int16_t FUNC_1(struct ath_hal *VAR_1, int VAR_2,
    HAL_BOOL VAR_3)
{
    ar9300_eeprom_t *VAR_4 = &FUNC_0(VAR_1)->ah_eeprom;
    if (VAR_2 >= 0 && VAR_2 < VAR_0) {
        if (VAR_3) {
            return VAR_4->modal_header_2g.ant_ctrl_chain[VAR_2];
        } else {
            return VAR_4->modal_header_5g.ant_ctrl_chain[VAR_2];
        }
    }
    return 0;
}
