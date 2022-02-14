
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned int indx; unsigned int* bits; struct TYPE_8__* next; } ;
typedef TYPE_1__ bitmap_element ;
typedef TYPE_2__* bitmap ;
struct TYPE_9__ {unsigned int indx; TYPE_1__* current; } ;
typedef unsigned int BITMAP_WORD ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,unsigned int) ;

void
FUNC_2 (bitmap VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
  unsigned int VAR_6 = VAR_4 / VAR_0;
  unsigned int VAR_7 = VAR_4 + VAR_5;
  unsigned int VAR_8 = VAR_7 - 1;
  unsigned int VAR_9 = (VAR_8) / VAR_0;
  bitmap_element *VAR_10 = FUNC_1 (VAR_3, VAR_4);




  if (!VAR_10)
    {
      if (VAR_3->current)
 {
   if (VAR_3->indx < VAR_6)
     {
       VAR_10 = VAR_3->current->next;
       if (!VAR_10)
  return;
     }
   else
     VAR_10 = VAR_3->current;
 }
      else
 return;
    }

  while (VAR_10 && (VAR_10->indx <= VAR_9))
    {
      bitmap_element * VAR_11 = VAR_10->next;
      unsigned VAR_12 = (VAR_10->indx) * VAR_0;
      unsigned VAR_13 = VAR_12 + VAR_0;


      if (VAR_12 >= VAR_4 && VAR_13 <= VAR_7)

 FUNC_0 (VAR_3, VAR_10);
      else
 {

   unsigned int VAR_14;
   BITMAP_WORD VAR_15;
   unsigned int VAR_16;
   BITMAP_WORD VAR_17;
   unsigned int VAR_18;
   bool VAR_19 = 1;

   if (VAR_12 <= VAR_4)
     {


       VAR_14 = (VAR_4 - VAR_12) / VAR_2;


       VAR_15 =
  (((BITMAP_WORD) 1) << ((VAR_4 % VAR_2))) - 1;
       VAR_15 = ~VAR_15;
     }
   else
     {

       VAR_14 = 0;
       VAR_15 = 0;
       VAR_15 = ~VAR_15;
     }

   if (VAR_13 <= VAR_7)
     {

       VAR_16 = VAR_1 - 1;
       VAR_17 = 0;
       VAR_17 = ~VAR_17;
     }
   else
     {

       VAR_16 =
  (VAR_7 - VAR_12) / VAR_2;


       VAR_17 =
  (((BITMAP_WORD) 1) << (((VAR_7) % VAR_2))) - 1;
     }


   if (VAR_14 == VAR_16)
     {
       BITMAP_WORD VAR_20 = VAR_15 & VAR_17;
       VAR_10->bits[VAR_14] &= ~VAR_20;
     }
   else
     {
       VAR_10->bits[VAR_14] &= ~VAR_15;
       for (VAR_18 = VAR_14 + 1; VAR_18 < VAR_16; VAR_18++)
  VAR_10->bits[VAR_18] = 0;
       VAR_10->bits[VAR_16] &= ~VAR_17;
     }
   for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++)
     if (VAR_10->bits[VAR_18])
       {
  VAR_19 = 0;
  break;
       }

   if (VAR_19)
     FUNC_0 (VAR_3, VAR_10);
 }
      VAR_10 = VAR_11;
    }

  if (VAR_10)
    {
      VAR_3->current = VAR_10;
      VAR_3->indx = VAR_3->current->indx;
    }
}
