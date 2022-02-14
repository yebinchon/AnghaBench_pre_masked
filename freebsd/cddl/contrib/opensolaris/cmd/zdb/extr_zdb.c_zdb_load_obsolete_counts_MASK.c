
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ vdev_id; int vdev_asize; int * vdev_obsolete_sm; TYPE_2__* vdev_spa; int * vdev_indirect_mapping; } ;
typedef TYPE_1__ vdev_t ;
typedef int vdev_indirect_mapping_t ;
typedef int uint32_t ;
typedef int space_map_t ;
struct TYPE_8__ {scalar_t__ scip_vdev; scalar_t__ scip_prev_obsolete_sm_object; } ;
struct TYPE_7__ {int spa_meta_objset; TYPE_3__ spa_condensing_indirect_phys; } ;
typedef TYPE_2__ spa_t ;
typedef TYPE_3__ spa_condensing_indirect_phys_t ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static uint32_t *
FUNC_8(vdev_t *VAR_0)
{
 vdev_indirect_mapping_t *VAR_1 = VAR_0->vdev_indirect_mapping;
 spa_t *VAR_2 = VAR_0->vdev_spa;
 spa_condensing_indirect_phys_t *VAR_3 =
     &VAR_2->spa_condensing_indirect_phys;
 uint32_t *VAR_4;

 FUNC_0(FUNC_7(VAR_0) != 0, VAR_0->vdev_obsolete_sm != ((void*)0));
 VAR_4 = FUNC_5(VAR_1);
 if (VAR_0->vdev_obsolete_sm != ((void*)0)) {
  FUNC_6(VAR_1, VAR_4,
      VAR_0->vdev_obsolete_sm);
 }
 if (VAR_3->scip_vdev == VAR_0->vdev_id &&
     VAR_3->scip_prev_obsolete_sm_object != 0) {
  space_map_t *VAR_5 = ((void*)0);
  FUNC_1(FUNC_3(&VAR_5, VAR_2->spa_meta_objset,
      VAR_3->scip_prev_obsolete_sm_object, 0, VAR_0->vdev_asize, 0));
  FUNC_4(VAR_5);
  FUNC_6(VAR_1, VAR_4,
      VAR_5);
  FUNC_2(VAR_5);
 }
 return (VAR_4);
}
