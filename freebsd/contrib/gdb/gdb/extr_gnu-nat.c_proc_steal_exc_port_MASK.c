
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {scalar_t__ exc_port; scalar_t__ saved_exc_port; } ;
typedef scalar_t__ mach_port_t ;
typedef scalar_t__ error_t ;


 scalar_t__ FUNC_0 (struct proc*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (struct proc*,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct proc*,scalar_t__) ;
 int FUNC_5 (struct proc*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,int ,int ) ;

void
FUNC_8 (struct proc *VAR_0, mach_port_t VAR_1)
{
  mach_port_t VAR_2 = FUNC_0 (VAR_0);

  if (VAR_2)
    {
      error_t VAR_3 = 0;

      FUNC_3 (VAR_0, "inserting exception port: %d", VAR_1);

      if (VAR_2 != VAR_1)

 VAR_3 = FUNC_4 (VAR_0, VAR_1);

      if (VAR_3 || VAR_2 == VAR_0->exc_port)


 {
   if (VAR_2)
     FUNC_1 (FUNC_2 (), VAR_2);
 }
      else

 {
   if (VAR_0->saved_exc_port)
     FUNC_1 (FUNC_2 (), VAR_0->saved_exc_port);
   VAR_0->saved_exc_port = VAR_2;
 }

      FUNC_3 (VAR_0, "saved exception port: %d", VAR_0->saved_exc_port);

      if (!VAR_3)
 VAR_0->exc_port = VAR_1;
      else
 FUNC_7 ("Error setting exception port for %s: %s",
   FUNC_5 (VAR_0), FUNC_6 (VAR_3));
    }
}
