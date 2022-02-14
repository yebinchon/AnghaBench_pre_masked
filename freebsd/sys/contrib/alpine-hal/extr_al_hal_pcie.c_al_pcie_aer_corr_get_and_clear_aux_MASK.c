
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct al_pcie_regs {TYPE_1__* core_space; } ;
struct al_pcie_port {struct al_pcie_regs* regs; } ;
struct al_pcie_core_aer_regs {int corr_err_stat; } ;
struct TYPE_2__ {struct al_pcie_core_aer_regs* aer; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static unsigned int
FUNC_2(
  struct al_pcie_port *VAR_0,
  unsigned int VAR_1)
{
 struct al_pcie_regs *VAR_2 = VAR_0->regs;
 struct al_pcie_core_aer_regs *VAR_3 = VAR_2->core_space[VAR_1].aer;
 uint32_t VAR_4;

 VAR_4 = FUNC_0(&VAR_3->corr_err_stat);
 FUNC_1(&VAR_3->corr_err_stat, VAR_4);

 return VAR_4;
}
