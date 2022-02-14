
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
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7 (int VAR_3)
{
  union {
    fpregset_t fpr;
    gregset_t r;
  } VAR_4;

  if (VAR_3 == -1 || FUNC_1(VAR_3))
    {
      if (FUNC_4 (VAR_1, FUNC_2(VAR_2),
    (PTRACE_ARG3_TYPE)&VAR_4.r, 0) == -1)
 FUNC_3 ("Couldn't get registers");
      FUNC_6 (&VAR_4.r);
    }

  if (VAR_3 == -1 || FUNC_0(VAR_3))
    {
      if (FUNC_4 (VAR_0, FUNC_2(VAR_2),
    (PTRACE_ARG3_TYPE)&VAR_4.fpr, 0) == -1)
 FUNC_3 ("Couldn't get FP registers");
      FUNC_5 (&VAR_4.fpr);
    }
}
