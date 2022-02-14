
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct al_pcie_regs {TYPE_1__* port_regs; } ;
struct al_pcie_port {int port_id; struct al_pcie_regs* regs; } ;
typedef enum al_pcie_link_speed { ____Placeholder_al_pcie_link_speed } al_pcie_link_speed ;
struct TYPE_2__ {int gen2_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct al_pcie_port*) ;
 int FUNC_3 (struct al_pcie_port*,int) ;
 int FUNC_4 (int *,int ,int ) ;

int
FUNC_5(struct al_pcie_port *VAR_2,
         enum al_pcie_link_speed VAR_3)
{
 struct al_pcie_regs *VAR_4 = VAR_2->regs;

 if (!FUNC_2(VAR_2)) {
  FUNC_1("PCIe %d: link not started, cannot change speed\n", VAR_2->port_id);
  return -VAR_0;
 }

 FUNC_0("PCIe %d: changing speed to %d\n", VAR_2->port_id, VAR_3);

 FUNC_3(VAR_2, VAR_3);

 FUNC_4(&VAR_4->port_regs->gen2_ctrl,
  VAR_1,
  VAR_1);

 return 0;
}
