
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ indx; int* bits; struct TYPE_13__* next; } ;
typedef TYPE_2__ bitmap_element ;
typedef TYPE_3__* bitmap ;
struct TYPE_14__ {TYPE_1__* current; int indx; TYPE_2__* first; } ;
struct TYPE_12__ {int indx; } ;
typedef int BITMAP_WORD ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,TYPE_2__*,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int*,int) ;

void
FUNC_5 (bitmap VAR_1, bitmap VAR_2)
{
  bitmap_element *VAR_3 = VAR_1->first;
  bitmap_element *VAR_4 = VAR_2->first;
  bitmap_element *VAR_5 = ((void*)0);

  if (VAR_1 == VAR_2)
    {
      FUNC_0 (VAR_1);
      return;
    }

  while (VAR_4)
    {
      if (!VAR_3 || VAR_4->indx < VAR_3->indx)
 {

   bitmap_element *VAR_6 = FUNC_2 (VAR_1, VAR_5, VAR_4->indx);
   FUNC_4 (VAR_6->bits, VAR_4->bits, sizeof (VAR_6->bits));
   VAR_5 = VAR_6;
   VAR_4 = VAR_4->next;
 }
      else if (VAR_3->indx < VAR_4->indx)
 {
   VAR_5 = VAR_3;
   VAR_3 = VAR_3->next;
 }
      else
 {

   unsigned VAR_7;
   BITMAP_WORD VAR_8 = 0;
   bitmap_element *VAR_9 = VAR_3->next;

   for (VAR_7 = VAR_0; VAR_7--;)
     {
       BITMAP_WORD VAR_10 = VAR_3->bits[VAR_7] ^ VAR_4->bits[VAR_7];

       VAR_8 |= VAR_10;
       VAR_3->bits[VAR_7] = VAR_10;
     }
   VAR_4 = VAR_4->next;
   if (VAR_8)
     VAR_5 = VAR_3;
   else
     FUNC_1 (VAR_1, VAR_3);
   VAR_3 = VAR_9;
 }
    }
  FUNC_3 (!VAR_1->current == !VAR_1->first);
  if (VAR_1->current)
    VAR_1->indx = VAR_1->current->indx;
}
