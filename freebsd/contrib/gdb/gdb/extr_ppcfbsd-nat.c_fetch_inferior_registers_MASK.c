
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg {int dummy; } ;
struct fpreg {int dummy; } ;
typedef int PTRACE_ARG3_TYPE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int ,int ,int ,int ) ;

void
FUNC_8 (int VAR_3)
{
  if (VAR_3 == -1 || FUNC_3 (VAR_3))
    {
      struct reg VAR_4;

      if (FUNC_7 (VAR_1, FUNC_0 (VAR_2),
    (PTRACE_ARG3_TYPE) &VAR_4, 0) == -1)
        FUNC_4 (FUNC_1("Couldn't get registers"));

      FUNC_6 ((char *) &VAR_4, VAR_3);
      if (VAR_3 != -1)
 return;
    }

  if (VAR_3 == -1 || FUNC_2 (VAR_3))
    {
      struct fpreg VAR_5;

      if (FUNC_7 (VAR_0, FUNC_0 (VAR_2),
    (PTRACE_ARG3_TYPE) &VAR_5, 0) == -1)
 FUNC_4 (FUNC_1("Couldn't get FP registers"));

      FUNC_5 ((char *) &VAR_5, VAR_3);
      if (VAR_3 != -1)
 return;
    }
}
