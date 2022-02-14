
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int * events_gen; } ;
struct TYPE_5__ {TYPE_1__ global_ctrl; } ;
struct al_pcie_regs {TYPE_2__ app; } ;
struct al_pcie_pf {unsigned int pf_num; TYPE_3__* pcie_port; } ;
struct TYPE_6__ {struct al_pcie_regs* regs; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

int
FUNC_5(struct al_pcie_pf *VAR_2, uint8_t VAR_3)
{
 struct al_pcie_regs *VAR_4 = VAR_2->pcie_port->regs;
 unsigned int VAR_5 = VAR_2->pf_num;
 uint32_t VAR_6;


 VAR_6 = FUNC_3(VAR_4->app.global_ctrl.events_gen[VAR_5]);
 FUNC_0(VAR_6, 4);
 FUNC_2(VAR_6,
   VAR_0,
   VAR_1,
   VAR_3);
 FUNC_4(VAR_4->app.global_ctrl.events_gen[VAR_5], VAR_6);

 FUNC_1(VAR_6, 4);
 FUNC_4(VAR_4->app.global_ctrl.events_gen[VAR_5], VAR_6);

 return 0;
}
