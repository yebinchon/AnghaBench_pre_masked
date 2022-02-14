
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


 unsigned int VAR_0 ;

__attribute__((used)) static inline bitmap_element *
FUNC_0 (bitmap VAR_1, unsigned int VAR_2)
{
  bitmap_element *VAR_3;
  unsigned int VAR_4 = VAR_2 / VAR_0;

  if (VAR_1->current == 0
      || VAR_1->indx == VAR_4)
    return VAR_1->current;

  if (VAR_1->indx < VAR_4)


    for (VAR_3 = VAR_1->current;
  VAR_3->next != 0 && VAR_3->indx < VAR_4;
  VAR_3 = VAR_3->next)
      ;

  else if (VAR_1->indx / 2 < VAR_4)


    for (VAR_3 = VAR_1->current;
  VAR_3->prev != 0 && VAR_3->indx > VAR_4;
  VAR_3 = VAR_3->prev)
      ;

  else


    for (VAR_3 = VAR_1->first;
  VAR_3->next != 0 && VAR_3->indx < VAR_4;
  VAR_3 = VAR_3->next)
      ;



  VAR_1->current = VAR_3;
  VAR_1->indx = VAR_3->indx;
  if (VAR_3 != 0 && VAR_3->indx != VAR_4)
    VAR_3 = 0;

  return VAR_3;
}
