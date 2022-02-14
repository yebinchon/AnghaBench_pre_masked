
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_handle {int status; } ;



int
FUNC_0(struct proc_handle *VAR_0)
{

 if (VAR_0 == ((void*)0))
  return (-1);

 return (VAR_0->status);
}
