
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {scalar_t__ pause_sc; scalar_t__ resume_sc; scalar_t__ run_sc; struct proc* next; } ;
struct inf {struct proc* threads; } ;


 int FUNC_0 (struct inf*) ;

void
FUNC_1 (struct inf *VAR_0,
      struct proc *VAR_1, int VAR_2)
{
  struct proc *VAR_3;
  FUNC_0 (VAR_0);
  for (VAR_3 = VAR_0->threads; VAR_3; VAR_3 = VAR_3->next)
    if (VAR_3 == VAR_1)
      VAR_3->resume_sc = 0;
    else if (VAR_2)
      VAR_3->resume_sc = VAR_3->run_sc;
    else
      VAR_3->resume_sc = VAR_3->pause_sc;
}
