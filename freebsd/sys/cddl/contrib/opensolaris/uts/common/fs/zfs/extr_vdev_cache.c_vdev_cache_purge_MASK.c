
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int vc_lock; int vc_offset_tree; } ;
struct TYPE_5__ {TYPE_2__ vdev_cache; } ;
typedef TYPE_1__ vdev_t ;
typedef TYPE_2__ vdev_cache_t ;
typedef int vdev_cache_entry_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;

void
FUNC_4(vdev_t *VAR_0)
{
 vdev_cache_t *VAR_1 = &VAR_0->vdev_cache;
 vdev_cache_entry_t *VAR_2;

 FUNC_1(&VAR_1->vc_lock);
 while ((VAR_2 = FUNC_0(&VAR_1->vc_offset_tree)) != ((void*)0))
  FUNC_3(VAR_1, VAR_2);
 FUNC_2(&VAR_1->vc_lock);
}
