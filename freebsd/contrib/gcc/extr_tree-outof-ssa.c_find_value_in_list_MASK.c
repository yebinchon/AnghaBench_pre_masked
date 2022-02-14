
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* value_expr_p ;
struct TYPE_5__ {int value; struct TYPE_5__* next; } ;



__attribute__((used)) static inline value_expr_p
FUNC_0 (value_expr_p VAR_0, int VAR_1, value_expr_p *VAR_2)
{
  value_expr_p VAR_3;
  value_expr_p VAR_4 = ((void*)0);

  for (VAR_3 = VAR_0; VAR_3; VAR_4 = VAR_3, VAR_3 = VAR_3->next)
    {
      if (VAR_3->value == VAR_1)
        break;
    }
  if (VAR_2)
    *VAR_2 = VAR_4;
  return VAR_3;
}
