
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int vs_alloc; int vs_space; int vs_dspace; } ;
struct TYPE_8__ {int vdev_deflate_ratio; scalar_t__ vdev_ms_count; struct TYPE_8__* vdev_parent; int vdev_stat_lock; TYPE_1__ vdev_stat; scalar_t__ vdev_isl2cache; struct TYPE_8__* vdev_top; TYPE_4__* vdev_mg; TYPE_3__* vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
struct TYPE_9__ {TYPE_2__* spa_root_vdev; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_10__ {int * mg_class; } ;
typedef TYPE_4__ metaslab_group_t ;
typedef int metaslab_class_t ;
typedef int int64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_3__*) ;

void
FUNC_5(vdev_t *VAR_2, int64_t VAR_3, int64_t VAR_4,
    int64_t VAR_5)
{
 int64_t VAR_6 = VAR_5;
 spa_t *VAR_7 = VAR_2->vdev_spa;
 vdev_t *VAR_8 = VAR_7->spa_root_vdev;
 metaslab_group_t *VAR_9 = VAR_2->vdev_mg;
 metaslab_class_t *VAR_10 = VAR_9 ? VAR_9->mg_class : ((void*)0);

 FUNC_0(VAR_2 == VAR_2->vdev_top);







 FUNC_0((VAR_6 & (VAR_1-1)) == 0);
 FUNC_0(VAR_2->vdev_deflate_ratio != 0 || VAR_2->vdev_isl2cache);
 VAR_6 = (VAR_6 >> VAR_0) *
     VAR_2->vdev_deflate_ratio;

 FUNC_2(&VAR_2->vdev_stat_lock);
 VAR_2->vdev_stat.vs_alloc += VAR_3;
 VAR_2->vdev_stat.vs_space += VAR_5;
 VAR_2->vdev_stat.vs_dspace += VAR_6;
 FUNC_3(&VAR_2->vdev_stat_lock);

 if (VAR_10 == FUNC_4(VAR_7)) {
  FUNC_2(&VAR_8->vdev_stat_lock);
  VAR_8->vdev_stat.vs_alloc += VAR_3;
  VAR_8->vdev_stat.vs_space += VAR_5;
  VAR_8->vdev_stat.vs_dspace += VAR_6;
  FUNC_3(&VAR_8->vdev_stat_lock);
 }

 if (VAR_10 != ((void*)0)) {
  FUNC_0(VAR_8 == VAR_2->vdev_parent);
  FUNC_0(VAR_2->vdev_ms_count != 0);

  FUNC_1(VAR_10,
      VAR_3, VAR_4, VAR_5, VAR_6);
 }
}
