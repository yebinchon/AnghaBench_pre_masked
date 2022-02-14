
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int word_num; unsigned int bit_num; unsigned int size; unsigned int* ptr; unsigned int word; } ;
typedef TYPE_1__ sbitmap_iterator ;
typedef TYPE_2__* sbitmap ;
struct TYPE_6__ {unsigned int size; unsigned int* elms; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void
FUNC_0 (sbitmap_iterator *VAR_1, sbitmap VAR_2, unsigned int VAR_3)
{
  VAR_1->word_num = VAR_3 / (unsigned int) VAR_0;
  VAR_1->bit_num = VAR_3;
  VAR_1->size = VAR_2->size;
  VAR_1->ptr = VAR_2->elms;

  if (VAR_1->word_num >= VAR_1->size)
    VAR_1->word = 0;
  else
    VAR_1->word = (VAR_1->ptr[VAR_1->word_num]
        >> (VAR_1->bit_num % (unsigned int) VAR_0));
}
