
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct insn_ent {struct insn_ent* next; } ;
struct attr_value {int value; struct insn_ent* first_insn; struct attr_value* next; } ;
struct attr_desc {struct attr_value* first_value; TYPE_1__* default_val; } ;
struct TYPE_2__ {int value; } ;


 struct attr_desc* FUNC_0 (int *,int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int ,int*) ;
 int FUNC_2 (char*,unsigned int) ;

__attribute__((used)) static void
FUNC_3 (void)
{
  struct attr_desc *VAR_1 = FUNC_0 (&VAR_0, 0);
  struct attr_value *VAR_2;
  struct insn_ent *VAR_3;
  unsigned int VAR_4, VAR_5;
  int VAR_6 = 0;

  if (VAR_1 == 0)
    return;
  VAR_5 = FUNC_1 (VAR_1->default_val->value, &VAR_6);
  for (VAR_2 = VAR_1->first_value; VAR_2; VAR_2 = VAR_2->next)
    for (VAR_3 = VAR_2->first_insn; VAR_3; VAR_3 = VAR_3->next)
      VAR_5 |= FUNC_1 (VAR_2->value, &VAR_6);

  if (VAR_6)
    VAR_4 = 0;
  else
    {
      VAR_5 = ~VAR_5;
      for (VAR_4 = 0; VAR_5 & 1; VAR_5 >>= 1)
 VAR_4++;
    }
  FUNC_2 ("const int length_unit_log = %u;\n", VAR_4);
}
