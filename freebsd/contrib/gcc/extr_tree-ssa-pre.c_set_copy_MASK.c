
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* value_set_t ;
typedef TYPE_2__* value_set_node_t ;
struct TYPE_7__ {int expr; struct TYPE_7__* next; } ;
struct TYPE_6__ {TYPE_2__* head; } ;


 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_1 (value_set_t VAR_0, value_set_t VAR_1)
{
  value_set_node_t VAR_2;

  if (!VAR_1 || !VAR_1->head)
    return;

  for (VAR_2 = VAR_1->head;
       VAR_2;
       VAR_2 = VAR_2->next)
    {
      FUNC_0 (VAR_0, VAR_2->expr);
    }
}
