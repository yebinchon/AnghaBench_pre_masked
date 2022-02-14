
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gregset_t ;
typedef int fpregset_t ;
typedef int PTRACE_ARG3_TYPE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int,char*) ;
 int VAR_6 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int *) ;

void
FUNC_7 (int VAR_7)
{
  if (VAR_7 == -1 || FUNC_0 (VAR_7))
    {
      gregset_t VAR_8;

      if (FUNC_5 (VAR_2, FUNC_1 (VAR_6),
    (PTRACE_ARG3_TYPE) &VAR_8, 0) == -1)
 FUNC_4 ("Couldn't get registers");

      FUNC_6 (&VAR_8);
      if (VAR_7 != -1)
 return;
    }

  if (VAR_7 == -1 || VAR_7 >= VAR_0)
    {
      fpregset_t VAR_9;
      if (FUNC_5 (VAR_1, FUNC_1 (VAR_6),
    (PTRACE_ARG3_TYPE) &VAR_9, 0) == -1)
 FUNC_4 ("Couldn't get floating point status");

      FUNC_2 (VAR_4, -1, &VAR_9);

    }
}
