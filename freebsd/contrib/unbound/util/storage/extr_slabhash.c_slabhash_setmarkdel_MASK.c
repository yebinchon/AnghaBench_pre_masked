
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabhash {size_t size; int * array; } ;
typedef int lruhash_markdelfunc_type ;


 int FUNC_0 (int ,int ) ;

void FUNC_1(struct slabhash* VAR_0, lruhash_markdelfunc_type VAR_1)
{
 size_t VAR_2;
 for(VAR_2=0; VAR_2<VAR_0->size; VAR_2++) {
  FUNC_0(VAR_0->array[VAR_2], VAR_1);
 }
}
