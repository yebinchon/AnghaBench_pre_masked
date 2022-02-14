
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_8__ {int xLNA_bias_strength; } ;
struct TYPE_7__ {int xLNA_bias_strength; } ;
struct TYPE_6__ {int misc_configuration; } ;
struct TYPE_9__ {TYPE_3__ modal_header_5g; TYPE_2__ modal_header_2g; TYPE_1__ base_eep_header; } ;
typedef TYPE_4__ ar9300_eeprom_t ;
struct TYPE_10__ {TYPE_4__ ah_eeprom; } ;
typedef scalar_t__ HAL_BOOL ;


 TYPE_5__* FUNC_0 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (struct ath_hal*,int ,int ,int) ;

HAL_BOOL FUNC_3(struct ath_hal *VAR_5, HAL_BOOL VAR_6)
{
    u_int8_t VAR_7;
    u_int32_t VAR_8 = 0;
    ar9300_eeprom_t *VAR_9 = &FUNC_0(VAR_5)->ah_eeprom;

    if ((VAR_9->base_eep_header.misc_configuration & 0x40) >> 6) {
        if (FUNC_1(VAR_5)) {
            if (VAR_6) {
                VAR_7 = VAR_9->modal_header_2g.xLNA_bias_strength;
            } else {
                VAR_7 = VAR_9->modal_header_5g.xLNA_bias_strength;
            }
            VAR_8 = VAR_7 & ( 0x03 );
            FUNC_2(VAR_5,
     VAR_1, VAR_4, VAR_8);
            VAR_8 = (VAR_7 >> 2) & ( 0x03 );
            FUNC_2(VAR_5,
     VAR_2, VAR_4, VAR_8);
            VAR_8 = (VAR_7 >> 4) & ( 0x03 );
            FUNC_2(VAR_5,
     VAR_3, VAR_4, VAR_8);
        }
    }
    return VAR_0;
}
