
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
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int,struct fpreg*) ;
 int FUNC_3 (int ,struct reg*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int ,int ) ;

void
FUNC_6 (int VAR_5)
{
  if (VAR_5 == -1 || FUNC_1 (VAR_5))
    {
      struct reg VAR_6;

      if (FUNC_5 (VAR_2, FUNC_0 (VAR_4),
    (PTRACE_ARG3_TYPE) &VAR_6, 0) == -1)
 FUNC_4 ("Couldn't get registers");

      FUNC_3 (VAR_3, &VAR_6, -1);
      if (VAR_5 != -1)
 return;
    }

  if (VAR_5 == -1 || VAR_5 >= VAR_0)
    {
      struct fpreg VAR_7;

      if (FUNC_5 (VAR_1, FUNC_0 (VAR_4),
    (PTRACE_ARG3_TYPE) &VAR_7, 0) == -1)
 FUNC_4 ("Couldn't get floating point status");

      FUNC_2 (VAR_3, -1, &VAR_7);
    }
}
