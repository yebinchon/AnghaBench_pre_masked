
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* value_expr_p ;
typedef int temp_expr_table_p ;
struct TYPE_5__ {int value; struct TYPE_5__* next; } ;


 int FUNC_0 (TYPE_1__*,int,int *) ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static inline void
FUNC_2 (temp_expr_table_p VAR_0, value_expr_p *VAR_1, int VAR_2)
{
  value_expr_p VAR_3;

  if (!FUNC_0 (*VAR_1, VAR_2, ((void*)0)))
    {
      VAR_3 = FUNC_1 (VAR_0);
      VAR_3->value = VAR_2;
      VAR_3->next = *VAR_1;
      *VAR_1 = VAR_3;
    }
}
