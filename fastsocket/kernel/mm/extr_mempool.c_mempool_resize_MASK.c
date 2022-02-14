
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int min_nr; int curr_nr; void** elements; int lock; int pool_data; int (* free ) (void*,int ) ;void* (* alloc ) (int ,int ) ;} ;
typedef TYPE_1__ mempool_t ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,void*) ;
 int FUNC_2 (void**) ;
 void** FUNC_3 (int,int ) ;
 int FUNC_4 (void**,void**,int) ;
 void* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (void*,int ) ;
 void* FUNC_9 (int ,int ) ;
 int FUNC_10 (void*,int ) ;
 scalar_t__ FUNC_11 (int) ;

int FUNC_12(mempool_t *VAR_1, int VAR_2, gfp_t VAR_3)
{
 void *VAR_4;
 void **VAR_5;
 unsigned long VAR_6;

 FUNC_0(VAR_2 <= 0);

 FUNC_6(&VAR_1->lock, VAR_6);
 if (VAR_2 <= VAR_1->min_nr) {
  while (VAR_2 < VAR_1->curr_nr) {
   VAR_4 = FUNC_5(VAR_1);
   FUNC_7(&VAR_1->lock, VAR_6);
   VAR_1->free(VAR_4, VAR_1->pool_data);
   FUNC_6(&VAR_1->lock, VAR_6);
  }
  VAR_1->min_nr = VAR_2;
  goto out_unlock;
 }
 FUNC_7(&VAR_1->lock, VAR_6);


 VAR_5 = FUNC_3(VAR_2 * sizeof(*VAR_5), VAR_3);
 if (!VAR_5)
  return -VAR_0;

 FUNC_6(&VAR_1->lock, VAR_6);
 if (FUNC_11(VAR_2 <= VAR_1->min_nr)) {

  FUNC_7(&VAR_1->lock, VAR_6);
  FUNC_2(VAR_5);
  goto out;
 }
 FUNC_4(VAR_5, VAR_1->elements,
   VAR_1->curr_nr * sizeof(*VAR_5));
 FUNC_2(VAR_1->elements);
 VAR_1->elements = VAR_5;
 VAR_1->min_nr = VAR_2;

 while (VAR_1->curr_nr < VAR_1->min_nr) {
  FUNC_7(&VAR_1->lock, VAR_6);
  VAR_4 = VAR_1->alloc(VAR_3, VAR_1->pool_data);
  if (!VAR_4)
   goto out;
  FUNC_6(&VAR_1->lock, VAR_6);
  if (VAR_1->curr_nr < VAR_1->min_nr) {
   FUNC_1(VAR_1, VAR_4);
  } else {
   FUNC_7(&VAR_1->lock, VAR_6);
   VAR_1->free(VAR_4, VAR_1->pool_data);
   goto out;
  }
 }
out_unlock:
 FUNC_7(&VAR_1->lock, VAR_6);
out:
 return 0;
}
