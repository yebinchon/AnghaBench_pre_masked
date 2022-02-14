
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int tid; struct proc* next; } ;
struct inf {struct proc* threads; } ;



struct proc *
FUNC_0 (struct inf *VAR_0, int VAR_1)
{
  struct proc *VAR_2 = VAR_0->threads;

  while (VAR_2)
    if (VAR_2->tid == VAR_1)
      return VAR_2;
    else
      VAR_2 = VAR_2->next;
  return 0;
}
