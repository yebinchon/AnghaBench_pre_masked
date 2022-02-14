
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arc_operand_value {size_t type; int value; } ;
struct arc_operand {int dummy; } ;
struct arc_ext_operand_value {struct arc_ext_operand_value* next; struct arc_operand_value const operand; } ;


 struct arc_ext_operand_value* VAR_0 ;
 struct arc_operand const* VAR_1 ;
 struct arc_operand_value* VAR_2 ;
 int VAR_3 ;

const struct arc_operand_value *
FUNC_0 (const struct arc_operand *VAR_4, int VAR_5)
{
  const struct arc_operand_value *VAR_6,*VAR_7;
  struct arc_ext_operand_value *VAR_8 = VAR_0;

  while (VAR_8)
    {
      if (VAR_4 == &VAR_1[VAR_8->operand.type]
   && VAR_5 == VAR_8->operand.value)
 return (&VAR_8->operand);
      VAR_8 = VAR_8->next;
    }


  for (VAR_6 = VAR_2, VAR_7 = VAR_2 + VAR_3; VAR_6 < VAR_7; ++VAR_6)
    if (VAR_4 == &VAR_1[VAR_6->type]
 && VAR_5 == VAR_6->value)
      return VAR_6;
  return 0;
}
