
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {int dummy; } ;
struct thread {int td_pmcpend; TYPE_1__* td_proc; } ;
struct pmc {int pm_flags; } ;
struct TYPE_2__ {int p_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct trapframe*) ;
 int FUNC_1 (int *,int) ;
 struct thread* VAR_3 ;
 int FUNC_2 (int,struct pmc*,struct trapframe*) ;

int
FUNC_3(int VAR_4, struct pmc *VAR_5, struct trapframe *VAR_6)
{
 struct thread *VAR_7;

 VAR_7 = VAR_3;
 if ((VAR_5->pm_flags & VAR_0) &&
     (VAR_7->td_proc->p_flag & VAR_2) == 0 &&
     !FUNC_0(VAR_6)) {
  FUNC_1(&VAR_7->td_pmcpend, 1);
  return (FUNC_2(VAR_1, VAR_5, VAR_6));
 }
 return (FUNC_2(VAR_4, VAR_5, VAR_6));
}
