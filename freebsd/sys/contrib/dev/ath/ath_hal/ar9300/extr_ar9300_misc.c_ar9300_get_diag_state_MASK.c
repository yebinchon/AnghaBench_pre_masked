
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int16_t ;
struct TYPE_7__ {int ah_nchan; } ;
struct TYPE_8__ {TYPE_2__ priv; int * ah_channels; } ;
struct TYPE_10__ {int mrcCck; int listenTime; int cckNoiseImmunityLevel; int ofdmWeakSigDetectOff; int firstepLevel; int spurImmunityLevel; int noiseImmunityLevel; } ;
struct TYPE_6__ {scalar_t__ curr_step; } ;
struct ath_hal_9300 {int ah_pcdac_table_size; TYPE_3__ ah_priv; int ah_ani_function; TYPE_5__ ext_ani_state; void* ah_pcdac_table; TYPE_1__ ah_gain_values; TYPE_4__* ah_mode_power_array2133; int ah_eeprom; } ;
struct ath_hal {int dummy; } ;
typedef void ar9300_ani_state ;
typedef int ar9300_eeprom_t ;
struct TYPE_9__ {int num_channels; void* p_channels; } ;
typedef int HAL_BOOL ;
typedef int HAL_ANI_STATS ;
typedef int HAL_ANI_CMD ;
typedef int GAIN_VALUES ;
typedef int GAIN_OPTIMIZATION_STEP ;
typedef int EXPN_DATA_PER_CHANNEL_2133 ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ath_hal*,int const,int const) ;
 void* FUNC_2 (struct ath_hal*) ;
 void* FUNC_3 (struct ath_hal*) ;
 int FUNC_4 (struct ath_hal*,int const) ;
 scalar_t__ FUNC_5 (struct ath_hal*,int,void const*,int,void**,int*) ;
 int FUNC_6 (TYPE_5__*,int) ;
 TYPE_4__* VAR_4 ;
 int FUNC_7 (int,int) ;

HAL_BOOL
FUNC_8(struct ath_hal *VAR_5, int VAR_6,
        const void *VAR_7, u_int32_t VAR_8,
        void **VAR_9, u_int32_t *VAR_10)
{
    struct ath_hal_9300 *VAR_11 = FUNC_0(VAR_5);
    struct ar9300_ani_state *VAR_12;

    (void) VAR_11;
    if (FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10)) {
        return VAR_2;
    }
    switch (VAR_6) {
    case 137:





        return VAR_2;





    default:
        break;
    }

    return VAR_0;
}
