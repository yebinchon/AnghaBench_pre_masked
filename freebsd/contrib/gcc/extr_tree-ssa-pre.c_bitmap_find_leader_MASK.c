
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* value_set_t ;
typedef TYPE_2__* value_set_node_t ;
typedef int * tree ;
typedef TYPE_3__* bitmap_set_t ;
struct TYPE_9__ {int expressions; } ;
struct TYPE_8__ {int * expr; struct TYPE_8__* next; } ;
struct TYPE_7__ {TYPE_2__* head; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static tree
FUNC_6 (bitmap_set_t VAR_1, tree VAR_2)
{
  if (VAR_2 == ((void*)0))
    return ((void*)0);

  if (FUNC_5 (VAR_2))
    return VAR_2;
  if (FUNC_4 (VAR_1, VAR_2))
    {
      value_set_t VAR_3;
      value_set_node_t VAR_4;
      VAR_3 = FUNC_2 (VAR_2);
      for (VAR_4 = VAR_3->head; VAR_4; VAR_4 = VAR_4->next)
 {
   if (FUNC_1 (VAR_4->expr) == VAR_0)
     {
       if (FUNC_3 (VAR_1->expressions,
    FUNC_0 (VAR_4->expr)))
  return VAR_4->expr;
     }
 }
    }
  return ((void*)0);
}
