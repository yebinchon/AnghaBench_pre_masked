
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* value_set_t ;
typedef TYPE_2__* value_set_node_t ;
typedef int bitmap_set_t ;
struct TYPE_8__ {int expr; struct TYPE_8__* next; } ;
struct TYPE_7__ {TYPE_2__* head; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int) ;

__attribute__((used)) static value_set_t
FUNC_3 (value_set_t VAR_0, bitmap_set_t VAR_1,
        bool VAR_2)
{
  value_set_t VAR_3 = FUNC_2 (VAR_2);
  value_set_node_t VAR_4;
  for (VAR_4 = VAR_0->head;
       VAR_4;
       VAR_4 = VAR_4->next)
    {
      if (!FUNC_0 (VAR_1, VAR_4->expr))
 FUNC_1 (VAR_3, VAR_4->expr);
    }
  return VAR_3;
}
