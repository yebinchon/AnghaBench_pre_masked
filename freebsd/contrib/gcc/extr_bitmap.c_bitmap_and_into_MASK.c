
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ indx; int* bits; struct TYPE_11__* next; } ;
typedef TYPE_2__ bitmap_element ;
typedef TYPE_3__* bitmap ;
struct TYPE_12__ {scalar_t__ indx; TYPE_1__* current; TYPE_2__* first; } ;
struct TYPE_10__ {scalar_t__ indx; } ;
typedef int BITMAP_WORD ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (int) ;

void
FUNC_3 (bitmap VAR_1, bitmap VAR_2)
{
  bitmap_element *VAR_3 = VAR_1->first;
  bitmap_element *VAR_4 = VAR_2->first;
  bitmap_element *VAR_5;

  if (VAR_1 == VAR_2)
    return;

  while (VAR_3 && VAR_4)
    {
      if (VAR_3->indx < VAR_4->indx)
 {
   VAR_5 = VAR_3->next;
   FUNC_0 (VAR_1, VAR_3);
   VAR_3 = VAR_5;
 }
      else if (VAR_4->indx < VAR_3->indx)
 VAR_4 = VAR_4->next;
      else
 {

   unsigned VAR_6;
   BITMAP_WORD VAR_7 = 0;

   for (VAR_6 = VAR_0; VAR_6--;)
     {
       BITMAP_WORD VAR_8 = VAR_3->bits[VAR_6] & VAR_4->bits[VAR_6];

       VAR_3->bits[VAR_6] = VAR_8;
       VAR_7 |= VAR_8;
     }
   VAR_5 = VAR_3->next;
   if (!VAR_7)
     FUNC_0 (VAR_1, VAR_3);
   VAR_3 = VAR_5;
   VAR_4 = VAR_4->next;
 }
    }
  FUNC_1 (VAR_1, VAR_3);
  FUNC_2 (!VAR_1->current == !VAR_1->first);
  FUNC_2 (!VAR_1->current || VAR_1->indx == VAR_1->current->indx);
}
