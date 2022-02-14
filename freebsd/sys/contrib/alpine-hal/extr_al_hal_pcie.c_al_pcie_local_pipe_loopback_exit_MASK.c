
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct al_pcie_regs {TYPE_1__* port_regs; } ;
struct al_pcie_port {int port_id; struct al_pcie_regs* regs; } ;
struct TYPE_2__ {int port_link_ctrl; int pipe_loopback_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int,int ) ;

int
FUNC_2(struct al_pcie_port *VAR_2)
{
 struct al_pcie_regs *VAR_3 = VAR_2->regs;

 FUNC_0("PCIe %d: Exit LOCAL PIPE Loopback mode", VAR_2->port_id);

 FUNC_1(&VAR_3->port_regs->pipe_loopback_ctrl,
         1 << VAR_1,
         0);

 FUNC_1(&VAR_3->port_regs->port_link_ctrl,
         1 << VAR_0,
         0);
 return 0;
}
