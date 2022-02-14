
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sbitmap ;
struct TYPE_3__ {unsigned int* elms; unsigned int n_bits; int size; int bytes; } ;
typedef unsigned int SBITMAP_ELT_TYPE ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int*,int,int ) ;

void
FUNC_1 (sbitmap VAR_1)
{
  unsigned int VAR_2;

  FUNC_0 (VAR_1->elms, -1, VAR_1->bytes);

  VAR_2 = VAR_1->n_bits % VAR_0;
  if (VAR_2)
    VAR_1->elms[VAR_1->size - 1]
      = (SBITMAP_ELT_TYPE)-1 >> (VAR_0 - VAR_2);
}
