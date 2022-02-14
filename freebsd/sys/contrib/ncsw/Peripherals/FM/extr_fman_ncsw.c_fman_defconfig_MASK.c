
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fman_cfg {void* qmi_deq_option_support; void* dma_stop_on_bus_error; int tnum_aging_period; void* pedantic_dma; int fm_ctl2_disp_tsh; int fm_ctl1_disp_tsh; int qmi_deq_disp_tsh; int qmi_enq_disp_tsh; int bmi_disp_tsh; int kg_disp_tsh; int plcr_disp_tsh; int prs_disp_tsh; int disp_limit_tsh; int dma_emergency_switch_counter; int dma_en_emergency_smoother; int dma_watchdog; int dma_sos_emergency; int dma_en_emergency; int dma_dbg_cnt_mode; int dma_cam_num_of_entries; int dma_cache_override; int dma_comm_qtsh_asrt_emer; int dma_comm_qtsh_clr_emer; int dma_aid_mode; int dma_aid_override; int external_ecc_rams_enable; void* en_muram_test_mode; void* en_iram_test_mode; int halt_on_unrecov_ecc_err; int halt_on_external_activ; int dma_err; int catastrophic_err; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 void* VAR_27 ;
 int FUNC_0 (struct fman_cfg*,int ,int) ;

void FUNC_1(struct fman_cfg *VAR_28, bool VAR_29)
{
    FUNC_0(VAR_28, 0, sizeof(struct fman_cfg));

    VAR_28->catastrophic_err = VAR_4;
    VAR_28->dma_err = VAR_13;
    VAR_28->halt_on_external_activ = VAR_19;
    VAR_28->halt_on_unrecov_ecc_err = VAR_20;
    VAR_28->en_iram_test_mode = VAR_27;
    VAR_28->en_muram_test_mode = VAR_27;
    VAR_28->external_ecc_rams_enable = VAR_16;

 if (!VAR_29)
     return;

    VAR_28->dma_aid_override = VAR_1;
    VAR_28->dma_aid_mode = VAR_0;
    VAR_28->dma_comm_qtsh_clr_emer = VAR_8;
    VAR_28->dma_comm_qtsh_asrt_emer = VAR_7;
    VAR_28->dma_cache_override = VAR_3;
    VAR_28->dma_cam_num_of_entries = VAR_6;
    VAR_28->dma_dbg_cnt_mode = VAR_9;
    VAR_28->dma_en_emergency = VAR_11;
    VAR_28->dma_sos_emergency = VAR_14;
    VAR_28->dma_watchdog = VAR_15;
    VAR_28->dma_en_emergency_smoother = VAR_12;
    VAR_28->dma_emergency_switch_counter = VAR_10;
    VAR_28->disp_limit_tsh = VAR_5;
    VAR_28->prs_disp_tsh = VAR_23;
    VAR_28->plcr_disp_tsh = VAR_22;
    VAR_28->kg_disp_tsh = VAR_21;
    VAR_28->bmi_disp_tsh = VAR_2;
    VAR_28->qmi_enq_disp_tsh = VAR_25;
    VAR_28->qmi_deq_disp_tsh = VAR_24;
    VAR_28->fm_ctl1_disp_tsh = VAR_17;
    VAR_28->fm_ctl2_disp_tsh = VAR_18;

 VAR_28->pedantic_dma = VAR_27;
 VAR_28->tnum_aging_period = VAR_26;
 VAR_28->dma_stop_on_bus_error = VAR_27;
 VAR_28->qmi_deq_option_support = VAR_27;
}
