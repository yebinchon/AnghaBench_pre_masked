
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct al_pcie_regs {TYPE_1__* core_space; } ;
struct al_pcie_port {struct al_pcie_regs* regs; } ;
struct al_pcie_core_aer_regs {int cap_and_ctrl; int uncorr_err_severity; int uncorr_err_mask; int corr_err_mask; int header; } ;
struct al_pcie_aer_params {int enabled_corr_err; int enabled_uncorr_non_fatal_err; int enabled_uncorr_fatal_err; scalar_t__ ecrc_gen_en; scalar_t__ ecrc_chk_en; } ;
struct TYPE_2__ {int pcie_dev_ctrl_status; struct al_pcie_core_aer_regs* aer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_0 (struct al_pcie_port*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static int
FUNC_4(
  struct al_pcie_port *VAR_15,
  unsigned int VAR_16,
  struct al_pcie_aer_params *VAR_17)
{
 struct al_pcie_regs *VAR_18 = VAR_15->regs;
 struct al_pcie_core_aer_regs *VAR_19 = VAR_18->core_space[VAR_16].aer;
 uint32_t VAR_20;

 VAR_20 = FUNC_1(&VAR_19->header);

 if (((VAR_20 & VAR_3) >> VAR_4) !=
  VAR_5)
  return -VAR_2;

 if (((VAR_20 & VAR_6) >> VAR_7) !=
  VAR_8)
  return -VAR_2;

 FUNC_2(&VAR_19->corr_err_mask, ~VAR_17->enabled_corr_err);

 FUNC_2(&VAR_19->uncorr_err_mask,
  (~VAR_17->enabled_uncorr_non_fatal_err) |
  (~VAR_17->enabled_uncorr_fatal_err));

 FUNC_2(&VAR_19->uncorr_err_severity,
  VAR_17->enabled_uncorr_fatal_err);

 FUNC_2(&VAR_19->cap_and_ctrl,
  (VAR_17->ecrc_gen_en ? VAR_10 : 0) |
  (VAR_17->ecrc_chk_en ? VAR_9 : 0));
 if (VAR_17->ecrc_gen_en == VAR_1) {
  FUNC_0(VAR_15, VAR_16);
 }

 FUNC_3(
  VAR_18->core_space[VAR_16].pcie_dev_ctrl_status,
  VAR_11 |
  VAR_13 |
  VAR_12 |
  VAR_14,
  (VAR_17->enabled_corr_err ?
   VAR_11 : 0) |
  (VAR_17->enabled_uncorr_non_fatal_err ?
   VAR_13 : 0) |
  (VAR_17->enabled_uncorr_fatal_err ?
   VAR_12 : 0) |
  ((VAR_17->enabled_uncorr_non_fatal_err &
    VAR_0) ?
   VAR_14 : 0) |
  ((VAR_17->enabled_uncorr_fatal_err &
    VAR_0) ?
   VAR_14 : 0));

 return 0;
}
