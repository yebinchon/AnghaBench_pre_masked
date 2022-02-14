
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
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int const,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (int VAR_3)
{
  struct fpreg VAR_4;

  int VAR_5;

  VAR_5 = FUNC_1 (VAR_1, FUNC_0 (VAR_2),
  (PTRACE_ARG3_TYPE) &VAR_4, 0);

  if (VAR_5 < 0)
    {
      FUNC_3 ("unable to fetch floating-point register");
      return;
    }


  switch (VAR_3)
    {
    case 128:
      FUNC_2 (128,
         (char *) &VAR_4.fpr_fpsr);
      break;

    default:
      FUNC_2
 (VAR_3, (char *) &VAR_4.fpr[VAR_3 - VAR_0]);
      break;
    }
}
