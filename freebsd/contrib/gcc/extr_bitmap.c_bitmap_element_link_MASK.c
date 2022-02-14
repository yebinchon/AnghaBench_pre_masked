
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int indx; struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef TYPE_1__ bitmap_element ;
typedef TYPE_2__* bitmap ;
struct TYPE_6__ {unsigned int indx; TYPE_1__* current; TYPE_1__* first; } ;



__attribute__((used)) static inline void
FUNC_0 (bitmap VAR_0, bitmap_element *VAR_1)
{
  unsigned int VAR_2 = VAR_1->indx;
  bitmap_element *VAR_3;


  if (VAR_0->first == 0)
    {
      VAR_1->next = VAR_1->prev = 0;
      VAR_0->first = VAR_1;
    }



  else if (VAR_2 < VAR_0->indx)
    {
      for (VAR_3 = VAR_0->current;
    VAR_3->prev != 0 && VAR_3->prev->indx > VAR_2;
    VAR_3 = VAR_3->prev)
 ;

      if (VAR_3->prev)
 VAR_3->prev->next = VAR_1;
      else
 VAR_0->first = VAR_1;

      VAR_1->prev = VAR_3->prev;
      VAR_1->next = VAR_3;
      VAR_3->prev = VAR_1;
    }


  else
    {
      for (VAR_3 = VAR_0->current;
    VAR_3->next != 0 && VAR_3->next->indx < VAR_2;
    VAR_3 = VAR_3->next)
 ;

      if (VAR_3->next)
 VAR_3->next->prev = VAR_1;

      VAR_1->next = VAR_3->next;
      VAR_1->prev = VAR_3;
      VAR_3->next = VAR_1;
    }


  VAR_0->current = VAR_1;
  VAR_0->indx = VAR_2;
}
