
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg {unsigned int r_pc; int r_cpsr; int r_lr; int r_sp; int * r; } ;
typedef int PTRACE_ARG3_TYPE ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5 (void)
{
  struct reg VAR_8;
  int VAR_9;
  int VAR_10;


  for (VAR_10 = VAR_0; VAR_10 < VAR_4; VAR_10++)
    FUNC_3 (VAR_10, (char *) &VAR_8.r[VAR_10]);

  FUNC_3 (VAR_4, (char *) &VAR_8.r_sp);
  FUNC_3 (VAR_1, (char *) &VAR_8.r_lr);

  if (VAR_6)
    {
      FUNC_3 (VAR_2, (char *) &VAR_8.r_pc);
      FUNC_3 (VAR_3, (char *) &VAR_8.r_cpsr);
    }
  else
    {
      unsigned VAR_11;
      unsigned VAR_12;

      FUNC_3 (VAR_2, (char *) &VAR_11);
      FUNC_3 (VAR_3, (char *) &VAR_12);

      VAR_11 = FUNC_0 (VAR_11);
      VAR_12 ^= FUNC_0 (VAR_12);

      VAR_8.r_pc = VAR_11 | VAR_12;
    }


  VAR_9 = FUNC_2 (VAR_5, FUNC_1 (VAR_7),
  (PTRACE_ARG3_TYPE) &VAR_8, 0);

  if (VAR_9 < 0)
    FUNC_4 ("unable to store general registers");

}
