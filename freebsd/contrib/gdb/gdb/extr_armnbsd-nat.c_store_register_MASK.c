
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg {unsigned int r_pc; int * r; int r_cpsr; int r_lr; int r_sp; } ;
typedef int PTRACE_ARG3_TYPE ;


 unsigned int FUNC_0 (unsigned int) ;




 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int const,char*) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void
FUNC_5 (int VAR_4)
{
  struct reg VAR_5;
  int VAR_6;

  VAR_6 = FUNC_2 (VAR_0, FUNC_1 (VAR_3),
  (PTRACE_ARG3_TYPE) &VAR_5, 0);

  if (VAR_6 < 0)
    {
      FUNC_4 ("unable to fetch general registers");
      return;
    }

  switch (VAR_4)
    {
    case 128:
      FUNC_3 (128, (char *) &VAR_5.r_sp);
      break;

    case 131:
      FUNC_3 (131, (char *) &VAR_5.r_lr);
      break;

    case 130:
      if (VAR_2)
 FUNC_3 (130, (char *) &VAR_5.r_pc);
      else
 {
   unsigned VAR_7;

   FUNC_3 (130, (char *) &VAR_7);

   VAR_7 = FUNC_0 (VAR_7);
   VAR_5.r_pc
     ^= FUNC_0 (VAR_5.r_pc);
   VAR_5.r_pc |= VAR_7;
 }
      break;

    case 129:
      if (VAR_2)
 FUNC_3 (129, (char *) &VAR_5.r_cpsr);
      else
 {
   unsigned VAR_8;

   FUNC_3 (129, (char *) &VAR_8);

   VAR_8 ^= FUNC_0 (VAR_8);
   VAR_5.r_pc = FUNC_0 (VAR_5.r_pc);
   VAR_5.r_pc |= VAR_8;
 }
      break;

    default:
      FUNC_3 (VAR_4, (char *) &VAR_5.r[VAR_4]);
      break;
    }

  VAR_6 = FUNC_2 (VAR_1, FUNC_1 (VAR_3),
  (PTRACE_ARG3_TYPE) &VAR_5, 0);

  if (VAR_6 < 0)
    FUNC_4 ("unable to write register %d to inferior", VAR_4);
}
