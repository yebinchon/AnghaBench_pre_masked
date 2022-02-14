
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arc_operand_value {int type; long value; } ;
struct arc_ext_operand_value {struct arc_ext_operand_value* next; struct arc_operand_value const operand; } ;


 int VAR_0 ;
 struct arc_ext_operand_value* VAR_1 ;
 struct arc_operand_value const* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static const struct arc_operand_value *
FUNC_0 (int VAR_4, long VAR_5)
{
  const struct arc_operand_value *VAR_6,*VAR_7;
  struct arc_ext_operand_value *VAR_8 = VAR_1;

  while (VAR_8)
    {
      if (VAR_8->operand.type == VAR_4 && VAR_8->operand.value == VAR_5)
 return (&VAR_8->operand);
      VAR_8 = VAR_8->next;
    }

  if (VAR_4 == VAR_0)
    return &VAR_2[VAR_5];


  for (VAR_6 = VAR_2, VAR_7 = VAR_2 + VAR_3;
       VAR_6 < VAR_7; ++VAR_6)
    if (VAR_4 == VAR_6->type && VAR_5 == VAR_6->value)
      return VAR_6;
  return 0;
}
