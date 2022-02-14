
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned int word_no; unsigned int bits; TYPE_6__* elt2; TYPE_6__* elt1; } ;
typedef TYPE_1__ bitmap_iterator ;
typedef TYPE_2__* bitmap ;
struct TYPE_9__ {unsigned int indx; unsigned int* bits; struct TYPE_9__* next; } ;
struct TYPE_8__ {TYPE_6__* first; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_6__ VAR_3 ;

__attribute__((used)) static inline void
FUNC_0 (bitmap_iterator *VAR_4, bitmap VAR_5, bitmap VAR_6,
    unsigned VAR_7, unsigned *VAR_8)
{
  VAR_4->elt1 = VAR_5->first;
  VAR_4->elt2 = VAR_6->first;


  while (1)
    {
      if (!VAR_4->elt1)
 {
   VAR_4->elt1 = &VAR_3;
   break;
 }

      if (VAR_4->elt1->indx >= VAR_7 / VAR_0)
 break;
      VAR_4->elt1 = VAR_4->elt1->next;
    }


  while (VAR_4->elt2 && VAR_4->elt2->indx < VAR_4->elt1->indx)
    VAR_4->elt2 = VAR_4->elt2->next;



  if (VAR_4->elt1->indx != VAR_7 / VAR_0)
    VAR_7 = VAR_4->elt1->indx * VAR_0;

  VAR_4->word_no = VAR_7 / VAR_2 % VAR_1;
  VAR_4->bits = VAR_4->elt1->bits[VAR_4->word_no];
  if (VAR_4->elt2 && VAR_4->elt1->indx == VAR_4->elt2->indx)
    VAR_4->bits &= ~VAR_4->elt2->bits[VAR_4->word_no];
  VAR_4->bits >>= VAR_7 % VAR_2;





  VAR_7 += !VAR_4->bits;

  *VAR_8 = VAR_7;
}
