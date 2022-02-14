
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct al_pcie_regs {TYPE_1__* core_space; } ;
struct al_pcie_port {int port_id; struct al_pcie_regs* regs; } ;
typedef enum al_pcie_operating_mode { ____Placeholder_al_pcie_operating_mode } al_pcie_operating_mode ;
struct TYPE_2__ {scalar_t__ pcie_cap_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct al_pcie_port*) ;
 int FUNC_2 (struct al_pcie_port*) ;
 int FUNC_3 (scalar_t__,int ,int ) ;

int
FUNC_4(struct al_pcie_port *VAR_4)
{
 struct al_pcie_regs *VAR_5 = VAR_4->regs;
 enum al_pcie_operating_mode VAR_6 = FUNC_2(VAR_4);

 if (VAR_6 != VAR_0) {
  FUNC_0("PCIe %d: link-retrain is applicable only for RC mode\n",
   VAR_4->port_id);
  return -VAR_3;
 }

 if (!FUNC_1(VAR_4)) {
  FUNC_0("PCIe %d: link not started, cannot link-retrain\n", VAR_4->port_id);
  return -VAR_3;
 }

 FUNC_3(VAR_5->core_space[0].pcie_cap_base + (VAR_1 >> 1),
 VAR_2, VAR_2);

 return 0;
}
