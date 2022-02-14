
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ indx; struct TYPE_7__* prev; struct TYPE_7__* next; } ;
typedef TYPE_1__ bitmap_element ;
typedef TYPE_2__* bitmap ;
struct TYPE_8__ {scalar_t__ indx; TYPE_1__* current; TYPE_1__* first; } ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static inline void
FUNC_1 (bitmap VAR_0, bitmap_element *VAR_1)
{
  bitmap_element *VAR_2 = VAR_1->next;
  bitmap_element *VAR_3 = VAR_1->prev;

  if (VAR_3)
    VAR_3->next = VAR_2;

  if (VAR_2)
    VAR_2->prev = VAR_3;

  if (VAR_0->first == VAR_1)
    VAR_0->first = VAR_2;



  if (VAR_0->current == VAR_1)
    {
      VAR_0->current = VAR_2 != 0 ? VAR_2 : VAR_3;
      if (VAR_0->current)
 VAR_0->indx = VAR_0->current->indx;
      else
 VAR_0->indx = 0;
    }
  FUNC_0 (VAR_0, VAR_1);
}
