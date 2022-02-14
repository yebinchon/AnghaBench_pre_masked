
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_7__ {int* out_mask_pair; int* in_mask_pair; int* reg_out_mask; } ;
struct TYPE_8__ {TYPE_3__ atu; } ;
struct al_pcie_regs {TYPE_2__* port_regs; TYPE_4__ app; } ;
struct al_pcie_port {scalar_t__ rev_id; int port_id; struct al_pcie_regs* regs; } ;
struct al_pcie_atu_region {int direction; int index; int base_addr; int target_addr; scalar_t__ match_mode; int limit; scalar_t__ cfg_shift_mode; int tlp_type; int attr; int function_match_bypass_mode_number; int msg_code; int bar_number; int response; scalar_t__ enable_attr_match_mode; scalar_t__ enable_msg_match_mode; scalar_t__ invert_matching; scalar_t__ function_match_bypass_mode; int enable; int enforce_ob_atu_region_set; } ;
typedef scalar_t__ limit_sz_msk ;
typedef enum al_pcie_operating_mode { ____Placeholder_al_pcie_operating_mode } al_pcie_operating_mode ;
struct TYPE_5__ {int cr2; int cr1; int limit_addr; int upper_target_addr; int lower_target_addr; int upper_base_addr; int lower_base_addr; int index; } ;
struct TYPE_6__ {TYPE_1__ iatu; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (struct al_pcie_port*) ;
 int FUNC_7 (struct al_pcie_port*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int*,int,unsigned int) ;

int
FUNC_10(
 struct al_pcie_port *VAR_17,
 struct al_pcie_atu_region *VAR_18)
{
 struct al_pcie_regs *VAR_19 = VAR_17->regs;
 enum al_pcie_operating_mode VAR_20 = FUNC_7(VAR_17);
 uint32_t VAR_21 = 0;
 if ((VAR_18->direction == VAR_1)
  && (FUNC_6(VAR_17))) {
  if (!VAR_18->enforce_ob_atu_region_set) {
   FUNC_4("PCIe %d: setting OB iATU after link is started is not allowed\n",
    VAR_17->port_id);
   FUNC_3(VAR_0);
   return -VAR_8;
  } else {
   FUNC_5("PCIe %d: setting OB iATU even after link is started\n",
    VAR_17->port_id);
  }
 }


 FUNC_2(VAR_21, 0xF, 0, VAR_18->index);
 FUNC_1(VAR_21, 31, VAR_18->direction);
 FUNC_8(&VAR_19->port_regs->iatu.index, VAR_21);

 FUNC_8(&VAR_19->port_regs->iatu.lower_base_addr,
   (uint32_t)(VAR_18->base_addr & 0xFFFFFFFF));
 FUNC_8(&VAR_19->port_regs->iatu.upper_base_addr,
   (uint32_t)((VAR_18->base_addr >> 32)& 0xFFFFFFFF));
 FUNC_8(&VAR_19->port_regs->iatu.lower_target_addr,
   (uint32_t)(VAR_18->target_addr & 0xFFFFFFFF));
 FUNC_8(&VAR_19->port_regs->iatu.upper_target_addr,
   (uint32_t)((VAR_18->target_addr >> 32)& 0xFFFFFFFF));


 if (VAR_18->match_mode == 0) {
  uint32_t VAR_22;
  uint32_t *VAR_23 =
   (VAR_18->direction == VAR_1) ?
   &VAR_19->app.atu.out_mask_pair[VAR_18->index / 2] :
   &VAR_19->app.atu.in_mask_pair[VAR_18->index / 2];
  uint32_t VAR_24 =
   (VAR_18->index % 2) ?
   VAR_15 :
   VAR_13;
  unsigned int VAR_25 =
   (VAR_18->index % 2) ?
   VAR_16 :
   VAR_14;
  uint64_t VAR_26 =
   VAR_18->limit - VAR_18->base_addr;
  uint32_t VAR_27 = (uint32_t)(((VAR_26) >>
     32) & 0xFFFFFFFF);

  if (VAR_27) {
   VAR_22 = (uint32_t)((VAR_26) & 0xFFFFFFFF);
   FUNC_3(VAR_22 == 0xFFFFFFFF);
  } else {
   VAR_22 = (uint32_t)(VAR_18->limit &
     0xFFFFFFFF);
  }

  FUNC_9(
    VAR_23,
    VAR_24,
    VAR_27 << VAR_25);

  FUNC_8(&VAR_19->port_regs->iatu.limit_addr,
    VAR_22);
 }
 if ((VAR_18->cfg_shift_mode == VAR_7) &&
  (VAR_18->direction == VAR_1)) {
  if (VAR_17->rev_id > VAR_3) {
   FUNC_9(VAR_19->app.atu.reg_out_mask,
   1 << (VAR_18->index) ,
   1 << (VAR_18->index));
  } else {
   uint32_t *VAR_28 =
    (VAR_18->direction == VAR_1) ?
    &VAR_19->app.atu.out_mask_pair[VAR_18->index / 2] :
    &VAR_19->app.atu.in_mask_pair[VAR_18->index / 2];
   uint32_t VAR_29 =
    (VAR_18->index % 2) ?
    VAR_15 :
    VAR_13;
   unsigned int VAR_30 =
    (VAR_18->index % 2) ?
    VAR_16 :
    VAR_14;

   FUNC_9(
    VAR_28,
    VAR_29,
    (FUNC_0(15)) << VAR_30);
  }
 }

 VAR_21 = 0;
 FUNC_2(VAR_21, 0x1F, 0, VAR_18->tlp_type);
 FUNC_2(VAR_21, 0x3 << 9, 9, VAR_18->attr);


 if ((VAR_17->rev_id == VAR_4)
  && (VAR_20 == VAR_2)
  && (VAR_18->function_match_bypass_mode)) {
  FUNC_2(VAR_21,
   VAR_9,
   VAR_10,
   VAR_18->function_match_bypass_mode_number);
 }

 FUNC_8(&VAR_19->port_regs->iatu.cr1, VAR_21);


 VAR_21 = 0;
 FUNC_2(VAR_21, 0xFF, 0, VAR_18->msg_code);
 FUNC_2(VAR_21, 0x700, 8, VAR_18->bar_number);
 FUNC_2(VAR_21, 0x3 << 24, 24, VAR_18->response);
 FUNC_1(VAR_21, 16, VAR_18->enable_attr_match_mode == VAR_7);
 FUNC_1(VAR_21, 21, VAR_18->enable_msg_match_mode == VAR_7);
 FUNC_1(VAR_21, 28, VAR_18->cfg_shift_mode == VAR_7);
 FUNC_1(VAR_21, 29, VAR_18->invert_matching == VAR_7);
 if (VAR_18->tlp_type == VAR_6 || VAR_18->tlp_type == VAR_5)
  FUNC_1(VAR_21, 30, !!VAR_18->match_mode);
 FUNC_1(VAR_21, 31, !!VAR_18->enable);





 if (VAR_20 == VAR_2)
  FUNC_2(VAR_21,
   VAR_11,
   VAR_12,
   VAR_18->function_match_bypass_mode ? 0x1 : 0x0);

 FUNC_8(&VAR_19->port_regs->iatu.cr2, VAR_21);

 return 0;
}
