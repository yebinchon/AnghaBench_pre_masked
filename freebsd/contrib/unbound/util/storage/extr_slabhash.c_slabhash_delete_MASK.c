
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabhash {size_t size; struct slabhash* array; } ;


 int FUNC_0 (struct slabhash*) ;
 int FUNC_1 (struct slabhash) ;

void FUNC_2(struct slabhash* VAR_0)
{
 if(!VAR_0)
  return;
 if(VAR_0->array) {
  size_t VAR_1;
  for(VAR_1=0; VAR_1<VAR_0->size; VAR_1++)
   FUNC_1(VAR_0->array[VAR_1]);
  FUNC_0(VAR_0->array);
 }
 FUNC_0(VAR_0);
}
