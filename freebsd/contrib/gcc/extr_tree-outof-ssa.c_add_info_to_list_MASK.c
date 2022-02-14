
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* value_expr_p ;
typedef int temp_expr_table_p ;
struct TYPE_6__ {struct TYPE_6__* next; int value; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ,int *) ;
 int FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static inline void
FUNC_2 (temp_expr_table_p VAR_0, value_expr_p *VAR_1, value_expr_p VAR_2)
{
  if (FUNC_0 (*VAR_1, VAR_2->value, ((void*)0)))
    FUNC_1 (VAR_0, VAR_2);
  else
    {
      VAR_2->next = *VAR_1;
      *VAR_1 = VAR_2;
    }
}
