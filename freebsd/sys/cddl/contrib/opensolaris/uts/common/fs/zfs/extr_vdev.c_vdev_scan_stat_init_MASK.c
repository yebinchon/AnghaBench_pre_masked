
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ vs_scan_processed; } ;
struct TYPE_4__ {int vdev_children; int vdev_stat_lock; struct TYPE_4__** vdev_child; TYPE_2__ vdev_stat; } ;
typedef TYPE_1__ vdev_t ;
typedef TYPE_2__ vdev_stat_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(vdev_t *VAR_0)
{
 vdev_stat_t *VAR_1 = &VAR_0->vdev_stat;

 for (int VAR_2 = 0; VAR_2 < VAR_0->vdev_children; VAR_2++)
  FUNC_2(VAR_0->vdev_child[VAR_2]);

 FUNC_0(&VAR_0->vdev_stat_lock);
 VAR_1->vs_scan_processed = 0;
 FUNC_1(&VAR_0->vdev_stat_lock);
}
