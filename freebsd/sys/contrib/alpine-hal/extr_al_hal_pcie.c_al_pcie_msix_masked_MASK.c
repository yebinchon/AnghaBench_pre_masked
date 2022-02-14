
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_pcie_regs {TYPE_2__* core_space; } ;
struct al_pcie_pf {size_t pf_num; TYPE_1__* pcie_port; } ;
typedef int al_bool ;
struct TYPE_4__ {int msix_cap_base; } ;
struct TYPE_3__ {struct al_pcie_regs* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

al_bool
FUNC_1(struct al_pcie_pf *VAR_3)
{
 struct al_pcie_regs *VAR_4 = VAR_3->pcie_port->regs;
 uint32_t VAR_5 = FUNC_0(VAR_4->core_space[VAR_3->pf_num].msix_cap_base);

 if (VAR_5 & VAR_1)
  return VAR_2;
 return VAR_0;
}
