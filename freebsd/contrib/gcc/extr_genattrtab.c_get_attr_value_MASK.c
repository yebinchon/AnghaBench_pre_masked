
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct attr_value {scalar_t__ has_asm_insn; scalar_t__ num_insns; TYPE_2__* first_insn; struct attr_value* next; int value; } ;
struct attr_desc {struct attr_value* first_value; } ;
typedef int rtx ;
struct TYPE_4__ {TYPE_1__* def; } ;
struct TYPE_3__ {size_t insn_code; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int* VAR_0 ;
 int FUNC_2 (struct attr_desc*,int ) ;
 struct attr_value* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static struct attr_value *
FUNC_5 (rtx VAR_1, struct attr_desc *VAR_2, int VAR_3)
{
  struct attr_value *VAR_4;
  int VAR_5 = 0;

  VAR_1 = FUNC_2 (VAR_2, VAR_1);
  if (FUNC_0 (VAR_1))
    {
      if (VAR_3 < 0 || VAR_0 == ((void*)0))
 FUNC_1 ("(eq_attr \"alternatives\" ...) used in non-insn context");
      else
 VAR_5 = VAR_0[VAR_3];
    }

  for (VAR_4 = VAR_2->first_value; VAR_4; VAR_4 = VAR_4->next)
    if (FUNC_4 (VAR_1, VAR_4->value)
 && (VAR_5 == 0 || VAR_4->first_insn == ((void*)0)
     || VAR_0[VAR_4->first_insn->def->insn_code]))
      return VAR_4;

  VAR_4 = FUNC_3 (sizeof (struct attr_value));
  VAR_4->value = VAR_1;
  VAR_4->next = VAR_2->first_value;
  VAR_2->first_value = VAR_4;
  VAR_4->first_insn = ((void*)0);
  VAR_4->num_insns = 0;
  VAR_4->has_asm_insn = 0;

  return VAR_4;
}
