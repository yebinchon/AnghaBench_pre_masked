
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
 int VAR_6 ;
 int FUNC_2 (int *,int) ;
 int VAR_7 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int) ;
 int VAR_8 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int ,int ) ;

void
FUNC_7 (int VAR_9)
{
  if (VAR_9 == -1 || FUNC_0 (VAR_9))
    {
      gregset_t VAR_10;

      if (FUNC_6 (VAR_2, FUNC_1 (VAR_8),
                  (PTRACE_ARG3_TYPE) &VAR_10, 0) == -1)
        FUNC_5 ("Couldn't get registers");

      FUNC_2 (&VAR_10, VAR_9);

      if (FUNC_6 (VAR_5, FUNC_1 (VAR_8),
           (PTRACE_ARG3_TYPE) &VAR_10, 0) == -1)
        FUNC_5 ("Couldn't write registers");

      if (VAR_9 != -1)
 return;
    }

  if (VAR_9 == -1 || VAR_9 >= VAR_0)
    {
      fpregset_t VAR_11;
          if (FUNC_6 (VAR_1, FUNC_1 (VAR_8),
        (PTRACE_ARG3_TYPE) &VAR_11, 0) == -1)
     FUNC_5 ("Couldn't get floating point status");

          FUNC_3 ((char *) &VAR_11, VAR_9);

          if (FUNC_6 (VAR_4, FUNC_1 (VAR_8),
        (PTRACE_ARG3_TYPE) &VAR_11, 0) == -1)
     FUNC_5 ("Couldn't write floating point status");



    }
}
