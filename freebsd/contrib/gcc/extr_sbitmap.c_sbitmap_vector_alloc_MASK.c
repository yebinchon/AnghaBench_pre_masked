
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
 TYPE_1__** FUNC_1 (unsigned int) ;

sbitmap *
FUNC_2 (unsigned int VAR_0, unsigned int VAR_1)
{
  unsigned int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
  sbitmap *VAR_9;

  VAR_6 = FUNC_0 (VAR_1);
  VAR_3 = VAR_6 * sizeof (SBITMAP_ELT_TYPE);
  VAR_5 = (sizeof (struct simple_bitmap_def)
        + VAR_3 - sizeof (SBITMAP_ELT_TYPE));
  VAR_8 = VAR_0 * sizeof (sbitmap *);






  {

    struct { char x; SBITMAP_ELT_TYPE y; } VAR_10;
    int VAR_11 = (char *) & VAR_10.y - & VAR_10.x;
    VAR_8 = (VAR_8 + VAR_11 - 1) & ~ (VAR_11 - 1);
  }

  VAR_7 = VAR_8 + (VAR_0 * VAR_5);
  VAR_9 = FUNC_1 (VAR_7);

  for (VAR_2 = 0, VAR_4 = VAR_8; VAR_2 < VAR_0; VAR_2++, VAR_4 += VAR_5)
    {
      sbitmap VAR_12 = (sbitmap) ((char *) VAR_9 + VAR_4);

      VAR_9[VAR_2] = VAR_12;
      VAR_12->n_bits = VAR_1;
      VAR_12->size = VAR_6;
      VAR_12->bytes = VAR_3;
    }

  return VAR_9;
}
