
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
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,int ,int ,int ) ;

void
FUNC_7 (int VAR_5)
{
  if (VAR_5 == -1 || FUNC_2 (VAR_5))
    {
      struct reg VAR_6;

      if (FUNC_6 (VAR_1, FUNC_0 (VAR_4),
    (PTRACE_ARG3_TYPE) &VAR_6, 0) == -1)
 FUNC_3 ("Couldn't get registers");

      FUNC_5 ((char *) &VAR_6, VAR_5);

      if (FUNC_6 (VAR_3, FUNC_0 (VAR_4),
    (PTRACE_ARG3_TYPE) &VAR_6, 0) == -1)
 FUNC_3 ("Couldn't write registers");

      if (VAR_5 != -1)
 return;
    }

  if (VAR_5 == -1 || FUNC_1 (VAR_5))
    {
      struct fpreg VAR_7;

      if (FUNC_6 (VAR_0, FUNC_0 (VAR_4),
    (PTRACE_ARG3_TYPE) &VAR_7, 0) == -1)
 FUNC_3 ("Couldn't get FP registers");

      FUNC_4 ((char *) &VAR_7, VAR_5);

      if (FUNC_6 (VAR_2, FUNC_0 (VAR_4),
    (PTRACE_ARG3_TYPE) &VAR_7, 0) == -1)
 FUNC_3 ("Couldn't set FP registers");
    }
}
