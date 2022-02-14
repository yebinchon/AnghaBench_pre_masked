
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint64_t ;
typedef int space_map_t ;
struct TYPE_17__ {int rt_root; } ;
typedef TYPE_4__ range_tree_t ;
struct TYPE_18__ {void* ms_condensing; int ms_lock; TYPE_4__* ms_allocatable; int * ms_allocating; int * ms_defer; int ms_freed; int ms_freeing; int ms_size; int ms_start; void* ms_condense_wanted; int * ms_sm; TYPE_3__* ms_group; int ms_id; int ms_loaded; } ;
typedef TYPE_5__ metaslab_t ;
typedef int dmu_tx_t ;
struct TYPE_16__ {TYPE_2__* mg_vd; } ;
struct TYPE_15__ {TYPE_1__* vdev_spa; int vdev_id; } ;
struct TYPE_14__ {int spa_name; } ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*,int ,int ) ;
 TYPE_4__* FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_4__*) ;
 int VAR_8 ;
 int FUNC_8 (TYPE_4__*,int *,int *) ;
 int FUNC_9 (int ,int ,TYPE_4__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int *) ;
 int FUNC_12 (int *,TYPE_4__*,int ,int ,int *) ;
 int FUNC_13 (char*,int,int ,TYPE_5__*,int ,int ,int ,int ,char*) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_14(metaslab_t *VAR_10, uint64_t VAR_11, dmu_tx_t *VAR_12)
{
 range_tree_t *VAR_13;
 space_map_t *VAR_14 = VAR_10->ms_sm;

 FUNC_0(FUNC_1(&VAR_10->ms_lock));
 FUNC_0(VAR_10->ms_loaded);

 FUNC_13("condensing: txg %llu, msp[%llu] %p, vdev id %llu, "
     "spa %s, smp size %llu, segments %lu, forcing condense=%s", VAR_11,
     VAR_10->ms_id, VAR_10, VAR_10->ms_group->mg_vd->vdev_id,
     VAR_10->ms_group->mg_vd->vdev_spa->spa_name,
     FUNC_10(VAR_10->ms_sm),
     FUNC_2(&VAR_10->ms_allocatable->rt_root),
     VAR_10->ms_condense_wanted ? "TRUE" : "FALSE");

 VAR_10->ms_condense_wanted = VAR_0;
 VAR_13 = FUNC_6(((void*)0), ((void*)0));
 FUNC_5(VAR_13, VAR_10->ms_start, VAR_10->ms_size);

 FUNC_9(VAR_10->ms_freeing, VAR_8, VAR_13);
 FUNC_9(VAR_10->ms_freed, VAR_8, VAR_13);

 for (int VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
  FUNC_9(VAR_10->ms_defer[VAR_15],
      VAR_8, VAR_13);
 }

 for (int VAR_16 = 1; VAR_16 < VAR_5; VAR_16++) {
  FUNC_9(VAR_10->ms_allocating[(VAR_11 + VAR_16) & VAR_7],
      VAR_8, VAR_13);
 }
 VAR_10->ms_condensing = VAR_1;

 FUNC_4(&VAR_10->ms_lock);
 FUNC_11(VAR_14, VAR_9, VAR_12);
 FUNC_12(VAR_14, VAR_13, VAR_2, VAR_4, VAR_12);
 FUNC_8(VAR_13, ((void*)0), ((void*)0));
 FUNC_7(VAR_13);

 FUNC_12(VAR_14, VAR_10->ms_allocatable, VAR_3, VAR_4, VAR_12);
 FUNC_3(&VAR_10->ms_lock);
 VAR_10->ms_condensing = VAR_0;
}
