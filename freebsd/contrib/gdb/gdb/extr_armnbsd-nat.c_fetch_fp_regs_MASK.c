
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpreg {int dummy; } ;
typedef int PTRACE_ARG3_TYPE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct fpreg*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  struct fpreg VAR_2;
  int VAR_3;
  int VAR_4;

  VAR_3 = FUNC_1 (VAR_0, FUNC_0 (VAR_1),
  (PTRACE_ARG3_TYPE) &VAR_2, 0);

  if (VAR_3 < 0)
    {
      FUNC_3 ("unable to fetch general registers");
      return;
    }

  FUNC_2 (&VAR_2);
}
