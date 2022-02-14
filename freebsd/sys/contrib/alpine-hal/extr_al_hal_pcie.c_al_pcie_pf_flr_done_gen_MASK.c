
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * events_gen; } ;
struct TYPE_6__ {TYPE_2__ global_ctrl; } ;
struct al_pcie_regs {TYPE_3__ app; } ;
struct al_pcie_pf {unsigned int pf_num; TYPE_1__* pcie_port; } ;
struct TYPE_4__ {struct al_pcie_regs* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct al_pcie_pf *VAR_2)
{
 struct al_pcie_regs *VAR_3 = VAR_2->pcie_port->regs;
 unsigned int VAR_4 = VAR_2->pf_num;

 FUNC_0(VAR_3->app.global_ctrl.events_gen[VAR_4],
   VAR_1,
   VAR_1);
 FUNC_1(VAR_0);
 FUNC_0(VAR_3->app.global_ctrl.events_gen[VAR_4],
   VAR_1, 0);
 return 0;
}
