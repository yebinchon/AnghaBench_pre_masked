
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int8_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal_9300 {int ah_rx_chainmask; } ;
struct ath_hal {int dummy; } ;
typedef int nf_buf ;
typedef scalar_t__ int16_t ;
struct TYPE_8__ {int curr_index; } ;
struct TYPE_9__ {scalar_t__** nf_cal_buffer; TYPE_1__ base; } ;
struct TYPE_11__ {TYPE_2__ nf_cal_hist; struct ieee80211_channel* ah_curchan; } ;
struct TYPE_10__ {TYPE_2__ nf_cal_hist; } ;
typedef TYPE_2__ HAL_NFCAL_HIST_FULL ;
typedef TYPE_3__ HAL_CHANNEL_INTERNAL ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 TYPE_3__* VAR_0 ;
 TYPE_6__* FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__*,int) ;
 TYPE_3__* FUNC_4 (struct ath_hal*,struct ieee80211_channel*) ;

void FUNC_5(struct ath_hal *VAR_4, int16_t *VAR_5,
    struct ieee80211_channel *VAR_6, int VAR_7)
{
    struct ath_hal_9300 *VAR_8 = FUNC_0(VAR_4);
    int VAR_9, VAR_10, VAR_11 = 0;
    HAL_NFCAL_HIST_FULL *VAR_12;
    u_int8_t VAR_13 = VAR_8->ah_rx_chainmask | (VAR_8->ah_rx_chainmask << 3);
    HAL_CHANNEL_INTERNAL *VAR_14 = FUNC_4(VAR_4, VAR_6);
    FUNC_2(VAR_14);
    if ((!VAR_7) && VAR_6 == FUNC_1(VAR_4)->ah_curchan) {
        VAR_12 = &FUNC_1(VAR_4)->nf_cal_hist;
        VAR_10 = VAR_1;
    } else {

        if (VAR_14 == VAR_0) {
            FUNC_3(VAR_5, sizeof(VAR_5[0])*VAR_3);
            return;
        }





        VAR_12 = (HAL_NFCAL_HIST_FULL *) &VAR_14->nf_cal_hist;
        VAR_10 = VAR_2;
    }


    VAR_11 =
        (VAR_12->base.curr_index) ? VAR_12->base.curr_index - 1 : VAR_10 - 1;

    for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {

        if (!(VAR_13 & (1 << VAR_9))) {
            VAR_5[VAR_9] = 0;
            continue;
        }
        VAR_5[VAR_9] = VAR_12->nf_cal_buffer[VAR_11][VAR_9];
    }
}
