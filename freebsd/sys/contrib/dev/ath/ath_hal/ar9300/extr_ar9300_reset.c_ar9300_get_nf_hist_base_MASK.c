
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
typedef int int16_t ;
struct TYPE_9__ {int priv_nf; } ;
struct TYPE_8__ {TYPE_3__ base; } ;
struct TYPE_11__ {TYPE_2__ nf_cal_hist; } ;
struct TYPE_7__ {TYPE_3__ base; } ;
struct TYPE_10__ {TYPE_1__ nf_cal_hist; } ;
typedef TYPE_3__ HAL_NFCAL_BASE ;
typedef TYPE_4__ HAL_CHANNEL_INTERNAL ;


 TYPE_6__* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ath_hal *VAR_0, HAL_CHANNEL_INTERNAL *VAR_1,
    int VAR_2, int16_t VAR_3[])
{
    HAL_NFCAL_BASE *VAR_4;




    if (VAR_2) {
        VAR_4 = &VAR_1->nf_cal_hist.base;
    } else {

        VAR_4 = &FUNC_0(VAR_0)->nf_cal_hist.base;
    }

    FUNC_1(VAR_3, VAR_4->priv_nf, sizeof(VAR_4->priv_nf));
}
