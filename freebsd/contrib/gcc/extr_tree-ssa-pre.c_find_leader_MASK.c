
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* value_set_t ;
typedef TYPE_2__* value_set_node_t ;
typedef int * tree ;
struct TYPE_6__ {int * expr; struct TYPE_6__* next; } ;
struct TYPE_5__ {scalar_t__ length; TYPE_2__* head; } ;


 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static tree
FUNC_3 (value_set_t VAR_0, tree VAR_1)
{
  value_set_node_t VAR_2;

  if (VAR_1 == ((void*)0))
    return ((void*)0);


  if (FUNC_1 (VAR_1))
    return VAR_1;

  if (VAR_0->length == 0)
    return ((void*)0);

  if (FUNC_2 (VAR_0, VAR_1))
    {
      for (VAR_2 = VAR_0->head;
    VAR_2;
    VAR_2 = VAR_2->next)
 {
   if (FUNC_0 (VAR_2->expr) == VAR_1)
     return VAR_2->expr;
 }
    }

  return ((void*)0);
}
