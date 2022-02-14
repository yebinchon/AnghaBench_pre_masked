
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct main_entry {int completers; int main_index; TYPE_1__* opcode; } ;
struct TYPE_2__ {scalar_t__ type; int mask; int opcode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 struct main_entry** VAR_2 ;
 int VAR_3 ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6 (void)
{
  int VAR_4;

  VAR_1 = FUNC_4 ();

  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    {
      struct main_entry *VAR_5 = VAR_2[VAR_4];

      if (VAR_5->opcode->type != VAR_0)
 FUNC_0 (VAR_1,
         VAR_5->opcode->opcode, VAR_5->opcode->mask,
         VAR_5->main_index,
         VAR_5->completers, 1);
    }

  FUNC_1 (VAR_1);
  FUNC_2 ();
  FUNC_3 (VAR_1);

  FUNC_5 ();
}
