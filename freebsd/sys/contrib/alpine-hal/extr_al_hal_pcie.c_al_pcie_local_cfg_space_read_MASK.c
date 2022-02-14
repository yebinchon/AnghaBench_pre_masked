
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_pcie_regs {TYPE_2__* core_space; } ;
struct al_pcie_pf {size_t pf_num; TYPE_1__* pcie_port; } ;
struct TYPE_4__ {int * config_header; } ;
struct TYPE_3__ {struct al_pcie_regs* regs; } ;


 int FUNC_0 (int *) ;

uint32_t
FUNC_1(
 struct al_pcie_pf *VAR_0,
 unsigned int VAR_1)
{
 struct al_pcie_regs *VAR_2 = VAR_0->pcie_port->regs;
 uint32_t VAR_3;

 VAR_3 = FUNC_0(&VAR_2->core_space[VAR_0->pf_num].config_header[VAR_1]);

 return VAR_3;
}
