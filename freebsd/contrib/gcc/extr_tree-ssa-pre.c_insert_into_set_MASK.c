
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* value_set_t ;
typedef TYPE_2__* value_set_node_t ;
typedef int tree ;
struct TYPE_6__ {struct TYPE_6__* next; int expr; } ;
struct TYPE_5__ {TYPE_2__* tail; TYPE_2__* head; int length; scalar_t__ indexed; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5 (value_set_t VAR_1, tree VAR_2)
{
  value_set_node_t VAR_3 = (value_set_node_t) FUNC_3 (VAR_0);
  tree VAR_4 = FUNC_1 (VAR_2);
  FUNC_0 (VAR_4);

  if (FUNC_2 (VAR_4))
    return;




  if (VAR_1->indexed)
    FUNC_4 (VAR_1, VAR_4);

  VAR_3->next = ((void*)0);
  VAR_3->expr = VAR_2;
  VAR_1->length ++;
  if (VAR_1->head == ((void*)0))
    {
      VAR_1->head = VAR_1->tail = VAR_3;
    }
  else
    {
      VAR_1->tail->next = VAR_3;
      VAR_1->tail = VAR_3;
    }
}
