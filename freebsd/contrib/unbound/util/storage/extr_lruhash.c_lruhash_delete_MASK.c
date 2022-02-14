
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lruhash {size_t size; struct lruhash* array; int lock; } ;


 int FUNC_0 (struct lruhash*,struct lruhash*) ;
 int FUNC_1 (struct lruhash*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct lruhash* VAR_0)
{
 size_t VAR_1;
 if(!VAR_0)
  return;

 FUNC_2(&VAR_0->lock);
 for(VAR_1=0; VAR_1<VAR_0->size; VAR_1++)
  FUNC_0(VAR_0, &VAR_0->array[VAR_1]);
 FUNC_1(VAR_0->array);
 FUNC_1(VAR_0);
}
