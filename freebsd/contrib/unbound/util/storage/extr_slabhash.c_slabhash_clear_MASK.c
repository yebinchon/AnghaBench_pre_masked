
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabhash {size_t size; int * array; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct slabhash* VAR_0)
{
 size_t VAR_1;
 if(!VAR_0)
  return;
 for(VAR_1=0; VAR_1<VAR_0->size; VAR_1++)
  FUNC_0(VAR_0->array[VAR_1]);
}
