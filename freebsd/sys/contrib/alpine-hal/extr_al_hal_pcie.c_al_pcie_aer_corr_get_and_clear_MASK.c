
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_pcie_pf {int pf_num; int pcie_port; } ;


 int FUNC_0 (struct al_pcie_pf*) ;
 unsigned int FUNC_1 (int ,int ) ;

unsigned int FUNC_2(struct al_pcie_pf *VAR_0)
{
 FUNC_0(VAR_0);

 return FUNC_1(
   VAR_0->pcie_port, VAR_0->pf_num);
}
