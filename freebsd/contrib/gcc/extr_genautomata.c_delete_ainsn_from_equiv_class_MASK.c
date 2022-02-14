
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* ainsn_t ;
struct TYPE_3__ {struct TYPE_3__* next_equiv_class_insn; } ;



__attribute__((used)) static void
FUNC_0 (ainsn_t VAR_0)
{
  ainsn_t VAR_1;
  ainsn_t VAR_2;

  VAR_2 = VAR_0;
  for (VAR_1 = VAR_0->next_equiv_class_insn;
       VAR_1 != VAR_0;
       VAR_1 = VAR_1->next_equiv_class_insn)
    VAR_2 = VAR_1;
  if (VAR_2 != VAR_0)
    VAR_2->next_equiv_class_insn
      = VAR_0->next_equiv_class_insn;
}
