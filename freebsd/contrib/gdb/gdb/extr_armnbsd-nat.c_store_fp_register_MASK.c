
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpreg {int * fpr; int fpr_fpsr; } ;
typedef int PTRACE_ARG3_TYPE ;


 int VAR_0 ;

 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int const,char*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4 (int VAR_4)
{
  struct fpreg VAR_5;
  int VAR_6;

  VAR_6 = FUNC_1 (VAR_1, FUNC_0 (VAR_3),
  (PTRACE_ARG3_TYPE) &VAR_5, 0);

  if (VAR_6 < 0)
    {
      FUNC_3 ("unable to fetch floating-point registers");
      return;
    }

  switch (VAR_4)
    {
    case 128:
      FUNC_2 (128,
   (char *) &VAR_5.fpr_fpsr);
      break;

    default:
      FUNC_2
 (VAR_4, (char *) &VAR_5.fpr[VAR_4 - VAR_0]);
      break;
    }

  VAR_6 = FUNC_1 (VAR_2, FUNC_0 (VAR_3),
  (PTRACE_ARG3_TYPE) &VAR_5, 0);

  if (VAR_6 < 0)
    FUNC_3 ("unable to write register %d to inferior", VAR_4);
}
