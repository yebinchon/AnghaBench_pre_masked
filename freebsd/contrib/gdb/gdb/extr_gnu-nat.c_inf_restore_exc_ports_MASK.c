
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {struct proc* next; } ;
struct inf {struct proc* threads; struct proc* task; } ;


 int FUNC_0 (struct inf*,char*) ;
 int FUNC_1 (struct inf*,int ) ;
 int FUNC_2 (struct proc*) ;

void
FUNC_3 (struct inf *VAR_0)
{
  struct proc *VAR_1;

  FUNC_0 (VAR_0, "restoring exception ports");

  FUNC_1 (VAR_0, 0);

  FUNC_2 (VAR_0->task);
  for (VAR_1 = VAR_0->threads; VAR_1; VAR_1 = VAR_1->next)
    FUNC_2 (VAR_1);
}
