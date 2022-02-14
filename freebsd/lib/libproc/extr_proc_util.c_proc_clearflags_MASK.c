
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_handle {int flags; } ;


 int VAR_0 ;

int
FUNC_0(struct proc_handle *VAR_1, int VAR_2)
{

 if (VAR_1 == ((void*)0))
  return (VAR_0);

 VAR_1->flags &= ~VAR_2;

 return (0);
}
