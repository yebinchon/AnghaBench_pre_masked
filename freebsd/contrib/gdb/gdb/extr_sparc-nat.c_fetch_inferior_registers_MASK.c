
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;
typedef int gregset_t ;
typedef int fpregset_t ;
typedef int PTRACE_ARG3_TYPE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct regcache* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (struct regcache*,int,int *) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct regcache*,int,int *) ;
 int FUNC_8 (int ,struct regcache*,int,int *) ;

void
FUNC_9 (int VAR_6)
{
  struct regcache *VAR_7 = VAR_3;
  int VAR_8;
  VAR_8 = FUNC_1 (VAR_4);
  if (VAR_8 == 0)
    VAR_8 = FUNC_0 (VAR_4);

  if (VAR_6 == VAR_2)
    {
      FUNC_4 (VAR_7, VAR_2, ((void*)0));
      return;
    }

  if (VAR_6 == -1 || FUNC_6 (VAR_6))
    {
      gregset_t VAR_9;

      if (FUNC_3 (VAR_1, VAR_8, (PTRACE_ARG3_TYPE) &VAR_9, 0) == -1)
 FUNC_2 ("Couldn't get registers");

      FUNC_8 (VAR_5, VAR_7, -1, &VAR_9);
      if (VAR_6 != -1)
 return;
    }

  if (VAR_6 == -1 || FUNC_5 (VAR_6))
    {
      fpregset_t VAR_10;

      if (FUNC_3 (VAR_0, VAR_8, (PTRACE_ARG3_TYPE) &VAR_10, 0) == -1)
 FUNC_2 ("Couldn't get floating point status");

      FUNC_7 (VAR_7, -1, &VAR_10);
    }
}
