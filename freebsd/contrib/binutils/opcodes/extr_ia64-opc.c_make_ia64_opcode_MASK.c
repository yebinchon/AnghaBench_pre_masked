
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ia64_opcode {int ent_index; int * dependencies; int flags; int * operands; int mask; int opcode; int num_outputs; int type; int name; } ;
typedef int ia64_insn ;
struct TYPE_2__ {int flags; int * operands; int mask; int num_outputs; int opcode_type; } ;


 TYPE_1__* VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static struct ia64_opcode *
FUNC_2 (ia64_insn VAR_2, const char *VAR_3, int VAR_4, int VAR_5)
{
  struct ia64_opcode *VAR_6 =
    (struct ia64_opcode *) FUNC_0 (sizeof (struct ia64_opcode));
  VAR_6->name = FUNC_1 (VAR_3);
  VAR_6->type = VAR_0[VAR_4].opcode_type;
  VAR_6->num_outputs = VAR_0[VAR_4].num_outputs;
  VAR_6->opcode = VAR_2;
  VAR_6->mask = VAR_0[VAR_4].mask;
  VAR_6->operands[0] = VAR_0[VAR_4].operands[0];
  VAR_6->operands[1] = VAR_0[VAR_4].operands[1];
  VAR_6->operands[2] = VAR_0[VAR_4].operands[2];
  VAR_6->operands[3] = VAR_0[VAR_4].operands[3];
  VAR_6->operands[4] = VAR_0[VAR_4].operands[4];
  VAR_6->flags = VAR_0[VAR_4].flags;
  VAR_6->ent_index = VAR_4;
  VAR_6->dependencies = &VAR_1[VAR_5];
  return VAR_6;
}
