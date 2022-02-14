
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
typedef size_t u_int16_t ;
struct ath_hal {int dummy; } ;
typedef int int32_t ;
struct TYPE_4__ {int * cal_target_freqbin_5g_ht40; TYPE_2__* cal_target_power_5g_ht40; int * cal_target_freqbin_2g_ht40; TYPE_2__* cal_target_power_2g_ht40; } ;
typedef TYPE_1__ ar9300_eeprom_t ;
struct TYPE_6__ {TYPE_1__ ah_eeprom; } ;
struct TYPE_5__ {int * t_pow2x; } ;
typedef TYPE_2__ OSP_CAL_TARGET_POWER_HT ;
typedef int HAL_BOOL ;


 TYPE_3__* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (int ,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int *,int *,size_t) ;

u_int8_t
FUNC_3(struct ath_hal *VAR_2, u_int16_t VAR_3,
    u_int16_t VAR_4, HAL_BOOL VAR_5)
{
    u_int16_t VAR_6, VAR_7;
    int32_t VAR_8[VAR_1];
    int32_t VAR_9[VAR_1];
    u_int8_t *VAR_10;
    ar9300_eeprom_t *VAR_11 = &FUNC_0(VAR_2)->ah_eeprom;
    OSP_CAL_TARGET_POWER_HT *VAR_12;

    if (VAR_5) {
        VAR_6 = VAR_0;
        VAR_12 = VAR_11->cal_target_power_2g_ht40;
        VAR_10 = VAR_11->cal_target_freqbin_2g_ht40;
    } else {
        VAR_6 = VAR_1;
        VAR_12 = VAR_11->cal_target_power_5g_ht40;
        VAR_10 = VAR_11->cal_target_freqbin_5g_ht40;
    }





    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        VAR_9[VAR_7] = FUNC_1(VAR_10[VAR_7], VAR_5);
        VAR_8[VAR_7] = VAR_12[VAR_7].t_pow2x[VAR_3];
    }


    return
        ((u_int8_t)FUNC_2(
            (int32_t)VAR_4, VAR_9, VAR_8, VAR_6));
}
