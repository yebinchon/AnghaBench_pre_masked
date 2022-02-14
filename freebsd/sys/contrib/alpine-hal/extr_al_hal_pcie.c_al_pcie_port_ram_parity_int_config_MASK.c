
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* int_grp_b; TYPE_1__* parity; } ;
struct al_pcie_regs {TYPE_3__ app; } ;
struct al_pcie_port {struct al_pcie_regs* regs; } ;
typedef scalar_t__ al_bool ;
struct TYPE_5__ {int mask; } ;
struct TYPE_4__ {int en_core; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_2(
 struct al_pcie_port *VAR_2,
 al_bool VAR_3)
{
 struct al_pcie_regs *VAR_4 = VAR_2->regs;

 FUNC_0(&VAR_4->app.parity->en_core,
  (VAR_3 == VAR_0) ? 0xffffffff : 0x0);

 FUNC_1(&VAR_4->app.int_grp_b->mask,
       VAR_1,
       (VAR_3 != VAR_0) ?
       VAR_1 : 0);

}
