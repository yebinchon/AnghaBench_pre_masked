
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {scalar_t__ port; struct proc* next; } ;
struct inf {struct proc* threads; } ;
typedef scalar_t__ mach_port_t ;



struct proc *
FUNC_0 (struct inf *VAR_0, mach_port_t VAR_1)
{
  struct proc *VAR_2 = VAR_0->threads;
  while (VAR_2)
    if (VAR_2->port == VAR_1)
      return VAR_2;
    else
      VAR_2 = VAR_2->next;
  return 0;
}
