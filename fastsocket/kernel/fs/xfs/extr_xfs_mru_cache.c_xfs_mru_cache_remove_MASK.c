
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lock; int store; scalar_t__ lists; } ;
typedef TYPE_1__ xfs_mru_cache_t ;
struct TYPE_7__ {int list_node; void* value; } ;
typedef TYPE_2__ xfs_mru_cache_elem_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

void *
FUNC_6(
 xfs_mru_cache_t *VAR_1,
 unsigned long VAR_2)
{
 xfs_mru_cache_elem_t *VAR_3;
 void *VAR_4 = ((void*)0);

 FUNC_0(VAR_1 && VAR_1->lists);
 if (!VAR_1 || !VAR_1->lists)
  return ((void*)0);

 FUNC_4(&VAR_1->lock);
 VAR_3 = FUNC_3(&VAR_1->store, VAR_2);
 if (VAR_3) {
  VAR_4 = VAR_3->value;
  FUNC_2(&VAR_3->list_node);
 }

 FUNC_5(&VAR_1->lock);

 if (VAR_3)
  FUNC_1(VAR_0, VAR_3);

 return VAR_4;
}
