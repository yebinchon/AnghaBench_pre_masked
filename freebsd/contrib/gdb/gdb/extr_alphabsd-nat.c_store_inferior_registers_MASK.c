
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg {int dummy; } ;
struct fpreg {int dummy; } ;
typedef int PTRACE_ARG3_TYPE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_5 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int ,int ) ;

void
FUNC_6 (int VAR_6)
{
  if (VAR_6 == -1 || FUNC_3 (VAR_6))
    {
      struct reg VAR_7;
      if (FUNC_5 (VAR_2, FUNC_0 (VAR_5),
                  (PTRACE_ARG3_TYPE) &VAR_7, 0) == -1)
        FUNC_4 ("Couldn't get registers");

      FUNC_2 ((char *) &VAR_7, VAR_6);

      if (FUNC_5 (VAR_4, FUNC_0 (VAR_5),
                  (PTRACE_ARG3_TYPE) &VAR_7, 0) == -1)
        FUNC_4 ("Couldn't write registers");

      if (VAR_6 != -1)
 return;
    }

  if (VAR_6 == -1 || VAR_6 >= VAR_0)
    {
      struct fpreg VAR_8;

      if (FUNC_5 (VAR_1, FUNC_0 (VAR_5),
    (PTRACE_ARG3_TYPE) &VAR_8, 0) == -1)
 FUNC_4 ("Couldn't get floating point status");

      FUNC_1 ((char *) &VAR_8, VAR_6);

      if (FUNC_5 (VAR_3, FUNC_0 (VAR_5),
    (PTRACE_ARG3_TYPE) &VAR_8, 0) == -1)
 FUNC_4 ("Couldn't write floating point status");
    }
}
