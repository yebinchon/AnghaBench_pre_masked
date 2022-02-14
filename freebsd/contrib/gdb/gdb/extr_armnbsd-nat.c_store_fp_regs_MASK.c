
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpreg {int fpr_fpsr; int * fpr; } ;
typedef int PTRACE_ARG3_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  struct fpreg VAR_5;
  int VAR_6;
  int VAR_7;


  for (VAR_7 = VAR_0; VAR_7 <= VAR_1; VAR_7++)
    FUNC_2
      (VAR_7, (char *) &VAR_5.fpr[VAR_7 - VAR_0]);

  FUNC_2 (VAR_2, (char *) &VAR_5.fpr_fpsr);

  VAR_6 = FUNC_1 (VAR_3, FUNC_0 (VAR_4),
  (PTRACE_ARG3_TYPE) &VAR_5, 0);

  if (VAR_6 < 0)
    FUNC_3 ("unable to store floating-point registers");
}
