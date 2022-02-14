
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg {int * r; int r_pc; int r_cpsr; int r_lr; int r_sp; } ;
typedef int PTRACE_ARG3_TYPE ;


 int FUNC_0 (int ) ;




 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int const,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5 (int VAR_3)
{
  struct reg VAR_4;

  int VAR_5;

  VAR_5 = FUNC_2 (VAR_0, FUNC_1 (VAR_2),
  (PTRACE_ARG3_TYPE) &VAR_4, 0);

  if (VAR_5 < 0)
    {
      FUNC_4 ("unable to fetch general register");
      return;
    }


  switch (VAR_3)
    {
    case 128:
      FUNC_3 (128, (char *) &VAR_4.r_sp);
      break;

    case 131:
      FUNC_3 (131, (char *) &VAR_4.r_lr);
      break;

    case 130:

      VAR_4.r_pc = FUNC_0 (VAR_4.r_pc);
      FUNC_3 (130, (char *) &VAR_4.r_pc);
      break;

    case 129:
      if (VAR_1)
 FUNC_3 (129, (char *) &VAR_4.r_cpsr);
      else
 FUNC_3 (129, (char *) &VAR_4.r_pc);
      break;

    default:
      FUNC_3 (VAR_3, (char *) &VAR_4.r[VAR_3]);
      break;
    }
}
