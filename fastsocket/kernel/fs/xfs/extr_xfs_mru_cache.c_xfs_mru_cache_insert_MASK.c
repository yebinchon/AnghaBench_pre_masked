
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int lock; int store; scalar_t__ lists; } ;
typedef TYPE_1__ xfs_mru_cache_t ;
struct TYPE_10__ {unsigned long key; void* value; int list_node; } ;
typedef TYPE_2__ xfs_mru_cache_elem_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,unsigned long,TYPE_2__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;

int
FUNC_10(
 xfs_mru_cache_t *VAR_5,
 unsigned long VAR_6,
 void *VAR_7)
{
 xfs_mru_cache_elem_t *VAR_8;

 FUNC_0(VAR_5 && VAR_5->lists);
 if (!VAR_5 || !VAR_5->lists)
  return VAR_0;

 VAR_8 = FUNC_4(VAR_4, VAR_3);
 if (!VAR_8)
  return VAR_1;

 if (FUNC_6(VAR_2)) {
  FUNC_3(VAR_4, VAR_8);
  return VAR_1;
 }

 FUNC_1(&VAR_8->list_node);
 VAR_8->key = VAR_6;
 VAR_8->value = VAR_7;

 FUNC_8(&VAR_5->lock);

 FUNC_5(&VAR_5->store, VAR_6, VAR_8);
 FUNC_7();
 FUNC_2(VAR_5, VAR_8);

 FUNC_9(&VAR_5->lock);

 return 0;
}
