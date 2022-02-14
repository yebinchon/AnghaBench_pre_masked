
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {struct proc* next; } ;
struct inf {struct proc* threads; int event_port; struct proc* task; } ;


 int VAR_0 ;
 int FUNC_0 (struct inf*,char*) ;
 int FUNC_1 (struct inf*,int ) ;
 int FUNC_2 (struct proc*,int ) ;

void
FUNC_3 (struct inf *VAR_1)
{
  struct proc *VAR_2;

  FUNC_0 (VAR_1, "stealing exception ports");

  FUNC_1 (VAR_1, 0);

  FUNC_2 (VAR_1->task, VAR_1->event_port);
  for (VAR_2 = VAR_1->threads; VAR_2; VAR_2 = VAR_2->next)
    FUNC_2 (VAR_2, VAR_0);
}
