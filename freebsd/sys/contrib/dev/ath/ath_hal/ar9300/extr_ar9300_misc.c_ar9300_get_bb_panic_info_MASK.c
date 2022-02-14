
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hal_bb_panic_info {int status; scalar_t__ txf_pcnt; scalar_t__ rxf_pcnt; scalar_t__ rxc_pcnt; scalar_t__ cycles; void* phy_gen_ctrl; void* phy_panic_wd_ctl2; void* phy_panic_wd_ctl1; void* src; void* agc; void* t_cck; void* t_odfm; void* r_cck; void* r_odfm; void* rdar; void* det; void* wd; int tsf; } ;
struct TYPE_3__ {scalar_t__ ath_hal_show_bb_panic; } ;
struct ath_hal {TYPE_1__ ah_config; } ;
struct TYPE_4__ {int ah_bb_panic_last_status; } ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_1 (int,int ) ;
 void* FUNC_2 (struct ath_hal*,int ) ;
 scalar_t__ FUNC_3 (struct ath_hal*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (struct ath_hal*) ;
 int FUNC_5 (struct ath_hal*,char*,...) ;

int
FUNC_6(struct ath_hal *VAR_12, struct hal_bb_panic_info *VAR_13)
{
    VAR_13->status = FUNC_0(VAR_12)->ah_bb_panic_last_status;
    switch (VAR_13->status) {
        case 0x04000539:
        case 0x04008009:
        case 0x04000b09:
        case 0x1300000a:
        return -1;
    }

    VAR_13->tsf = FUNC_4(VAR_12);
    VAR_13->wd = FUNC_1(VAR_13->status, VAR_6);
    VAR_13->det = FUNC_1(VAR_13->status, VAR_1);
    VAR_13->rdar = FUNC_1(VAR_13->status, VAR_2);
    VAR_13->r_odfm = FUNC_1(VAR_13->status, VAR_4);
    VAR_13->r_cck = FUNC_1(VAR_13->status, VAR_3);
    VAR_13->t_odfm = FUNC_1(VAR_13->status, VAR_8);
    VAR_13->t_cck = FUNC_1(VAR_13->status, VAR_7);
    VAR_13->agc = FUNC_1(VAR_13->status, VAR_0);
    VAR_13->src = FUNC_1(VAR_13->status, VAR_5);
    VAR_13->phy_panic_wd_ctl1 = FUNC_2(VAR_12, VAR_10);
    VAR_13->phy_panic_wd_ctl2 = FUNC_2(VAR_12, VAR_11);
    VAR_13->phy_gen_ctrl = FUNC_2(VAR_12, VAR_9);
    VAR_13->rxc_pcnt = VAR_13->rxf_pcnt = VAR_13->txf_pcnt = 0;
    VAR_13->cycles = FUNC_3(VAR_12,
                                        &VAR_13->rxc_pcnt,
                                        &VAR_13->rxf_pcnt,
                                        &VAR_13->txf_pcnt);

    if (VAR_12->ah_config.ath_hal_show_bb_panic) {
        FUNC_5(VAR_12, "\n==== BB update: BB status=0x%08x, "
            "tsf=0x%08x ====\n", VAR_13->status, VAR_13->tsf);
        FUNC_5(VAR_12, "** BB state: wd=%u det=%u rdar=%u rOFDM=%d "
            "rCCK=%u tOFDM=%u tCCK=%u agc=%u src=%u **\n",
            VAR_13->wd, VAR_13->det, VAR_13->rdar,
            VAR_13->r_odfm, VAR_13->r_cck, VAR_13->t_odfm,
            VAR_13->t_cck, VAR_13->agc, VAR_13->src);
        FUNC_5(VAR_12, "** BB WD cntl: cntl1=0x%08x cntl2=0x%08x **\n",
            VAR_13->phy_panic_wd_ctl1, VAR_13->phy_panic_wd_ctl2);
        FUNC_5(VAR_12, "** BB mode: BB_gen_controls=0x%08x **\n",
            VAR_13->phy_gen_ctrl);
        if (VAR_13->cycles) {
            FUNC_5(VAR_12, "** BB busy times: rx_clear=%d%%, "
                "rx_frame=%d%%, tx_frame=%d%% **\n", VAR_13->rxc_pcnt,
                VAR_13->rxf_pcnt, VAR_13->txf_pcnt);
        }
        FUNC_5(VAR_12, "==== BB update: done ====\n\n");
    }

    return 0;
}
