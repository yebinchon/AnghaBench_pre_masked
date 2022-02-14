
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* elements; } ;
typedef TYPE_1__ bitmap_obstack ;
struct TYPE_8__ {scalar_t__ indx; struct TYPE_8__* prev; int * next; } ;
typedef TYPE_2__ bitmap_element ;
typedef TYPE_3__* bitmap ;
struct TYPE_9__ {scalar_t__ indx; TYPE_2__* current; int * first; TYPE_1__* obstack; } ;


 TYPE_2__* VAR_0 ;

void
FUNC_0 (bitmap VAR_1, bitmap_element *VAR_2)
{
  bitmap_element *VAR_3;
  bitmap_obstack *VAR_4 = VAR_1->obstack;

  if (!VAR_2) return;

  VAR_3 = VAR_2->prev;
  if (VAR_3)
    {
      VAR_3->next = ((void*)0);
      if (VAR_1->current->indx > VAR_3->indx)
 {
   VAR_1->current = VAR_3;
   VAR_1->indx = VAR_3->indx;
 }
    }
  else
    {
      VAR_1->first = ((void*)0);
      VAR_1->current = ((void*)0);
      VAR_1->indx = 0;
    }


  if (VAR_4)
    {
      VAR_2->prev = VAR_4->elements;
      VAR_4->elements = VAR_2;
    }
  else
    {
      VAR_2->prev = VAR_0;
      VAR_0 = VAR_2;
    }
}
