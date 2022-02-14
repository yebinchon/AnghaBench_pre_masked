
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct continuation_arg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void (*) (struct continuation_arg*),int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_6 () ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_7 (struct continuation_arg *VAR_5)
{
  FUNC_1 (&VAR_2);
  if (!VAR_3)
    {
      FUNC_3 ("*stopped", VAR_1);
      FUNC_5 (VAR_4, VAR_1);
      FUNC_3 ("\n", VAR_1);
      FUNC_3 ("(gdb) \n", VAR_1);
      FUNC_4 (VAR_1);
      FUNC_2 (VAR_0);
    }
  else if (FUNC_6 ())
    {
      FUNC_0 (FUNC_7, ((void*)0));
    }
}
