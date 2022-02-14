
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int port; } ;
typedef int mach_port_t ;
typedef int error_t ;


 int FUNC_0 (struct proc*,char*,int ) ;
 scalar_t__ FUNC_1 (struct proc*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

error_t
FUNC_4 (struct proc * VAR_0, mach_port_t VAR_1)
{
  FUNC_0 (VAR_0, "setting exception port: %d", VAR_1);
  if (FUNC_1 (VAR_0))
    return FUNC_2 (VAR_0->port, VAR_1);
  else
    return FUNC_3 (VAR_0->port, VAR_1);
}
