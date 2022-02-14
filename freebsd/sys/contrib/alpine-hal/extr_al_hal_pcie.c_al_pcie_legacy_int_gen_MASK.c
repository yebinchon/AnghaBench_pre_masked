
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int * events_gen; } ;
struct TYPE_6__ {TYPE_2__ global_ctrl; } ;
struct al_pcie_regs {TYPE_3__ app; } ;
struct al_pcie_pf {unsigned int pf_num; TYPE_1__* pcie_port; } ;
typedef enum al_pcie_legacy_int_type { ____Placeholder_al_pcie_legacy_int_type } al_pcie_legacy_int_type ;
typedef int al_bool ;
struct TYPE_4__ {struct al_pcie_regs* regs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

int
FUNC_4(
 struct al_pcie_pf *VAR_1,
 al_bool VAR_2,
 enum al_pcie_legacy_int_type VAR_3)
{
 struct al_pcie_regs *VAR_4 = VAR_1->pcie_port->regs;
 unsigned int VAR_5 = VAR_1->pf_num;
 uint32_t VAR_6;

 FUNC_1(VAR_3 == VAR_0);
 VAR_6 = FUNC_2(VAR_4->app.global_ctrl.events_gen[VAR_5]);
 FUNC_0(VAR_6, 3, !!VAR_2);
 FUNC_3(VAR_4->app.global_ctrl.events_gen[VAR_5], VAR_6);

 return 0;
}
