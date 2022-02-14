
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct insn_ent {TYPE_1__* def; struct insn_ent* next; } ;
struct attr_value {int has_asm_insn; int num_insns; struct insn_ent* first_insn; } ;
struct TYPE_2__ {int insn_code; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0 (struct attr_value *VAR_1, struct insn_ent *VAR_2)
{
  VAR_2->next = VAR_1->first_insn;
  VAR_1->first_insn = VAR_2;
  VAR_1->num_insns++;
  if (VAR_2->def->insn_code == -1)
    VAR_1->has_asm_insn = 1;

  VAR_0++;
}
