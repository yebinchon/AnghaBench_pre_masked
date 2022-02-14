
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_15__ {int zcb_removing_size; } ;
typedef TYPE_1__ zdb_cb_t ;
struct TYPE_16__ {size_t vdev_ms_count; TYPE_5__** vdev_ms; int * vdev_indirect_mapping; } ;
typedef TYPE_2__ vdev_t ;
typedef int vdev_indirect_mapping_t ;
typedef size_t uint64_t ;
struct TYPE_17__ {int svr_allocd_segs; int svr_vdev_id; } ;
typedef TYPE_3__ spa_vdev_removal_t ;
struct TYPE_18__ {TYPE_3__* spa_vdev_removal; } ;
typedef TYPE_4__ spa_t ;
struct TYPE_19__ {scalar_t__ ms_start; TYPE_10__* ms_sm; } ;
typedef TYPE_5__ metaslab_t ;
struct TYPE_14__ {size_t sm_start; size_t sm_size; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,size_t,size_t) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;
 int FUNC_5 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_6 (TYPE_4__*,int ,int ) ;
 int FUNC_7 (TYPE_10__*,int ,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 TYPE_2__* FUNC_9 (TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_10(spa_t *VAR_5, zdb_cb_t *VAR_6)
{
 if (VAR_5->spa_vdev_removal == ((void*)0))
  return;

 FUNC_5(VAR_5, VAR_2, VAR_0, VAR_1);

 spa_vdev_removal_t *VAR_7 = VAR_5->spa_vdev_removal;
 vdev_t *VAR_8 = FUNC_9(VAR_5, VAR_7->svr_vdev_id);
 vdev_indirect_mapping_t *VAR_9 = VAR_8->vdev_indirect_mapping;

 for (uint64_t VAR_10 = 0; VAR_10 < VAR_8->vdev_ms_count; VAR_10++) {
  metaslab_t *VAR_11 = VAR_8->vdev_ms[VAR_10];

  if (VAR_11->ms_start >= FUNC_8(VAR_9))
   break;

  FUNC_0(FUNC_3(VAR_7->svr_allocd_segs));

  if (VAR_11->ms_sm != ((void*)0)) {
   FUNC_1(FUNC_7(VAR_11->ms_sm,
       VAR_7->svr_allocd_segs, VAR_3));






   uint64_t VAR_12 =
       FUNC_8(VAR_9);
   uint64_t VAR_13 = VAR_11->ms_sm->sm_start +
       VAR_11->ms_sm->sm_size;
   if (VAR_13 > VAR_12)
    FUNC_2(VAR_7->svr_allocd_segs,
        VAR_12, VAR_13 - VAR_12);
  }

  VAR_6->zcb_removing_size +=
      FUNC_3(VAR_7->svr_allocd_segs);
  FUNC_4(VAR_7->svr_allocd_segs, VAR_4, VAR_8);
 }

 FUNC_6(VAR_5, VAR_2, VAR_0);
}
