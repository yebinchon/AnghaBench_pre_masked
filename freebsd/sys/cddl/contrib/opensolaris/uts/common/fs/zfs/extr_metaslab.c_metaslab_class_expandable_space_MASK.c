
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int vdev_children; unsigned long long vdev_ms_shift; scalar_t__ vdev_max_asize; scalar_t__ vdev_asize; TYPE_2__* vdev_mg; struct TYPE_8__** vdev_child; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_9__ {TYPE_3__* mg_class; } ;
typedef TYPE_2__ metaslab_group_t ;
struct TYPE_10__ {TYPE_5__* mc_spa; } ;
typedef TYPE_3__ metaslab_class_t ;
struct TYPE_11__ {scalar_t__ spa_bootsize; TYPE_1__* spa_root_vdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,unsigned long long) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_5__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;

uint64_t
FUNC_4(metaslab_class_t *VAR_3)
{
 vdev_t *VAR_4 = VAR_3->mc_spa->spa_root_vdev;
 uint64_t VAR_5 = 0;

 FUNC_1(VAR_3->mc_spa, VAR_2, VAR_0, VAR_1);
 for (int VAR_6 = 0; VAR_6 < VAR_4->vdev_children; VAR_6++) {
  uint64_t VAR_7;
  vdev_t *VAR_8 = VAR_4->vdev_child[VAR_6];
  metaslab_group_t *VAR_9 = VAR_8->vdev_mg;

  if (!FUNC_3(VAR_8) || VAR_8->vdev_ms_shift == 0 ||
      VAR_9->mg_class != VAR_3) {
   continue;
  }







  VAR_7 = VAR_8->vdev_max_asize - VAR_8->vdev_asize;
  if (VAR_7 > VAR_3->mc_spa->spa_bootsize) {
   VAR_7 -= VAR_3->mc_spa->spa_bootsize;
  }
  VAR_5 += FUNC_0(VAR_7, 1ULL << VAR_8->vdev_ms_shift);
 }
 FUNC_2(VAR_3->mc_spa, VAR_2, VAR_0);
 return (VAR_5);
}
