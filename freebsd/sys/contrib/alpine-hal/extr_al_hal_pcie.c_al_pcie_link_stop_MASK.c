
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
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct al_pcie_port*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*,int ) ;

int
FUNC_4(struct al_pcie_port *VAR_1)
{
 struct al_pcie_regs *VAR_2 = (struct al_pcie_regs *)VAR_1->regs;

 if (!FUNC_1(VAR_1)) {
  FUNC_3("PCIe %d: trying to stop a non-started link\n",
   VAR_1->port_id);
 }

 FUNC_0("PCIe_%d: stop port link.\n", VAR_1->port_id);

 FUNC_2(
   VAR_2->app.global_ctrl.port_init,
   VAR_0,
   ~VAR_0);

 return 0;
}
