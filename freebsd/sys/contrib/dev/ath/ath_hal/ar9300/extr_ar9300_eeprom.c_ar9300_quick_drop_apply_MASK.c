
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int16_t ;
struct ath_hal {int dummy; } ;
struct TYPE_4__ {int misc_configuration; } ;
struct TYPE_5__ {TYPE_1__ base_eep_header; } ;
typedef TYPE_2__ ar9300_eeprom_t ;
struct TYPE_6__ {TYPE_2__ ah_eeprom; } ;
typedef int HAL_BOOL ;


 TYPE_3__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 int FUNC_4 (struct ath_hal*,int ,int ,int ) ;
 int FUNC_5 (struct ath_hal*,int ,int ) ;

__attribute__((used)) static HAL_BOOL FUNC_6(struct ath_hal *VAR_2, u_int16_t VAR_3)
{
    ar9300_eeprom_t *VAR_4 = &FUNC_0(VAR_2)->ah_eeprom;
    u_int32_t VAR_5;



    if (VAR_4->base_eep_header.misc_configuration & 0x10)
 {
        if (FUNC_2(VAR_2) || FUNC_1(VAR_2) || FUNC_3(VAR_2))
        {
            VAR_5 = FUNC_5(VAR_2, 0, VAR_3);
            FUNC_4(VAR_2, VAR_0, VAR_1, VAR_5);
        }
    }
    return 0;
}
