
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;
typedef int gregset_t ;
typedef int fpregset_t ;
typedef int fpregs ;
typedef int ULONGEST ;
typedef int PTRACE_ARG3_TYPE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 struct regcache* VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int,int ,int ) ;
 int FUNC_6 (struct regcache*,int,int *) ;
 int FUNC_7 (struct regcache*,int,int *) ;
 int FUNC_8 (int ,struct regcache*,int,int *) ;
 int FUNC_9 (struct regcache*,int ,int) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_9 ;
 scalar_t__ FUNC_11 (int) ;

void
FUNC_12 (int VAR_10)
{
  struct regcache *VAR_11 = VAR_7;
  int VAR_12;



  VAR_12 = FUNC_1 (VAR_8);
  if (VAR_12 == 0)
    VAR_12 = FUNC_0 (VAR_8);

  if (VAR_10 == -1 || FUNC_11 (VAR_10))
    {
      gregset_t VAR_13;

      if (FUNC_5 (VAR_1, VAR_12, (PTRACE_ARG3_TYPE) &VAR_13, 0) == -1)
 FUNC_4 ("Couldn't get registers");

      FUNC_8 (VAR_9, VAR_11, VAR_10, &VAR_13);

      if (FUNC_5 (VAR_3, VAR_12, (PTRACE_ARG3_TYPE) &VAR_13, 0) == -1)
 FUNC_4 ("Couldn't write registers");


      if (VAR_10 == -1 || VAR_10 == VAR_6
   || (VAR_10 >= VAR_5 && VAR_10 <= VAR_4))
 {
   ULONGEST VAR_14;

   FUNC_6 (VAR_11, VAR_6, &VAR_14);
   FUNC_9 (VAR_11, VAR_14, VAR_10);
 }

      if (VAR_10 != -1)
 return;
    }

  if (VAR_10 == -1 || FUNC_10 (VAR_10))
    {
      fpregset_t VAR_15, VAR_16;

      if (FUNC_5 (VAR_0, VAR_12, (PTRACE_ARG3_TYPE) &VAR_15, 0) == -1)
 FUNC_4 ("Couldn't get floating-point registers");

      FUNC_3 (&VAR_16, &VAR_15, sizeof (VAR_15));
      FUNC_7 (VAR_11, VAR_10, &VAR_15);





      if (FUNC_2 (&VAR_16, &VAR_15, sizeof (VAR_15)) != 0)
 {
   if (FUNC_5 (VAR_2, VAR_12,
        (PTRACE_ARG3_TYPE) &VAR_15, 0) == -1)
     FUNC_4 ("Couldn't write floating-point registers");
 }

      if (VAR_10 != -1)
 return;
    }
}
