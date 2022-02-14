
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct simple_bitmap_def {int dummy; } ;
typedef TYPE_1__* sbitmap ;
struct TYPE_6__ {unsigned int bytes; unsigned int n_bits; unsigned int* elms; int size; } ;
typedef unsigned int SBITMAP_ELT_TYPE ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int*,int,unsigned int) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,unsigned int) ;

sbitmap
FUNC_3 (sbitmap VAR_1, unsigned int VAR_2, int VAR_3)
{
  unsigned int VAR_4, VAR_5, VAR_6;
  unsigned int VAR_7;

  VAR_5 = FUNC_0 (VAR_2);
  VAR_4 = VAR_5 * sizeof (SBITMAP_ELT_TYPE);
  if (VAR_4 > VAR_1->bytes)
    {
      VAR_6 = (sizeof (struct simple_bitmap_def)
     + VAR_4 - sizeof (SBITMAP_ELT_TYPE));
      VAR_1 = FUNC_2 (VAR_1, VAR_6);
    }

  if (VAR_2 > VAR_1->n_bits)
    {
      if (VAR_3)
 {
   FUNC_1 (VAR_1->elms + VAR_1->size, -1, VAR_4 - VAR_1->bytes);


   VAR_7 = VAR_1->n_bits % VAR_0;
   if (VAR_7)
     VAR_1->elms[VAR_1->size - 1]
       |= ~((SBITMAP_ELT_TYPE)-1 >> (VAR_0 - VAR_7));


   VAR_7 = VAR_2 % VAR_0;
   if (VAR_7)
     VAR_1->elms[VAR_5 - 1]
       &= (SBITMAP_ELT_TYPE)-1 >> (VAR_0 - VAR_7);
 }
      else
 FUNC_1 (VAR_1->elms + VAR_1->size, 0, VAR_4 - VAR_1->bytes);
    }
  else if (VAR_2 < VAR_1->n_bits)
    {

      VAR_7 = VAR_2 % VAR_0;
      if (VAR_7)
 VAR_1->elms[VAR_5 - 1]
   &= (SBITMAP_ELT_TYPE)-1 >> (VAR_0 - VAR_7);
    }

  VAR_1->n_bits = VAR_2;
  VAR_1->size = VAR_5;
  VAR_1->bytes = VAR_4;
  return VAR_1;
}
