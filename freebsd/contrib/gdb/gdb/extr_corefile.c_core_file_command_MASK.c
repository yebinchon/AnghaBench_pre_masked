
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int (* to_open ) (char*,int) ;int (* to_detach ) (char*,int) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 struct target_ops* FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int) ;

void
FUNC_5 (char *VAR_0, int VAR_1)
{
  struct target_ops *VAR_2;

  FUNC_0 ();

  VAR_2 = FUNC_2 ();
  if (VAR_2 == ((void*)0))
    FUNC_1 ("GDB can't read core files on this machine.");

  if (!VAR_0)
    (VAR_2->to_detach) (VAR_0, VAR_1);
  else
    (VAR_2->to_open) (VAR_0, VAR_1);
}
