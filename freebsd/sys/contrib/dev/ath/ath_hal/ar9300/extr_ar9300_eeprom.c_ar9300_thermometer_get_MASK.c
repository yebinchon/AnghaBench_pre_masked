
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int misc_configuration; } ;
struct TYPE_4__ {TYPE_1__ base_eep_header; } ;
struct ath_hal_9300 {TYPE_2__ ah_eeprom; } ;
struct ath_hal {int dummy; } ;
typedef int int32_t ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;

int32_t FUNC_1(struct ath_hal *VAR_0)
{
    struct ath_hal_9300 *VAR_1 = FUNC_0(VAR_0);
    int VAR_2;
    VAR_2 =
        (VAR_1->ah_eeprom.base_eep_header.misc_configuration >> 1) & 0x3;
    VAR_2--;
    return VAR_2;
}
