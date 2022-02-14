
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int range_seg_t ;
struct TYPE_6__ {scalar_t__ scn_clearing; scalar_t__ scn_checkpointing; int scn_is_sorted; } ;
typedef TYPE_2__ dsl_scan_t ;
struct TYPE_7__ {int q_exts_by_size; int q_exts_by_addr; TYPE_1__* q_vd; TYPE_2__* q_scn; } ;
typedef TYPE_3__ dsl_scan_io_queue_t ;
struct TYPE_5__ {int vdev_scan_io_queue_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int const* FUNC_2 (int *) ;
 int const* FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static const range_seg_t *
FUNC_4(dsl_scan_io_queue_t *VAR_1)
{
 dsl_scan_t *VAR_2 = VAR_1->q_scn;

 FUNC_0(FUNC_1(&VAR_1->q_vd->vdev_scan_io_queue_lock));
 FUNC_0(VAR_2->scn_is_sorted);


 if (VAR_2->scn_checkpointing || VAR_2->scn_clearing) {
  if (VAR_0 == 1) {
   return (FUNC_3(VAR_1->q_exts_by_addr));
  } else if (VAR_0 == 2) {
   return (FUNC_2(&VAR_1->q_exts_by_size));
  }
 }
 if (VAR_2->scn_checkpointing) {
  return (FUNC_3(VAR_1->q_exts_by_addr));
 } else if (VAR_2->scn_clearing) {
  return (FUNC_2(&VAR_1->q_exts_by_size));
 } else {
  return (((void*)0));
 }
}
