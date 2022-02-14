
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int word; int* ptr; size_t word_num; size_t size; int bit_num; } ;
typedef TYPE_1__ sbitmap_iterator ;


 int VAR_0 ;

__attribute__((used)) static inline bool
FUNC_0 (sbitmap_iterator *VAR_1, unsigned int *VAR_2)
{

  for (; VAR_1->word == 0; VAR_1->word = VAR_1->ptr[VAR_1->word_num])
    {
      VAR_1->word_num++;


      if (VAR_1->word_num >= VAR_1->size)
 return 0;

      VAR_1->bit_num = VAR_1->word_num * VAR_0;
    }


  for (; (VAR_1->word & 1) == 0; VAR_1->word >>= 1)
    VAR_1->bit_num++;

  *VAR_2 = VAR_1->bit_num;

  return 1;
}
