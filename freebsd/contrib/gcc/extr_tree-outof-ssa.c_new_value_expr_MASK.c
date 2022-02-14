
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* value_expr_p ;
typedef TYPE_2__* temp_expr_table_p ;
struct value_expr_d {int dummy; } ;
struct TYPE_6__ {TYPE_1__* free_list; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline value_expr_p
FUNC_1 (temp_expr_table_p VAR_0)
{
  value_expr_p VAR_1;
  if (VAR_0->free_list)
    {
      VAR_1 = VAR_0->free_list;
      VAR_0->free_list = VAR_1->next;
    }
  else
    VAR_1 = (value_expr_p) FUNC_0 (sizeof (struct value_expr_d));

  return VAR_1;
}
