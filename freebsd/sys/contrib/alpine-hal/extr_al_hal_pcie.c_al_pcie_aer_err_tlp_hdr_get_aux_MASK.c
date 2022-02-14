
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct al_pcie_regs {TYPE_1__* core_space; } ;
struct al_pcie_port {struct al_pcie_regs* regs; } ;
struct al_pcie_core_aer_regs {int * header_log; } ;
struct TYPE_2__ {struct al_pcie_core_aer_regs* aer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(
  struct al_pcie_port *VAR_1,
  unsigned int VAR_2,
 uint32_t VAR_3[VAR_0])
{
 struct al_pcie_regs *VAR_4 = VAR_1->regs;
 struct al_pcie_core_aer_regs *VAR_5 = VAR_4->core_space[VAR_2].aer;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_3[VAR_6] = FUNC_0(&VAR_5->header_log[VAR_6]);
}
