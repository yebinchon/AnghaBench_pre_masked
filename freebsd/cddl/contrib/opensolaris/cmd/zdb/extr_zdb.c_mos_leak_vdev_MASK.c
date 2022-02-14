
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int vic_mapping_object; int vic_births_object; } ;
struct TYPE_14__ {size_t vdev_ms_count; size_t vdev_children; struct TYPE_14__** vdev_child; TYPE_7__** vdev_ms; TYPE_5__* vdev_obsolete_sm; TYPE_4__* vdev_indirect_mapping; TYPE_2__* vdev_checkpoint_sm; int vdev_leaf_zap; TYPE_1__ vdev_indirect_config; int vdev_top_zap; int vdev_ms_array; int vdev_dtl_object; } ;
typedef TYPE_6__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_15__ {int ms_sm; } ;
typedef TYPE_7__ metaslab_t ;
struct TYPE_13__ {int sm_object; } ;
struct TYPE_12__ {TYPE_3__* vim_phys; } ;
struct TYPE_11__ {int vimp_counts_object; } ;
struct TYPE_10__ {int sm_object; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(vdev_t *VAR_0)
{
 FUNC_0(VAR_0->vdev_dtl_object);
 FUNC_0(VAR_0->vdev_ms_array);
 FUNC_0(VAR_0->vdev_top_zap);
 FUNC_0(VAR_0->vdev_indirect_config.vic_births_object);
 FUNC_0(VAR_0->vdev_indirect_config.vic_mapping_object);
 FUNC_0(VAR_0->vdev_leaf_zap);
 if (VAR_0->vdev_checkpoint_sm != ((void*)0))
  FUNC_0(VAR_0->vdev_checkpoint_sm->sm_object);
 if (VAR_0->vdev_indirect_mapping != ((void*)0)) {
  FUNC_0(VAR_0->vdev_indirect_mapping->
      vim_phys->vimp_counts_object);
 }
 if (VAR_0->vdev_obsolete_sm != ((void*)0))
  FUNC_0(VAR_0->vdev_obsolete_sm->sm_object);

 for (uint64_t VAR_1 = 0; VAR_1 < VAR_0->vdev_ms_count; VAR_1++) {
  metaslab_t *VAR_2 = VAR_0->vdev_ms[VAR_1];
  FUNC_0(FUNC_1(VAR_2->ms_sm));
 }

 for (uint64_t VAR_3 = 0; VAR_3 < VAR_0->vdev_children; VAR_3++) {
  FUNC_2(VAR_0->vdev_child[VAR_3]);
 }
}
