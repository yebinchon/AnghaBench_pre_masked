
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_pcie_pf {int pf_num; int pcie_port; } ;
struct al_pcie_aer_params {int pf_num; int pcie_port; } ;


 int FUNC_0 (struct al_pcie_pf*) ;
 int FUNC_1 (int ,int ,struct al_pcie_pf*) ;

int FUNC_2(
  struct al_pcie_pf *VAR_0,
  struct al_pcie_aer_params *VAR_1)
{
 FUNC_0(VAR_0);
 FUNC_0(VAR_1);

 return FUNC_1(
   VAR_0->pcie_port, VAR_0->pf_num, VAR_1);
}
