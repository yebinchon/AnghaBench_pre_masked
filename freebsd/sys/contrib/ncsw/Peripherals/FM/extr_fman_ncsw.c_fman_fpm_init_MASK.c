
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fman_fpm_regs {int fm_rie; int fm_rcr; int * fmfp_cev; int fmfp_ee; int fmfp_dist2; int fmfp_dist1; int fmfp_mxd; } ;
struct fman_cfg {int disp_limit_tsh; int exceptions; int catastrophic_err; int dma_err; int num_of_fman_ctrl_evnt_regs; scalar_t__ en_iram_test_mode; scalar_t__ en_muram_test_mode; scalar_t__ external_ecc_rams_enable; int halt_on_unrecov_ecc_err; int halt_on_external_activ; scalar_t__ fm_ctl2_disp_tsh; scalar_t__ fm_ctl1_disp_tsh; scalar_t__ qmi_deq_disp_tsh; scalar_t__ qmi_enq_disp_tsh; scalar_t__ bmi_disp_tsh; scalar_t__ plcr_disp_tsh; scalar_t__ kg_disp_tsh; scalar_t__ prs_disp_tsh; } ;


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
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (struct fman_fpm_regs*) ;
 int FUNC_1 (int,int *) ;

int FUNC_2(struct fman_fpm_regs *VAR_31, struct fman_cfg *VAR_32)
{
 uint32_t VAR_33;
 int VAR_34;




 VAR_33 = (uint32_t)(VAR_32->disp_limit_tsh << VAR_5);
 FUNC_1(VAR_33, &VAR_31->fmfp_mxd);

 VAR_33 = (((uint32_t)VAR_32->prs_disp_tsh << VAR_26) |
  ((uint32_t)VAR_32->kg_disp_tsh << VAR_24) |
  ((uint32_t)VAR_32->plcr_disp_tsh << VAR_25) |
  ((uint32_t)VAR_32->bmi_disp_tsh << VAR_23));
 FUNC_1(VAR_33, &VAR_31->fmfp_dist1);

 VAR_33 = (((uint32_t)VAR_32->qmi_enq_disp_tsh << VAR_30) |
  ((uint32_t)VAR_32->qmi_deq_disp_tsh << VAR_29) |
  ((uint32_t)VAR_32->fm_ctl1_disp_tsh << VAR_27) |
  ((uint32_t)VAR_32->fm_ctl2_disp_tsh << VAR_28));
 FUNC_1(VAR_33, &VAR_31->fmfp_dist2);


 VAR_33 = 0;

 VAR_33 |= (VAR_14 | VAR_8 |
  VAR_12);

 if (VAR_32->exceptions & VAR_2)
  VAR_33 |= VAR_15;
 if (VAR_32->exceptions & VAR_1)
  VAR_33 |= VAR_13;
 if (VAR_32->exceptions & VAR_0)
  VAR_33 |= VAR_9;
 VAR_33 |= (VAR_32->catastrophic_err << VAR_6);
 VAR_33 |= (VAR_32->dma_err << VAR_7);
 if (!VAR_32->halt_on_external_activ)
  VAR_33 |= VAR_11;
 if (!VAR_32->halt_on_unrecov_ecc_err)
  VAR_33 |= VAR_10;
 FUNC_1(VAR_33, &VAR_31->fmfp_ee);


 for (VAR_34 = 0; VAR_34 < VAR_32->num_of_fman_ctrl_evnt_regs; VAR_34++)
  FUNC_1(0xFFFFFFFF, &VAR_31->fmfp_cev[VAR_34]);





 VAR_33 = (VAR_20 | VAR_18);

 if (VAR_32->external_ecc_rams_enable)
  VAR_33 |= VAR_22;


 if (VAR_32->en_muram_test_mode)
  VAR_33 |= VAR_21;
 if (VAR_32->en_iram_test_mode)
  VAR_33 |= VAR_19;
 FUNC_1(VAR_33, &VAR_31->fm_rcr);

 VAR_33 = 0;
 if (VAR_32->exceptions & VAR_3) {
  VAR_33 |= VAR_16;
  FUNC_0(VAR_31);
 }
 if (VAR_32->exceptions & VAR_4) {
  VAR_33 |= VAR_17;
  FUNC_0(VAR_31);
 }
 FUNC_1(VAR_33, &VAR_31->fm_rie);

 return 0;
}
