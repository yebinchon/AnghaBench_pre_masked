
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {unsigned int indx; struct TYPE_9__* prev; struct TYPE_9__* next; } ;
typedef TYPE_1__ bitmap_element ;
typedef TYPE_2__* bitmap ;
struct TYPE_10__ {unsigned int indx; TYPE_1__* current; TYPE_1__* first; } ;


 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static bitmap_element *
FUNC_2 (bitmap VAR_0, bitmap_element *VAR_1, unsigned int VAR_2)
{
  bitmap_element *VAR_3 = FUNC_0 (VAR_0);
  VAR_3->indx = VAR_2;

  if (!VAR_1)
    {
      if (!VAR_0->current)
 {
   VAR_0->current = VAR_3;
   VAR_0->indx = VAR_2;
 }
      VAR_3->next = VAR_0->first;
      if (VAR_3->next)
 VAR_3->next->prev = VAR_3;
      VAR_0->first = VAR_3;
      VAR_3->prev = ((void*)0);
    }
  else
    {
      FUNC_1 (VAR_0->current);
      VAR_3->next = VAR_1->next;
      if (VAR_3->next)
 VAR_3->next->prev = VAR_3;
      VAR_1->next = VAR_3;
      VAR_3->prev = VAR_1;
    }
  return VAR_3;
}
