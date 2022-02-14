
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slabhash {size_t size; TYPE_1__** array; } ;
struct TYPE_2__ {int lock; scalar_t__ num; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

size_t FUNC_2(struct slabhash* VAR_0)
{
 size_t VAR_1, VAR_2 = 0;

 for(VAR_1=0; VAR_1<VAR_0->size; VAR_1++) {
  FUNC_0(&VAR_0->array[VAR_1]->lock);
  VAR_2 += VAR_0->array[VAR_1]->num;
  FUNC_1(&VAR_0->array[VAR_1]->lock);
 }
 return VAR_2;
}
