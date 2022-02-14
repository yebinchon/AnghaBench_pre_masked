
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_4__ {int feature_enable; } ;
struct TYPE_5__ {TYPE_1__ base_eep_header; } ;
typedef TYPE_2__ ar9300_eeprom_t ;
struct TYPE_6__ {TYPE_2__ ah_eeprom; } ;
typedef int HAL_BOOL ;


 TYPE_3__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 scalar_t__ FUNC_4 (struct ath_hal*) ;
 scalar_t__ FUNC_5 (struct ath_hal*) ;
 int FUNC_6 (struct ath_hal*,int ,int ,int) ;
 int FUNC_7 (struct ath_hal*) ;

HAL_BOOL FUNC_8(struct ath_hal *VAR_6)
{
    int VAR_7;
    ar9300_eeprom_t *VAR_8 = &FUNC_0(VAR_6)->ah_eeprom;
    VAR_7 = FUNC_7(VAR_6);
    if ((VAR_8->base_eep_header.feature_enable & 0x40) >> 6) {
        VAR_7 &= 0x7f;

        if (FUNC_3(VAR_6) || FUNC_5(VAR_6) || FUNC_1(VAR_6)) {
            return 1;
        } else if (FUNC_2(VAR_6)) {
            FUNC_6(VAR_6,
                VAR_1, VAR_3,
                VAR_7);
            FUNC_6(VAR_6,
                VAR_1, VAR_4,
                VAR_7);
        } else if (FUNC_4(VAR_6)) {
            FUNC_6(VAR_6,
                VAR_5, VAR_3,
                VAR_7);
            FUNC_6(VAR_6,
                VAR_5, VAR_4,
                VAR_7);
        } else {
            FUNC_6(VAR_6,
                VAR_2, VAR_3,
                VAR_7);
            FUNC_6(VAR_6,
                VAR_2, VAR_4,
                VAR_7);
        }

    }
    return VAR_0;
}
