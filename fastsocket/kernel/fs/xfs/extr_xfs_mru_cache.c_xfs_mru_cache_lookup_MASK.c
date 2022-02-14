
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lock; int store; scalar_t__ lists; } ;
typedef TYPE_1__ xfs_mru_cache_t ;
struct TYPE_8__ {void* value; int list_node; } ;
typedef TYPE_2__ xfs_mru_cache_elem_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 TYPE_2__* FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void *
FUNC_7(
 xfs_mru_cache_t *VAR_1,
 unsigned long VAR_2)
{
 xfs_mru_cache_elem_t *VAR_3;

 FUNC_0(VAR_1 && VAR_1->lists);
 if (!VAR_1 || !VAR_1->lists)
  return ((void*)0);

 FUNC_5(&VAR_1->lock);
 VAR_3 = FUNC_4(&VAR_1->store, VAR_2);
 if (VAR_3) {
  FUNC_3(&VAR_3->list_node);
  FUNC_2(VAR_1, VAR_3);
  FUNC_1(VAR_0);
 } else
  FUNC_6(&VAR_1->lock);

 return VAR_3 ? VAR_3->value : ((void*)0);
}
