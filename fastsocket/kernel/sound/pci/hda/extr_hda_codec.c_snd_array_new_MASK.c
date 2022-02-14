
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_array {int elem_size; int used; int alloced; int alloc_align; void* list; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (struct snd_array*,int ) ;

void *FUNC_3(struct snd_array *VAR_2)
{
 if (FUNC_1(!VAR_2->elem_size))
  return ((void*)0);
 if (VAR_2->used >= VAR_2->alloced) {
  int VAR_3 = VAR_2->alloced + VAR_2->alloc_align;
  int VAR_4 = (VAR_3 + 1) * VAR_2->elem_size;
  void *VAR_5;
  if (FUNC_1(VAR_3 >= 4096))
   return ((void*)0);
  VAR_5 = FUNC_0(VAR_2->list, VAR_4, VAR_0 | VAR_1);
  if (!VAR_5)
   return ((void*)0);
  VAR_2->list = VAR_5;
  VAR_2->alloced = VAR_3;
 }
 return FUNC_2(VAR_2, VAR_2->used++);
}
