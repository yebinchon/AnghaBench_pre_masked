
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ indx; int* bits; struct TYPE_16__* next; struct TYPE_16__* prev; } ;
typedef TYPE_2__ bitmap_element ;
typedef TYPE_3__* bitmap ;
struct TYPE_17__ {scalar_t__ indx; TYPE_1__* current; TYPE_2__* first; } ;
struct TYPE_15__ {scalar_t__ indx; } ;
typedef int BITMAP_WORD ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int*,int*,int) ;

void
FUNC_7 (bitmap VAR_1, bitmap VAR_2)
{
  bitmap_element *VAR_3 = VAR_1->first;
  bitmap_element *VAR_4 = VAR_2->first;
  bitmap_element *VAR_5 = ((void*)0);
  bitmap_element *VAR_6;

  FUNC_5 (VAR_1 != VAR_2);

  if (FUNC_4 (VAR_1))
    {
      FUNC_1 (VAR_1, VAR_2);
      return;
    }
  if (FUNC_4 (VAR_2))
    {
      FUNC_0 (VAR_1);
      return;
    }

  while (VAR_3 || VAR_4)
    {
      if (!VAR_4 || (VAR_3 && VAR_3->indx < VAR_4->indx))
 {

   VAR_6 = VAR_3->next;
   VAR_5 = VAR_3->prev;
   FUNC_2 (VAR_1, VAR_3);
   VAR_3 = VAR_6;
 }
      else if (!VAR_3 || VAR_4->indx < VAR_3->indx)
 {

   VAR_6 = FUNC_3 (VAR_1, VAR_5, VAR_4->indx);
   FUNC_6 (VAR_6->bits, VAR_4->bits, sizeof (VAR_6->bits));
   VAR_5 = VAR_6;
   VAR_4 = VAR_4->next;
 }
      else
 {

   unsigned VAR_7;
   BITMAP_WORD VAR_8 = 0;

   for (VAR_7 = VAR_0; VAR_7--;)
     {
       BITMAP_WORD VAR_9 = VAR_3->bits[VAR_7] & VAR_4->bits[VAR_7];
       BITMAP_WORD VAR_10 = VAR_4->bits[VAR_7] ^ VAR_9;

       VAR_3->bits[VAR_7] = VAR_10;
       VAR_8 |= VAR_10;
     }
   VAR_6 = VAR_3->next;
   if (!VAR_8)
     FUNC_2 (VAR_1, VAR_3);
   else
     VAR_5 = VAR_3;
   VAR_3 = VAR_6;
   VAR_4 = VAR_4->next;
 }
    }
  FUNC_5 (!VAR_1->current == !VAR_1->first);
  FUNC_5 (!VAR_1->current || VAR_1->indx == VAR_1->current->indx);
  return;
}
