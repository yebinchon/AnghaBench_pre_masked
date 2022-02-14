
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct al_pcie_port {TYPE_2__* regs; } ;
typedef scalar_t__ al_bool ;
struct TYPE_4__ {TYPE_1__* port_regs; } ;
struct TYPE_3__ {int rd_only_wr_en; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(struct al_pcie_port *VAR_2, al_bool VAR_3)
{



 if (VAR_3 == VAR_0)
  FUNC_0();

 FUNC_1(&VAR_2->regs->port_regs->rd_only_wr_en,
         (VAR_3 == VAR_1) ? 1 : 0);




 if (VAR_3 == VAR_1)
  FUNC_0();
}
