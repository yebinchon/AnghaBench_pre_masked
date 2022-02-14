
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ath_hal_9300 {int ah_proc_phy_err; int ah_ani_period; TYPE_4__* ah_ani; } ;
struct TYPE_6__ {scalar_t__ ath_hal_enable_ani; } ;
struct ath_hal {TYPE_1__ ah_config; } ;
struct TYPE_9__ {size_t ofdm_noise_immunity_level; size_t cck_noise_immunity_level; int ofdm_weak_sig_detect_off; size_t spur_immunity_level; size_t firstep_level; int mrc_cck_off; int must_restore; int ofdms_turn; int rssi_thr_low; int rssi_thr_high; int cck_trig_low; int cck_trig_high; int ofdm_trig_low; int ofdm_trig_high; } ;
struct TYPE_8__ {size_t fir_step_level; } ;
struct TYPE_7__ {size_t fir_step_level; size_t spur_immunity_level; } ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (struct ath_hal*,int ,int ) ;
 int FUNC_5 (struct ath_hal*) ;
 TYPE_3__* VAR_18 ;
 scalar_t__* VAR_19 ;
 scalar_t__* VAR_20 ;
 TYPE_2__* VAR_21 ;

void
FUNC_6(struct ath_hal *VAR_22)
{
    struct ath_hal_9300 *VAR_23 = FUNC_0(VAR_22);
    int VAR_24;

    FUNC_3(VAR_23->ah_ani, sizeof(VAR_23->ah_ani));
    for (VAR_24 = 0; VAR_24 < FUNC_1(VAR_23->ah_ani); VAR_24++) {
        VAR_23->ah_ani[VAR_24].ofdm_trig_high = VAR_11;
        VAR_23->ah_ani[VAR_24].ofdm_trig_low = VAR_12;
        VAR_23->ah_ani[VAR_24].cck_trig_high = VAR_5;
        VAR_23->ah_ani[VAR_24].cck_trig_low = VAR_6;
        VAR_23->ah_ani[VAR_24].rssi_thr_high = VAR_14;
        VAR_23->ah_ani[VAR_24].rssi_thr_low = VAR_15;
        VAR_23->ah_ani[VAR_24].ofdm_noise_immunity_level = VAR_10;
        VAR_23->ah_ani[VAR_24].cck_noise_immunity_level = VAR_4;
        VAR_23->ah_ani[VAR_24].ofdm_weak_sig_detect_off = !VAR_16;
        VAR_23->ah_ani[VAR_24].spur_immunity_level = VAR_8;
        VAR_23->ah_ani[VAR_24].firstep_level = VAR_7;
        VAR_23->ah_ani[VAR_24].mrc_cck_off = !VAR_9;
        VAR_23->ah_ani[VAR_24].ofdms_turn = VAR_1;
        VAR_23->ah_ani[VAR_24].must_restore = VAR_0;
    }






    FUNC_2(VAR_20[VAR_7] == 0);
    FUNC_2(VAR_19[VAR_8] == 0);
    FUNC_2(
        VAR_21[VAR_10].fir_step_level ==
        VAR_7);
    FUNC_2(
        VAR_21[VAR_10].spur_immunity_level ==
        VAR_8);
    FUNC_2(
        VAR_18[VAR_4].fir_step_level ==
        VAR_7);


    FUNC_4(VAR_22, VAR_2, 0);
    FUNC_4(VAR_22, VAR_3, 0);
    FUNC_5(VAR_22);

    VAR_23->ah_ani_period = VAR_13;
    if (VAR_22->ah_config.ath_hal_enable_ani) {
        VAR_23->ah_proc_phy_err |= VAR_17;
    }
}
