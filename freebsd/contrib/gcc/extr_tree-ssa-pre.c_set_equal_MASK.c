
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* value_set_t ;
typedef TYPE_2__* value_set_node_t ;
struct TYPE_7__ {int expr; struct TYPE_7__* next; } ;
struct TYPE_6__ {scalar_t__ length; TYPE_2__* head; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static bool
FUNC_2 (value_set_t VAR_0, value_set_t VAR_1)
{
  value_set_node_t VAR_2;

  if (VAR_0->length != VAR_1->length)
    return 0;
  for (VAR_2 = VAR_0->head;
       VAR_2;
       VAR_2 = VAR_2->next)
    {
      if (!FUNC_1 (VAR_1, FUNC_0 (VAR_2->expr)))
 return 0;
    }
  return 1;
}
