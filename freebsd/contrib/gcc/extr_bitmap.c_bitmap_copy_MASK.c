
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* next; struct TYPE_8__* prev; int indx; int bits; } ;
typedef TYPE_1__ bitmap_element ;
typedef TYPE_2__* bitmap ;
struct TYPE_9__ {int indx; TYPE_1__* current; TYPE_1__* first; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int) ;

void
FUNC_3 (bitmap VAR_0, bitmap VAR_1)
{
  bitmap_element *VAR_2, *VAR_3 = 0;

  FUNC_0 (VAR_0);


  for (VAR_2 = VAR_1->first; VAR_2; VAR_2 = VAR_2->next)
    {
      bitmap_element *VAR_4 = FUNC_1 (VAR_0);

      VAR_4->indx = VAR_2->indx;
      FUNC_2 (VAR_4->bits, VAR_2->bits, sizeof (VAR_4->bits));



      if (VAR_3 == 0)
 {
   VAR_0->first = VAR_0->current = VAR_4;
   VAR_0->indx = VAR_2->indx;
   VAR_4->next = VAR_4->prev = 0;
 }
      else
 {
   VAR_4->prev = VAR_3;
   VAR_4->next = 0;
   VAR_3->next = VAR_4;
 }

      VAR_3 = VAR_4;
    }
}
