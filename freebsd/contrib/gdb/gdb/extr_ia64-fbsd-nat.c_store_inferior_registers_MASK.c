
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gregset_t ;
typedef int fpregset_t ;
typedef int PTRACE_ARG3_TYPE ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int ,int ) ;

void
FUNC_7 (int VAR_5)
{
  union {
    fpregset_t fpr;
    gregset_t r;
  } VAR_6;

  if (VAR_5 == -1 || FUNC_1(VAR_5))
    {
      if (FUNC_6 (VAR_1, FUNC_2(VAR_4),
    (PTRACE_ARG3_TYPE)&VAR_6.r, 0) == -1)
 FUNC_5 ("Couldn't get registers");
      FUNC_4 (&VAR_6.r, VAR_5);
      if (FUNC_6 (VAR_3, FUNC_2(VAR_4),
    (PTRACE_ARG3_TYPE)&VAR_6.r, 0) == -1)
 FUNC_5 ("Couldn't get registers");
      if (VAR_5 != -1)
 return;
    }

  if (VAR_5 == -1 || FUNC_0(VAR_5))
    {
      if (FUNC_6 (VAR_0, FUNC_2(VAR_4),
    (PTRACE_ARG3_TYPE)&VAR_6.fpr, 0) == -1)
 FUNC_5 ("Couldn't get FP registers");
      FUNC_3 (&VAR_6.fpr, VAR_5);
      if (FUNC_6 (VAR_2, FUNC_2(VAR_4),
    (PTRACE_ARG3_TYPE)&VAR_6.fpr, 0) == -1)
 FUNC_5 ("Couldn't get FP registers");
      if (VAR_5 != -1)
 return;
    }
}
