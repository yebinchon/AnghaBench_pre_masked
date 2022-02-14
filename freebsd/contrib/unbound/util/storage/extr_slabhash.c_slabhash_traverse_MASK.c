
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabhash {size_t size; int * array; } ;


 int FUNC_0 (int ,int,void (*) (struct lruhash_entry*,void*),void*) ;

void FUNC_1(struct slabhash* VAR_0, int VAR_1,
 void (*VAR_2)(struct lruhash_entry*, void*), void* VAR_3)
{
 size_t VAR_4;
 for(VAR_4=0; VAR_4<VAR_0->size; VAR_4++)
  FUNC_0(VAR_0->array[VAR_4], VAR_1, VAR_2, VAR_3);
}
