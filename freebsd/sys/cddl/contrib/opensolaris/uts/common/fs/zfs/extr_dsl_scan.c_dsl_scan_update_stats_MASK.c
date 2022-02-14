
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_6__* vdev_scan_io_queue; } ;
typedef TYPE_3__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_11__ {TYPE_2__* spa_root_vdev; } ;
typedef TYPE_4__ spa_t ;
struct TYPE_12__ {size_t scn_avg_seg_size_this_txg; size_t scn_avg_zio_size_this_txg; size_t scn_segs_this_txg; size_t scn_zios_this_txg; TYPE_1__* scn_dp; } ;
typedef TYPE_5__ dsl_scan_t ;
struct TYPE_13__ {scalar_t__ q_zios_this_txg; scalar_t__ q_segs_this_txg; scalar_t__ q_total_zio_size_this_txg; scalar_t__ q_total_seg_size_this_txg; } ;
typedef TYPE_6__ dsl_scan_io_queue_t ;
struct TYPE_9__ {size_t vdev_children; TYPE_3__** vdev_child; } ;
struct TYPE_8__ {TYPE_4__* dp_spa; } ;



__attribute__((used)) static void
FUNC_0(dsl_scan_t *VAR_0)
{
 spa_t *VAR_1 = VAR_0->scn_dp->dp_spa;
 uint64_t VAR_2;
 uint64_t VAR_3 = 0, VAR_4 = 0;
 uint64_t VAR_5 = 0, VAR_6 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->spa_root_vdev->vdev_children; VAR_2++) {
  vdev_t *VAR_7 = VAR_1->spa_root_vdev->vdev_child[VAR_2];
  dsl_scan_io_queue_t *VAR_8 = VAR_7->vdev_scan_io_queue;

  if (VAR_8 == ((void*)0))
   continue;

  VAR_3 += VAR_8->q_total_seg_size_this_txg;
  VAR_4 += VAR_8->q_total_zio_size_this_txg;
  VAR_5 += VAR_8->q_segs_this_txg;
  VAR_6 += VAR_8->q_zios_this_txg;
 }

 if (VAR_5 == 0 || VAR_6 == 0) {
  VAR_0->scn_avg_seg_size_this_txg = 0;
  VAR_0->scn_avg_zio_size_this_txg = 0;
  VAR_0->scn_segs_this_txg = 0;
  VAR_0->scn_zios_this_txg = 0;
  return;
 }

 VAR_0->scn_avg_seg_size_this_txg = VAR_3 / VAR_5;
 VAR_0->scn_avg_zio_size_this_txg = VAR_4 / VAR_6;
 VAR_0->scn_segs_this_txg = VAR_5;
 VAR_0->scn_zios_this_txg = VAR_6;
}
