
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct al_pcie_regs {TYPE_1__* port_regs; } ;
struct al_pcie_port {scalar_t__ rev_id; struct al_pcie_regs* regs; } ;
struct TYPE_2__ {int timer_ctrl_max_func_num; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct al_pcie_port*) ;
 unsigned int FUNC_2 (int *) ;

__attribute__((used)) static unsigned int
FUNC_3(struct al_pcie_port *VAR_2)
{
 struct al_pcie_regs *VAR_3 = VAR_2->regs;
 uint32_t VAR_4;
 uint32_t VAR_5;





 if ((VAR_2->rev_id == VAR_0)
  && FUNC_1(VAR_2)) {
  VAR_4 = FUNC_2(&VAR_3->port_regs->timer_ctrl_max_func_num);
  VAR_5 = FUNC_0(VAR_4, VAR_1, 0) + 1;
  return VAR_5;
 }
 return 1;
}
