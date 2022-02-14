
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct du_chain {size_t cl; struct du_chain* next_chain; struct du_chain* next_use; int insn; int * loc; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,...) ;
 int** VAR_1 ;
 char** VAR_2 ;
 char** VAR_3 ;

__attribute__((used)) static void
FUNC_4 (struct du_chain *VAR_4)
{
  while (VAR_4)
    {
      struct du_chain *VAR_5 = VAR_4;
      int VAR_6 = FUNC_2 (*VAR_5->loc);
      int VAR_7 = VAR_1[VAR_6][FUNC_0 (*VAR_5->loc)];
      FUNC_3 (VAR_0, "Register %s (%d):", VAR_3[VAR_6], VAR_7);
      while (VAR_5)
 {
   FUNC_3 (VAR_0, " %d [%s]", FUNC_1 (VAR_5->insn),
     VAR_2[VAR_5->cl]);
   VAR_5 = VAR_5->next_use;
 }
      FUNC_3 (VAR_0, "\n");
      VAR_4 = VAR_4->next_chain;
    }
}
