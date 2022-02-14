
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct main_entry {struct main_entry* next; int main_index; TYPE_3__* completers; TYPE_2__* opcode; TYPE_1__* name; } ;
struct TYPE_6__ {int num; } ;
struct TYPE_5__ {int type; int num_outputs; int* operands; int flags; int mask; int opcode; } ;
struct TYPE_4__ {int num; } ;


 struct main_entry* VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  struct main_entry *VAR_2 = VAR_0;
  int VAR_3 = 0;

  FUNC_1 ("static const struct ia64_main_table\nmain_table[] = {\n");
  while (VAR_2 != ((void*)0))
    {
      FUNC_1 ("  { %d, %d, %d, 0x",
       VAR_2->name->num,
       VAR_2->opcode->type,
       VAR_2->opcode->num_outputs);
      FUNC_0 (VAR_1, VAR_2->opcode->opcode);
      FUNC_1 ("ull, 0x");
      FUNC_0 (VAR_1, VAR_2->opcode->mask);
      FUNC_1 ("ull, { %d, %d, %d, %d, %d }, 0x%x, %d, },\n",
       VAR_2->opcode->operands[0],
       VAR_2->opcode->operands[1],
       VAR_2->opcode->operands[2],
       VAR_2->opcode->operands[3],
       VAR_2->opcode->operands[4],
       VAR_2->opcode->flags,
       VAR_2->completers->num);

      VAR_2->main_index = VAR_3++;

      VAR_2 = VAR_2->next;
    }
  FUNC_1 ("};\n\n");
}
