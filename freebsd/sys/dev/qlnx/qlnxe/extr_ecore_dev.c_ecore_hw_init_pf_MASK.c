
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_function_info {scalar_t__ bandwidth_min; } ;
struct TYPE_6__ {int ovlan; scalar_t__ personality; } ;
struct TYPE_5__ {int pf_rl; scalar_t__ pf_wfq; } ;
struct ecore_hwfn {TYPE_3__ hw_info; scalar_t__ p_dev; int my_id; TYPE_2__ qm_info; TYPE_1__* mcp_info; int rel_pf_id; } ;
struct ecore_hw_init_params {scalar_t__ pci_rlx_odr_mode; int allow_npar_tx_switch; int p_tunn; int int_mode; scalar_t__ b_hw_start; int avoid_eng_affin; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {struct ecore_mcp_function_info func_info; } ;


 int FUNC_0 (struct ecore_hwfn*,char*) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct ecore_hwfn*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__,int *) ;
 int FUNC_7 (scalar_t__,scalar_t__,int ) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
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
 int FUNC_8 (struct ecore_hwfn*,int ,int) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_10 (struct ecore_hwfn*,struct ecore_ptt*,char*) ;
 int FUNC_11 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_12 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,int) ;
 int FUNC_13 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_14 (struct ecore_hwfn*,struct ecore_ptt*,int,int) ;
 int FUNC_15 (struct ecore_hwfn*) ;
 int FUNC_16 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 scalar_t__ FUNC_17 (struct ecore_hwfn*) ;
 int FUNC_18 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_19 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ) ;
 int FUNC_20 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_21(struct ecore_hwfn *VAR_29, struct ecore_ptt *VAR_30,
   int VAR_31, struct ecore_hw_init_params *VAR_32)
{
 u8 VAR_33 = VAR_29->rel_pf_id;
 u32 VAR_34;
 enum _ecore_status_t VAR_35 = VAR_7;
 u16 VAR_36;
 int VAR_37;

 if (VAR_29->mcp_info) {
  struct ecore_mcp_function_info *VAR_38;

  VAR_38 = &VAR_29->mcp_info->func_info;
  if (VAR_38->bandwidth_min)
   VAR_29->qm_info.pf_wfq = VAR_38->bandwidth_min;


  VAR_29->qm_info.pf_rl = 100000;
 }
 FUNC_9(VAR_29, VAR_30);

 FUNC_15(VAR_29);


 if (VAR_31 & (1 << VAR_8)) {
  FUNC_2(VAR_29, VAR_3, "Configuring LLH_FUNC_TAG\n");
  FUNC_8(VAR_29, VAR_12, 1);
  FUNC_8(VAR_29, VAR_13,
        VAR_29->hw_info.ovlan);

  FUNC_2(VAR_29, VAR_3,
      "Configuring LLH_FUNC_FILTER_HDR_SEL\n");
  FUNC_8(VAR_29, VAR_10,
        1);
 }


 if (VAR_31 & (1 << VAR_9)) {
  FUNC_2(VAR_29, VAR_3, "Configuring TAGMAC_CLS_TYPE\n");
  FUNC_8(VAR_29,
        VAR_11, 1);
 }


 FUNC_8(VAR_29, VAR_27,
       (VAR_29->hw_info.personality == VAR_6) ? 1 : 0);
 FUNC_8(VAR_29, VAR_21,
       (VAR_29->hw_info.personality == VAR_5) ? 1 : 0);
 FUNC_8(VAR_29, VAR_23, 0);


 FUNC_4((void *)VAR_29->p_dev, VAR_29->my_id);


 VAR_35 = FUNC_10(VAR_29, VAR_30, "pf_phase");
 if (VAR_35)
  return VAR_35;


 VAR_35 = FUNC_12(VAR_29, VAR_30, VAR_17, VAR_33, VAR_31);
 if (VAR_35)
  return VAR_35;


 VAR_35 = FUNC_12(VAR_29, VAR_30, VAR_18, VAR_33, VAR_31);
 if (VAR_35)
  return VAR_35;


 FUNC_14(VAR_29, VAR_30, 1, 1);






 VAR_37 = FUNC_5(VAR_29->p_dev, VAR_14);
 if (!VAR_37) {
  FUNC_1(VAR_29, 1,
     "Failed to find the PCI Express Capability structure in the PCI config space\n");
  return VAR_2;
 }

 FUNC_6(VAR_29->p_dev, VAR_37 + VAR_15, &VAR_36);

 if (VAR_32->pci_rlx_odr_mode == VAR_1) {
  VAR_36 |= VAR_16;
  FUNC_7(VAR_29->p_dev,
        VAR_37 + VAR_15, VAR_36);
 } else if (VAR_32->pci_rlx_odr_mode == VAR_0) {
  VAR_36 &= ~VAR_16;
  FUNC_7(VAR_29->p_dev,
        VAR_37 + VAR_15, VAR_36);
 } else if (FUNC_17(VAR_29)) {
  FUNC_0(VAR_29, "PCI relax ordering configured by MFW\n");
 } else {
  VAR_36 &= ~VAR_16;
  FUNC_7(VAR_29->p_dev,
        VAR_37 + VAR_15, VAR_36);
 }

 VAR_35 = FUNC_11(VAR_29, VAR_30);
 if (VAR_35 != VAR_7)
  return VAR_35;


 if (FUNC_3(VAR_29)) {
  VAR_35 = FUNC_16(VAR_29, VAR_30,
       VAR_32->avoid_eng_affin);
  if (VAR_35 != VAR_7)
   return VAR_35;
 }

 if (VAR_32->b_hw_start) {

  VAR_35 = FUNC_13(VAR_29, VAR_30, VAR_32->int_mode);
  if (VAR_35 != VAR_7)
   return VAR_35;


  VAR_35 = FUNC_19(VAR_29, VAR_30, VAR_32->p_tunn,
           VAR_32->allow_npar_tx_switch);
  if (VAR_35) {
   FUNC_1(VAR_29, 1, "Function start ramrod failed\n");
   return VAR_35;
  }
  VAR_34 = FUNC_18(VAR_29, VAR_30, VAR_24);
  FUNC_2(VAR_29, VAR_4,
    "PRS_REG_SEARCH_TAG1: %x\n", VAR_34);

  if (VAR_29->hw_info.personality == VAR_5)
  {
   FUNC_20(VAR_29, VAR_30, VAR_24,
     (1 << 2));
   FUNC_20(VAR_29, VAR_30,
     VAR_19,
     0x100);
  }
  FUNC_2(VAR_29, VAR_4,
    "PRS_REG_SEARCH registers after start PFn\n");
  VAR_34 = FUNC_18(VAR_29, VAR_30, VAR_25);
  FUNC_2(VAR_29, VAR_4,
    "PRS_REG_SEARCH_TCP: %x\n", VAR_34);
  VAR_34 = FUNC_18(VAR_29, VAR_30, VAR_28);
  FUNC_2(VAR_29, VAR_4,
    "PRS_REG_SEARCH_UDP: %x\n", VAR_34);
  VAR_34 = FUNC_18(VAR_29, VAR_30, VAR_20);
  FUNC_2(VAR_29, VAR_4,
    "PRS_REG_SEARCH_FCOE: %x\n", VAR_34);
  VAR_34 = FUNC_18(VAR_29, VAR_30, VAR_22);
  FUNC_2(VAR_29, VAR_4,
    "PRS_REG_SEARCH_ROCE: %x\n", VAR_34);
  VAR_34 = FUNC_18(VAR_29, VAR_30,
    VAR_26);
  FUNC_2(VAR_29, VAR_4,
    "PRS_REG_SEARCH_TCP_FIRST_FRAG: %x\n",
    VAR_34);
  VAR_34 = FUNC_18(VAR_29, VAR_30, VAR_24);
  FUNC_2(VAR_29, VAR_4,
    "PRS_REG_SEARCH_TAG1: %x\n", VAR_34);
 }
 return VAR_7;
}
