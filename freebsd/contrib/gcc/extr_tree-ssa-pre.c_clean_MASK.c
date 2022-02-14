
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* value_set_t ;
typedef TYPE_2__* value_set_node_t ;
typedef int basic_block ;
struct TYPE_7__ {int expr; struct TYPE_7__* next; } ;
struct TYPE_6__ {TYPE_2__* head; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void
FUNC_2 (value_set_t VAR_0, basic_block VAR_1)
{
  value_set_node_t VAR_2;
  value_set_node_t VAR_3;
  VAR_2 = VAR_0->head;
  while (VAR_2)
    {
      VAR_3 = VAR_2->next;
      if (!FUNC_1 (VAR_0, VAR_2->expr, VAR_1))
 FUNC_0 (VAR_0, VAR_2->expr);
      VAR_2 = VAR_3;
    }
}
