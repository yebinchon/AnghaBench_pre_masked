
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lruhash {size_t size; int lock; scalar_t__ space_used; scalar_t__ num; int * lru_end; int * lru_start; int * array; int markdelfunc; int deldatafunc; int delkeyfunc; } ;


 int FUNC_0 (struct lruhash*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct lruhash* VAR_0)
{
 size_t VAR_1;
 if(!VAR_0)
  return;
 FUNC_1(FUNC_3(VAR_0->delkeyfunc));
 FUNC_1(FUNC_2(VAR_0->deldatafunc));
 FUNC_1(FUNC_4(VAR_0->markdelfunc));

 FUNC_5(&VAR_0->lock);
 for(VAR_1=0; VAR_1<VAR_0->size; VAR_1++) {
  FUNC_0(VAR_0, &VAR_0->array[VAR_1]);
 }
 VAR_0->lru_start = ((void*)0);
 VAR_0->lru_end = ((void*)0);
 VAR_0->num = 0;
 VAR_0->space_used = 0;
 FUNC_6(&VAR_0->lock);
}
