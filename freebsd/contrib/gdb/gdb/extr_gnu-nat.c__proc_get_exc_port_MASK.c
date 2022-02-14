
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {void* saved_exc_port; void* exc_port; } ;
typedef int mach_port_t ;
typedef scalar_t__ error_t ;


 void* VAR_0 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct proc*,int *) ;

__attribute__((used)) static mach_port_t
FUNC_3 (struct proc *VAR_1)
{
  mach_port_t VAR_2;
  error_t VAR_3 = FUNC_2 (VAR_1, &VAR_2);

  if (VAR_3)

    {
      if (VAR_1->exc_port)
 FUNC_0 (FUNC_1 (), VAR_1->exc_port);
      VAR_1->exc_port = VAR_0;
      if (VAR_1->saved_exc_port)
 FUNC_0 (FUNC_1 (), VAR_1->saved_exc_port);
      VAR_1->saved_exc_port = VAR_0;
    }

  return VAR_2;
}
