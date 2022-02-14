
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
typedef void* int16_t ;
struct TYPE_7__ {void** priv_nf; } ;
struct TYPE_8__ {TYPE_1__ base; void*** nf_cal_buffer; } ;
struct TYPE_11__ {TYPE_2__ nf_cal_hist; } ;
struct TYPE_9__ {int ** nf_cal_buffer; } ;
struct TYPE_10__ {TYPE_3__ nf_cal_hist; } ;
typedef TYPE_2__ HAL_NFCAL_HIST_FULL ;
typedef TYPE_3__ HAL_CHAN_NFCAL_HIST ;
typedef TYPE_4__ HAL_CHANNEL_INTERNAL ;


 TYPE_6__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (struct ath_hal*,int ) ;

__attribute__((used)) inline static void
FUNC_2(struct ath_hal *VAR_2, HAL_CHANNEL_INTERNAL *VAR_3)
{
    HAL_CHAN_NFCAL_HIST *VAR_4 = &VAR_3->nf_cal_hist;
    HAL_NFCAL_HIST_FULL *VAR_5 = &FUNC_0(VAR_2)->nf_cal_hist;
    int VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6 ++) {
        int VAR_7;
        int16_t VAR_8;





        VAR_8 = FUNC_1(VAR_2, VAR_4->nf_cal_buffer[0][VAR_6]);
        for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
            VAR_5->nf_cal_buffer[VAR_7][VAR_6] = VAR_8;
        }
        FUNC_0(VAR_2)->nf_cal_hist.base.priv_nf[VAR_6] = VAR_8;
    }
}
