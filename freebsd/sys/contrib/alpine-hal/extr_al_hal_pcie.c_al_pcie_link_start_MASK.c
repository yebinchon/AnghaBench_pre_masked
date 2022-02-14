
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int port_init; } ;
struct TYPE_4__ {TYPE_1__ global_ctrl; } ;
struct al_pcie_regs {TYPE_2__ app; } ;
struct al_pcie_port {int port_id; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct al_pcie_port*) ;
 int FUNC_3 (int ,int ,int ) ;

int
FUNC_4(struct al_pcie_port *VAR_2)
{
 struct al_pcie_regs *VAR_3 = (struct al_pcie_regs *)VAR_2->regs;

 if (!FUNC_2(VAR_2)) {
  FUNC_1("PCIe %d: port not enabled, cannot start link\n",
   VAR_2->port_id);
  return -VAR_0;
 }

 FUNC_0("PCIe_%d: start port link.\n", VAR_2->port_id);

 FUNC_3(
   VAR_3->app.global_ctrl.port_init,
   VAR_1,
   VAR_1);

 return 0;
}
