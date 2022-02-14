
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int vs_scan_removing; scalar_t__* vs_bytes; scalar_t__* vs_ops; int vs_fragmentation; int vs_physical_ashift; int vs_logical_ashift; int vs_configured_ashift; int vs_esize; int vs_initialize_action_time; int vs_initialize_state; int vs_initialize_bytes_est; int vs_initialize_bytes_done; int vs_rsize; int vs_state; scalar_t__ vs_timestamp; } ;
struct TYPE_15__ {scalar_t__ vdev_max_asize; scalar_t__ vdev_asize; unsigned long long vdev_ms_shift; int vdev_children; int vdev_stat_lock; int vdev_removing; TYPE_4__ vdev_stat; struct TYPE_15__** vdev_child; TYPE_2__* vdev_mg; struct TYPE_15__* vdev_top; int * vdev_aux; int vdev_physical_ashift; int vdev_logical_ashift; int vdev_ashift; int vdev_initialize_action_time; int vdev_initialize_state; int vdev_initialize_bytes_est; int vdev_initialize_bytes_done; TYPE_1__* vdev_ops; int vdev_state; TYPE_5__* vdev_spa; } ;
typedef TYPE_3__ vdev_t ;
typedef TYPE_4__ vdev_stat_t ;
struct TYPE_17__ {scalar_t__ spa_bootsize; TYPE_3__* spa_root_vdev; } ;
typedef TYPE_5__ spa_t ;
struct TYPE_14__ {int mg_fragmentation; } ;
struct TYPE_13__ {scalar_t__ vdev_op_leaf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_5__*,int ,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;

void
FUNC_9(vdev_t *VAR_5, vdev_stat_t *VAR_6)
{
 spa_t *VAR_7 = VAR_5->vdev_spa;
 vdev_t *VAR_8 = VAR_7->spa_root_vdev;
 vdev_t *VAR_9 = VAR_5->vdev_top;

 FUNC_0(FUNC_6(VAR_7, VAR_1, VAR_0) != 0);

 FUNC_4(&VAR_5->vdev_stat_lock);
 FUNC_2(&VAR_5->vdev_stat, VAR_6, sizeof (*VAR_6));
 VAR_6->vs_timestamp = FUNC_3() - VAR_6->vs_timestamp;
 VAR_6->vs_state = VAR_5->vdev_state;
 VAR_6->vs_rsize = FUNC_7(VAR_5);
 if (VAR_5->vdev_ops->vdev_op_leaf) {
  VAR_6->vs_rsize += VAR_3 + VAR_2;





  VAR_6->vs_initialize_bytes_done = VAR_5->vdev_initialize_bytes_done;
  VAR_6->vs_initialize_bytes_est = VAR_5->vdev_initialize_bytes_est;
  VAR_6->vs_initialize_state = VAR_5->vdev_initialize_state;
  VAR_6->vs_initialize_action_time = VAR_5->vdev_initialize_action_time;
 }





 if (VAR_5->vdev_aux == ((void*)0) && VAR_9 != ((void*)0) && VAR_5->vdev_max_asize != 0) {
  VAR_6->vs_esize = FUNC_1(VAR_5->vdev_max_asize - VAR_5->vdev_asize -
      VAR_7->spa_bootsize, 1ULL << VAR_9->vdev_ms_shift);
 }
 VAR_6->vs_configured_ashift = VAR_5->vdev_top != ((void*)0)
     ? VAR_5->vdev_top->vdev_ashift : VAR_5->vdev_ashift;
 VAR_6->vs_logical_ashift = VAR_5->vdev_logical_ashift;
 VAR_6->vs_physical_ashift = VAR_5->vdev_physical_ashift;
 if (VAR_5->vdev_aux == ((void*)0) && VAR_5 == VAR_5->vdev_top &&
     FUNC_8(VAR_5)) {
  VAR_6->vs_fragmentation = VAR_5->vdev_mg->mg_fragmentation;
 }





 if (VAR_5 == VAR_8) {
  for (int VAR_10 = 0; VAR_10 < VAR_8->vdev_children; VAR_10++) {
   vdev_t *VAR_11 = VAR_8->vdev_child[VAR_10];
   vdev_stat_t *VAR_12 = &VAR_11->vdev_stat;

   for (int VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
    VAR_6->vs_ops[VAR_13] += VAR_12->vs_ops[VAR_13];
    VAR_6->vs_bytes[VAR_13] += VAR_12->vs_bytes[VAR_13];
   }
   VAR_12->vs_scan_removing = VAR_11->vdev_removing;
  }
 }
 FUNC_5(&VAR_5->vdev_stat_lock);
}
