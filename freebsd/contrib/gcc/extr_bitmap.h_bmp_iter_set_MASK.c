
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int bits; size_t word_no; TYPE_1__* elt1; } ;
typedef TYPE_2__ bitmap_iterator ;
struct TYPE_4__ {int* bits; unsigned int indx; struct TYPE_4__* next; } ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static inline bool
FUNC_0 (bitmap_iterator *VAR_3, unsigned *VAR_4)
{

  if (VAR_3->bits)
    {
    next_bit:
      while (!(VAR_3->bits & 1))
 {
   VAR_3->bits >>= 1;
   *VAR_4 += 1;
 }
      return 1;
    }




  *VAR_4 = ((*VAR_4 + VAR_2 - 1)
      / VAR_2 * VAR_2);
  VAR_3->word_no++;

  while (1)
    {

      while (VAR_3->word_no != VAR_1)
 {
   VAR_3->bits = VAR_3->elt1->bits[VAR_3->word_no];
   if (VAR_3->bits)
     goto next_bit;
   *VAR_4 += VAR_2;
   VAR_3->word_no++;
 }


      VAR_3->elt1 = VAR_3->elt1->next;
      if (!VAR_3->elt1)
 return 0;
      *VAR_4 = VAR_3->elt1->indx * VAR_0;
      VAR_3->word_no = 0;
    }
}
