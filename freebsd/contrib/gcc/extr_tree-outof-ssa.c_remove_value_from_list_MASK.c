
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* value_expr_p ;
struct TYPE_7__ {struct TYPE_7__* next; } ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int,TYPE_1__**) ;

__attribute__((used)) static value_expr_p
FUNC_1 (value_expr_p *VAR_0, int VAR_1)
{
  value_expr_p VAR_2, VAR_3;

  VAR_2 = FUNC_0 (*VAR_0, VAR_1, &VAR_3);
  if (!VAR_2)
    return ((void*)0);
  if (!VAR_3)
    *VAR_0 = VAR_2->next;
  else
    VAR_3->next = VAR_2->next;

  return VAR_2;
}
