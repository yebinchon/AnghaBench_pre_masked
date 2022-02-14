
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
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int ,int ) ;

void
FUNC_6 (int VAR_4)
{
  if (VAR_4 == -1 || FUNC_3 (VAR_4))
    {
      struct reg VAR_5;

      if (FUNC_5 (VAR_2, FUNC_0 (VAR_3),
    (PTRACE_ARG3_TYPE) &VAR_5, 0) == -1)
 FUNC_4 ("Couldn't get registers");

      FUNC_2 ((char *) &VAR_5, VAR_4);
      if (VAR_4 != -1)
 return;
    }

  if (VAR_4 == -1 || VAR_4 >= VAR_0)
    {
      struct fpreg VAR_6;

      if (FUNC_5 (VAR_1, FUNC_0 (VAR_3),
    (PTRACE_ARG3_TYPE) &VAR_6, 0) == -1)
 FUNC_4 ("Couldn't get floating point status");

      FUNC_1 ((char *) &VAR_6, VAR_4);
    }
}
