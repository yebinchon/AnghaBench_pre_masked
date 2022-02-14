
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct variant {int nregs; int npregs; int num_tot_regs; int regs; scalar_t__ name; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct variant* VAR_0 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  struct variant *VAR_1;

  for (VAR_1 = VAR_0; VAR_1->name; VAR_1++)
    {
      if (VAR_1->nregs == -1)
        VAR_1->nregs = FUNC_1 (VAR_1->regs, VAR_1->num_tot_regs);
      if (VAR_1->npregs == -1)
        VAR_1->npregs = FUNC_0 (VAR_1->regs, VAR_1->num_tot_regs);
    }
}
