
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct al_pcie_regs {TYPE_1__* port_regs; } ;
struct TYPE_4__ {int nof_p_hdr; int nof_np_hdr; } ;
struct al_pcie_port {TYPE_2__ ib_hcrd_config; struct al_pcie_regs* regs; } ;
struct TYPE_3__ {int vc0_non_posted_rcv_q_ctrl; int vc0_posted_rcv_q_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct al_pcie_port *VAR_4)
{
 struct al_pcie_regs *VAR_5 = VAR_4->regs;

 FUNC_0(
  &VAR_5->port_regs->vc0_posted_rcv_q_ctrl,
  VAR_2,
  (VAR_4->ib_hcrd_config.nof_p_hdr - 1)
   << VAR_3);

 FUNC_0(
  &VAR_5->port_regs->vc0_non_posted_rcv_q_ctrl,
  VAR_0,
  (VAR_4->ib_hcrd_config.nof_np_hdr - 1)
   << VAR_1);
}
