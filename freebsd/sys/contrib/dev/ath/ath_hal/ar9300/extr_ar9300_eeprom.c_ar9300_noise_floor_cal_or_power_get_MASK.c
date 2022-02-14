
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
struct ath_hal {int dummy; } ;
typedef int int32_t ;
struct TYPE_4__ {TYPE_2__** cal_pier_data_5g; int * cal_freq_pier_5g; TYPE_2__** cal_pier_data_2g; int * cal_freq_pier_2g; } ;
typedef TYPE_1__ ar9300_eeprom_t ;
struct TYPE_6__ {TYPE_1__ ah_eeprom; } ;
struct TYPE_5__ {int rx_noisefloor_cal; int rx_noisefloor_power; } ;
typedef TYPE_2__ OSP_CAL_DATA_PER_FREQ_OP_LOOP ;
typedef scalar_t__ HAL_BOOL ;


 TYPE_3__* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int*,int*,int) ;

int32_t
FUNC_3(struct ath_hal *VAR_3, int32_t VAR_4,
    int32_t VAR_5, HAL_BOOL VAR_6)
{
    int VAR_7 = 1;
    int32_t VAR_8[VAR_2 + VAR_1];
    int32_t VAR_9[VAR_2 + VAR_1];
    int VAR_10;
    int VAR_11;
    int VAR_12, VAR_13;
    ar9300_eeprom_t *VAR_14 = &FUNC_0(VAR_3)->ah_eeprom;
    u_int8_t *VAR_15;
    OSP_CAL_DATA_PER_FREQ_OP_LOOP *VAR_16;




    if (VAR_5 < 0 || VAR_5 >= VAR_0) {
        return 1;
    }


    VAR_11 = (VAR_4 < 4000);
    if (VAR_11) {
        VAR_13 = VAR_1;
        VAR_15 = VAR_14->cal_freq_pier_2g;
        VAR_16 = VAR_14->cal_pier_data_2g[VAR_5];
    } else {
        VAR_13 = VAR_2;
        VAR_15 = VAR_14->cal_freq_pier_5g;
        VAR_16 = VAR_14->cal_pier_data_5g[VAR_5];
    }

    VAR_10 = 0;
    for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
        VAR_8[VAR_10] = FUNC_1(VAR_15[VAR_12], VAR_11);
        VAR_9[VAR_10] = VAR_6 ?
            VAR_16[VAR_12].rx_noisefloor_cal :
            VAR_16[VAR_12].rx_noisefloor_power;
        if (VAR_9[VAR_10] < 0) {
            VAR_10++;
        }
    }




    if (VAR_10 > 0) {
        VAR_7 = FUNC_2(VAR_4, VAR_8, VAR_9, VAR_10);
    }

    return VAR_7;
}
