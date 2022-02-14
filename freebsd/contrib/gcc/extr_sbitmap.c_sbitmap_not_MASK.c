
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int* sbitmap_ptr ;
typedef TYPE_1__* sbitmap ;
struct TYPE_4__ {unsigned int size; unsigned int* elms; unsigned int n_bits; } ;
typedef unsigned int SBITMAP_ELT_TYPE ;


 unsigned int VAR_0 ;

void
FUNC_0 (sbitmap VAR_1, sbitmap VAR_2)
{
  unsigned int VAR_3, VAR_4 = VAR_1->size;
  sbitmap_ptr VAR_5 = VAR_1->elms;
  sbitmap_ptr VAR_6 = VAR_2->elms;
  unsigned int VAR_7;

  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
    *VAR_5++ = ~*VAR_6++;


  VAR_7 = VAR_2->n_bits % VAR_0;
  if (VAR_7)
    VAR_1->elms[VAR_4-1] = VAR_1->elms[VAR_4-1]
      & ((SBITMAP_ELT_TYPE)-1 >> (VAR_0 - VAR_7));
}
