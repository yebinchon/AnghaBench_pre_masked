
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
 int FUNC_1 (int ,struct reg*,int) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int ,int ) ;

void
FUNC_6 (int VAR_7)
{
  if (VAR_7 == -1 || FUNC_3 (VAR_7))
    {
      struct reg VAR_8;

      if (FUNC_5 (VAR_2, FUNC_0 (VAR_6),
                  (PTRACE_ARG3_TYPE) &VAR_8, 0) == -1)
        FUNC_4 ("Couldn't get registers");

      FUNC_1 (VAR_5, &VAR_8, VAR_7);

      if (FUNC_5 (VAR_4, FUNC_0 (VAR_6),
           (PTRACE_ARG3_TYPE) &VAR_8, 0) == -1)
        FUNC_4 ("Couldn't write registers");

      if (VAR_7 != -1)
 return;
    }

  if (VAR_7 == -1 || VAR_7 >= VAR_0)
    {
      struct fpreg VAR_9;

      if (FUNC_5 (VAR_1, FUNC_0 (VAR_6),
    (PTRACE_ARG3_TYPE) &VAR_9, 0) == -1)
 FUNC_4 ("Couldn't get floating point status");

      FUNC_2 ((char *) &VAR_9, VAR_7);

      if (FUNC_5 (VAR_3, FUNC_0 (VAR_6),
    (PTRACE_ARG3_TYPE) &VAR_9, 0) == -1)
 FUNC_4 ("Couldn't write floating point status");
    }
}
