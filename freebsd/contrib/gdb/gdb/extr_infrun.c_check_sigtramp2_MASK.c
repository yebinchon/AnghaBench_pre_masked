
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {int pc; int section; } ;
struct execution_control_state {int remove_breakpoints_on_following_step; int another_trap; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct symtab_and_line*) ;
 int FUNC_3 () ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (struct symtab_and_line,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_7 (struct execution_control_state *VAR_8)
{
  if (VAR_7
      && FUNC_4 (VAR_5)
      && !FUNC_4 (VAR_3)
      && FUNC_0 (FUNC_5 (), VAR_4))
    {
      struct symtab_and_line VAR_9;

      FUNC_2 (&VAR_9);
      VAR_9.pc = VAR_3;
      VAR_9.section = FUNC_1 (VAR_9.pc);


      VAR_6 =
 FUNC_6 (VAR_9, VAR_2, VAR_0);
      if (VAR_1)
 FUNC_3 ();

      VAR_8->remove_breakpoints_on_following_step = 1;
      VAR_8->another_trap = 1;
    }
}
