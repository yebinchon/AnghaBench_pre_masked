
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_pcie_port {unsigned int max_num_of_pfs; int regs; int rev_id; int port_id; } ;
struct al_pcie_pf {unsigned int pf_num; struct al_pcie_port* pcie_port; } ;
typedef enum al_pcie_operating_mode { ____Placeholder_al_pcie_operating_mode } al_pcie_operating_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,unsigned int,int ,int ) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (struct al_pcie_port*) ;

int
FUNC_4(
 struct al_pcie_pf *VAR_2,
 struct al_pcie_port *VAR_3,
 unsigned int VAR_4)
{
 enum al_pcie_operating_mode VAR_5 = FUNC_3(VAR_3);
 FUNC_0(VAR_4 < VAR_3->max_num_of_pfs);

 if (VAR_5 != VAR_0) {
  FUNC_2("PCIe %d: can't init PF handle with operating mode [%d]\n",
   VAR_3->port_id, VAR_5);
  return -VAR_1;
 }

 VAR_2->pf_num = VAR_4;
 VAR_2->pcie_port = VAR_3;

 FUNC_1("PCIe %d: pf handle initialized. pf number: %d, rev_id %d, regs %p\n",
        VAR_3->port_id, VAR_2->pf_num, VAR_3->rev_id,
        VAR_3->regs);
 return 0;
}
