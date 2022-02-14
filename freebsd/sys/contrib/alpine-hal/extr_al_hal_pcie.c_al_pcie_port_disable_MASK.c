
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct al_pcie_port {unsigned int port_id; scalar_t__ pbs_regs; } ;
struct TYPE_2__ {int pcie_conf_1; } ;
struct al_pbs_regs {TYPE_1__ unit; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct al_pcie_port*) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (char*,unsigned int) ;

void
FUNC_3(struct al_pcie_port *VAR_1)
{
 struct al_pbs_regs *VAR_2 =
    (struct al_pbs_regs *)VAR_1->pbs_regs;
 unsigned int VAR_3 = VAR_1->port_id;

 if (!FUNC_0(VAR_1)) {
  FUNC_2("PCIe %d: trying to disable a non-enabled port\n",
   VAR_1->port_id);
 }


 FUNC_1(
  &VAR_2->unit.pcie_conf_1,
  1 << (VAR_3 + VAR_0),
  0);
}
