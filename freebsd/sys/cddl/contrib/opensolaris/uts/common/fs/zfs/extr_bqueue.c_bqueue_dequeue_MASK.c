
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {scalar_t__ bq_size; int bq_add_cv; int bq_lock; int bq_list; int bq_pop_cv; } ;
typedef TYPE_1__ bqueue_t ;
struct TYPE_6__ {scalar_t__ bqn_size; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (TYPE_1__*,void*) ;

void *
FUNC_6(bqueue_t *VAR_0)
{
 void *VAR_1;
 uint64_t VAR_2;
 FUNC_3(&VAR_0->bq_lock);
 while (VAR_0->bq_size == 0) {
  FUNC_1(&VAR_0->bq_pop_cv, &VAR_0->bq_lock);
 }
 VAR_1 = FUNC_2(&VAR_0->bq_list);
 VAR_2 = FUNC_5(VAR_0, VAR_1)->bqn_size;
 VAR_0->bq_size -= VAR_2;
 FUNC_4(&VAR_0->bq_lock);
 FUNC_0(&VAR_0->bq_add_cv);
 return (VAR_1);
}
