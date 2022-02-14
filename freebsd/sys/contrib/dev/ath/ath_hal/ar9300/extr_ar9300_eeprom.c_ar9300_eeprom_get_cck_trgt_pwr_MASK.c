
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
struct TYPE_4__ {TYPE_2__* cal_target_power_cck; int * cal_target_freqbin_cck; } ;
typedef TYPE_1__ ar9300_eeprom_t ;
struct TYPE_6__ {TYPE_1__ ah_eeprom; } ;
struct TYPE_5__ {int * t_pow2x; } ;
typedef TYPE_2__ CAL_TARGET_POWER_LEG ;


 TYPE_3__* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int *,int *,size_t) ;

u_int8_t
FUNC_3(struct ath_hal *VAR_1, u_int16_t VAR_2,
    u_int16_t VAR_3)
{
    u_int16_t VAR_4 = VAR_0, VAR_5;
    int32_t VAR_6[VAR_0];
    int32_t VAR_7[VAR_0];
    ar9300_eeprom_t *VAR_8 = &FUNC_0(VAR_1)->ah_eeprom;
    u_int8_t *VAR_9 = VAR_8->cal_target_freqbin_cck;
    CAL_TARGET_POWER_LEG *VAR_10 = VAR_8->cal_target_power_cck;





    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        VAR_7[VAR_5] = FUNC_1(VAR_9[VAR_5], 1);
        VAR_6[VAR_5] = VAR_10[VAR_5].t_pow2x[VAR_2];
    }


    return
        ((u_int8_t)FUNC_2(
            (int32_t)VAR_3, VAR_7, VAR_6, VAR_4));
}
