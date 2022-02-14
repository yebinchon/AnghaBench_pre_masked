
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int port; } ;
typedef int mach_port_t ;
typedef int error_t ;


 scalar_t__ FUNC_0 (struct proc*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

error_t
FUNC_3 (struct proc * VAR_0, mach_port_t * VAR_1)
{
  if (FUNC_0 (VAR_0))
    return FUNC_1 (VAR_0->port, VAR_1);
  else
    return FUNC_2 (VAR_0->port, VAR_1);
}
