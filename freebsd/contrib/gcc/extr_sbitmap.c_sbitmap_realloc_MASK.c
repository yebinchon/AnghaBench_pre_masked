
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct simple_bitmap_def {int dummy; } ;
typedef TYPE_1__* sbitmap ;
struct TYPE_5__ {unsigned int bytes; unsigned int n_bits; unsigned int size; } ;
typedef int SBITMAP_ELT_TYPE ;


 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,unsigned int) ;

sbitmap
FUNC_2 (sbitmap VAR_0, unsigned int VAR_1)
{
  unsigned int VAR_2, VAR_3, VAR_4;
  sbitmap VAR_5;

  VAR_3 = FUNC_0 (VAR_1);
  VAR_2 = VAR_3 * sizeof (SBITMAP_ELT_TYPE);
  VAR_4 = (sizeof (struct simple_bitmap_def)
  + VAR_2 - sizeof (SBITMAP_ELT_TYPE));

  if (VAR_0->bytes >= VAR_2)
    {
      VAR_0->n_bits = VAR_1;
      return VAR_0;
    }

  VAR_5 = (sbitmap) FUNC_1 (VAR_0, VAR_4);
  VAR_5->n_bits = VAR_1;
  VAR_5->size = VAR_3;
  VAR_5->bytes = VAR_2;
  return VAR_5;
}
