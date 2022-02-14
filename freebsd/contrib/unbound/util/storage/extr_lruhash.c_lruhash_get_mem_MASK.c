
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lruhash_bin {int dummy; } ;
struct lruhash {int space_used; size_t size; int lock; TYPE_1__* array; } ;
struct TYPE_2__ {int lock; } ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

size_t
FUNC_3(struct lruhash* VAR_0)
{
 size_t VAR_1;
 FUNC_1(&VAR_0->lock);
 VAR_1 = sizeof(struct lruhash) + VAR_0->space_used;
 if(VAR_0->size != 0)
  VAR_1 += (VAR_0->size)*(sizeof(struct lruhash_bin) +
   FUNC_0(&VAR_0->array[0].lock));

 FUNC_2(&VAR_0->lock);
 VAR_1 += FUNC_0(&VAR_0->lock);
 return VAR_1;
}
