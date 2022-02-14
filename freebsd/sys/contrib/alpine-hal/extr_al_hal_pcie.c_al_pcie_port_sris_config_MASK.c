
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct al_pcie_sris_params {int kp_counter_gen3; int kp_counter_gen21; scalar_t__ use_defaults; } ;
struct TYPE_6__ {int * sris_kp_counter; } ;
struct TYPE_7__ {TYPE_2__ global_ctrl; TYPE_1__* cfg_func_ext; } ;
struct al_pcie_regs {TYPE_4__* port_regs; TYPE_3__ app; } ;
struct al_pcie_port {int rev_id; int port_id; struct al_pcie_regs* regs; } ;
typedef enum al_pcie_link_speed { ____Placeholder_al_pcie_link_speed } al_pcie_link_speed ;
struct TYPE_8__ {int filter_mask_reg_1; } ;
struct TYPE_5__ {int cfg; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int,int) ;
 int FUNC_2 (char*,int ,int,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static int
FUNC_5(
 struct al_pcie_port *VAR_11,
 struct al_pcie_sris_params *VAR_12,
 enum al_pcie_link_speed VAR_13)
{
 int VAR_14 = 0;
 struct al_pcie_regs *VAR_15 = VAR_11->regs;

 if (VAR_12->use_defaults) {
  VAR_12->kp_counter_gen3 = (VAR_11->rev_id > 130) ?
      VAR_4 : 0;
  VAR_12->kp_counter_gen21 = VAR_3;

  FUNC_1("PCIe %d: configuring SRIS with default values kp_gen3[%d] kp_gen21[%d]\n",
   VAR_11->port_id,
   VAR_12->kp_counter_gen3,
   VAR_12->kp_counter_gen21);
 }

 switch (VAR_11->rev_id) {
 case 128:
  FUNC_4(&VAR_15->app.cfg_func_ext->cfg,
    VAR_5,
    VAR_5);
 case 129:
  FUNC_4(VAR_15->app.global_ctrl.sris_kp_counter,
   VAR_8 |
   VAR_6 |
   VAR_10,
   (VAR_12->kp_counter_gen3 <<
    VAR_9) |
   (VAR_12->kp_counter_gen21 <<
    VAR_7) |
   VAR_10);
  break;

 case 130:
  if ((VAR_13 == VAR_0) && (VAR_12->kp_counter_gen3)) {
   FUNC_2("PCIe %d: cannot config Gen%d SRIS with rev_id[%d]\n",
    VAR_11->port_id, FUNC_3(VAR_13),
    VAR_11->rev_id);
   return -VAR_1;
  }

  FUNC_4(&VAR_15->port_regs->filter_mask_reg_1,
   VAR_2,
   VAR_12->kp_counter_gen21);
  break;

 default:
  FUNC_2("PCIe %d: SRIS config is not supported in rev_id[%d]\n",
   VAR_11->port_id, VAR_11->rev_id);
  FUNC_0(0);
  return -VAR_1;
 }

 return VAR_14;
}
