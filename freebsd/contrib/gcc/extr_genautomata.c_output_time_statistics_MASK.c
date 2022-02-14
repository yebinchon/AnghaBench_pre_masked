
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_2 (FILE *VAR_8)
{
  FUNC_0 (VAR_8, "\n  transformation: ");
  FUNC_1 (VAR_8, VAR_7);
  FUNC_0 (VAR_8, (!VAR_5 ? ", building DFA: " : ", building NDFA: "));
  FUNC_1 (VAR_8, VAR_0);
  if (VAR_5)
    {
      FUNC_0 (VAR_8, ", NDFA -> DFA: ");
      FUNC_1 (VAR_8, VAR_1);
    }
  FUNC_0 (VAR_8, "\n  DFA minimization: ");
  FUNC_1 (VAR_8, VAR_4);
  FUNC_0 (VAR_8, ", making insn equivalence: ");
  FUNC_1 (VAR_8, VAR_3);
  FUNC_0 (VAR_8, "\n all automaton generation: ");
  FUNC_1 (VAR_8, VAR_2);
  FUNC_0 (VAR_8, ", output: ");
  FUNC_1 (VAR_8, VAR_6);
  FUNC_0 (VAR_8, "\n");
}
