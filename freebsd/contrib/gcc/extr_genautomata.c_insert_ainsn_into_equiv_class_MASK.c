
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ainsn_t ;
struct TYPE_5__ {struct TYPE_5__* next_equiv_class_insn; } ;



__attribute__((used)) static ainsn_t
FUNC_0 (ainsn_t VAR_0,
          ainsn_t VAR_1)
{
  if (VAR_1 == ((void*)0))
    VAR_0->next_equiv_class_insn = VAR_0;
  else
    {
      VAR_0->next_equiv_class_insn
        = VAR_1->next_equiv_class_insn;
      VAR_1->next_equiv_class_insn = VAR_0;
    }
  return VAR_0;
}
