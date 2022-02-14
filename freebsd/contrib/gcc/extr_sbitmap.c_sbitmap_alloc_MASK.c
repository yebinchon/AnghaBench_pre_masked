
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct simple_bitmap_def {int dummy; } ;
typedef TYPE_1__* sbitmap ;
struct TYPE_4__ {unsigned int n_bits; unsigned int size; unsigned int bytes; } ;
typedef int SBITMAP_ELT_TYPE ;


 unsigned int FUNC_0 (unsigned int) ;
 TYPE_1__* FUNC_1 (unsigned int) ;

sbitmap
FUNC_2 (unsigned int VAR_0)
{
  unsigned int VAR_1, VAR_2, VAR_3;
  sbitmap VAR_4;

  VAR_2 = FUNC_0 (VAR_0);
  VAR_1 = VAR_2 * sizeof (SBITMAP_ELT_TYPE);
  VAR_3 = (sizeof (struct simple_bitmap_def)
  + VAR_1 - sizeof (SBITMAP_ELT_TYPE));
  VAR_4 = FUNC_1 (VAR_3);
  VAR_4->n_bits = VAR_0;
  VAR_4->size = VAR_2;
  VAR_4->bytes = VAR_1;
  return VAR_4;
}
