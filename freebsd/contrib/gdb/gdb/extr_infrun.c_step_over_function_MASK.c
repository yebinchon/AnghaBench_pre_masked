
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct symtab_and_line {void* pc; int section; } ;
struct execution_control_state {int dummy; } ;
struct TYPE_3__ {int frame_id; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (void*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct symtab_and_line*) ;
 int FUNC_11 () ;
 TYPE_1__* FUNC_12 (struct symtab_and_line,int ,int ) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void
FUNC_13 (struct execution_control_state *VAR_4)
{
  struct symtab_and_line VAR_5;

  FUNC_10 (&VAR_5);
  if (FUNC_2 ())
    VAR_5.pc = FUNC_0 (FUNC_1 (FUNC_8 ()));
  else
    VAR_5.pc = FUNC_0 (FUNC_7 (FUNC_8 ()));
  VAR_5.section = FUNC_5 (VAR_5.pc);

  FUNC_4 ();
  VAR_3 =
    FUNC_12 (VAR_5, FUNC_9 (FUNC_8 ()),
         VAR_0);

  if (FUNC_6 (VAR_2)
      && !FUNC_3 (VAR_5.pc))
    VAR_3->frame_id = VAR_2;

  if (VAR_1)
    FUNC_11 ();
}
