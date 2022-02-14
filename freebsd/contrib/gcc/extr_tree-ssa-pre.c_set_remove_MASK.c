
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* value_set_t ;
typedef TYPE_2__* value_set_node_t ;
typedef scalar_t__ tree ;
struct TYPE_7__ {scalar_t__ expr; struct TYPE_7__* next; } ;
struct TYPE_6__ {TYPE_2__* tail; TYPE_2__* head; int length; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3 (value_set_t VAR_1, tree VAR_2)
{
  value_set_node_t VAR_3, VAR_4;



  FUNC_2 (VAR_1, FUNC_0 (VAR_2));
  VAR_1->length--;
  VAR_4 = ((void*)0);
  for (VAR_3 = VAR_1->head;
       VAR_3 != ((void*)0);
       VAR_4 = VAR_3, VAR_3 = VAR_3->next)
    {
      if (VAR_3->expr == VAR_2)
 {
   if (VAR_4 == ((void*)0))
     VAR_1->head = VAR_3->next;
   else
     VAR_4->next= VAR_3->next;

   if (VAR_3 == VAR_1->tail)
     VAR_1->tail = VAR_4;
   FUNC_1 (VAR_0, VAR_3);
   return;
 }
    }
}
