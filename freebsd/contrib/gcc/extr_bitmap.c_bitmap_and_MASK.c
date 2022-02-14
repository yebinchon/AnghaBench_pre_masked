
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ indx; int* bits; struct TYPE_15__* next; } ;
typedef TYPE_2__ bitmap_element ;
typedef TYPE_3__* bitmap ;
struct TYPE_16__ {TYPE_1__* current; int indx; TYPE_2__* first; } ;
struct TYPE_14__ {int indx; } ;
typedef int BITMAP_WORD ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,TYPE_2__*,scalar_t__) ;
 int FUNC_3 (int) ;

void
FUNC_4 (bitmap VAR_1, bitmap VAR_2, bitmap VAR_3)
{
  bitmap_element *VAR_4 = VAR_1->first;
  bitmap_element *VAR_5 = VAR_2->first;
  bitmap_element *VAR_6 = VAR_3->first;
  bitmap_element *VAR_7 = ((void*)0);

  FUNC_3 (VAR_1 != VAR_2 && VAR_1 != VAR_3);

  if (VAR_2 == VAR_3)
    {
      FUNC_0 (VAR_1, VAR_2);
      return;
    }

  while (VAR_5 && VAR_6)
    {
      if (VAR_5->indx < VAR_6->indx)
 VAR_5 = VAR_5->next;
      else if (VAR_6->indx < VAR_5->indx)
 VAR_6 = VAR_6->next;
      else
 {

   unsigned VAR_8;
   BITMAP_WORD VAR_9 = 0;

   if (!VAR_4)
     VAR_4 = FUNC_2 (VAR_1, VAR_7, VAR_5->indx);
   else
     VAR_4->indx = VAR_5->indx;
   for (VAR_8 = VAR_0; VAR_8--;)
     {
       BITMAP_WORD VAR_10 = VAR_5->bits[VAR_8] & VAR_6->bits[VAR_8];

       VAR_4->bits[VAR_8] = VAR_10;
       VAR_9 |= VAR_10;
     }
   if (VAR_9)
     {
       VAR_7 = VAR_4;
       VAR_4 = VAR_4->next;
     }
   VAR_5 = VAR_5->next;
   VAR_6 = VAR_6->next;
 }
    }
  FUNC_1 (VAR_1, VAR_4);
  FUNC_3 (!VAR_1->current == !VAR_1->first);
  if (VAR_1->current)
    VAR_1->indx = VAR_1->current->indx;
}
