
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef size_t zio_type_t ;
struct TYPE_20__ {scalar_t__ io_txg; size_t io_type; int io_flags; scalar_t__ io_error; TYPE_5__* io_vd; scalar_t__ io_gang_tree; TYPE_7__* io_spa; } ;
typedef TYPE_4__ zio_t ;
struct TYPE_22__ {scalar_t__ vs_scan_processed; int vs_write_errors; int vs_read_errors; int vs_checksum_errors; int * vs_bytes; int * vs_ops; int vs_self_healed; } ;
struct TYPE_21__ {int vdev_top; struct TYPE_21__* vdev_parent; TYPE_3__* vdev_ops; int vdev_stat_lock; TYPE_6__ vdev_stat; } ;
typedef TYPE_5__ vdev_t ;
typedef TYPE_6__ vdev_stat_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_23__ {scalar_t__ spa_load_state; scalar_t__ spa_claiming; TYPE_2__* spa_dsl_pool; TYPE_5__* spa_root_vdev; } ;
typedef TYPE_7__ spa_t ;
struct TYPE_24__ {scalar_t__ scn_processed; } ;
typedef TYPE_8__ dsl_scan_phys_t ;
struct TYPE_19__ {scalar_t__ vdev_op_leaf; } ;
struct TYPE_18__ {TYPE_1__* dp_scan; } ;
struct TYPE_17__ {TYPE_8__ scn_phys; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int FUNC_1 (scalar_t__*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*) ;
 scalar_t__ FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (int ,int ,TYPE_5__*,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_5__*,int ,scalar_t__,int) ;
 int FUNC_9 (TYPE_5__*,int ,scalar_t__,int) ;
 int FUNC_10 (TYPE_5__*) ;

void
FUNC_11(zio_t *VAR_16, uint64_t VAR_17)
{
 spa_t *VAR_18 = VAR_16->io_spa;
 vdev_t *VAR_19 = VAR_18->spa_root_vdev;
 vdev_t *VAR_20 = VAR_16->io_vd ? VAR_16->io_vd : VAR_19;
 vdev_t *VAR_21;
 uint64_t VAR_22 = VAR_16->io_txg;
 vdev_stat_t *VAR_23 = &VAR_20->vdev_stat;
 zio_type_t VAR_24 = VAR_16->io_type;
 int VAR_25 = VAR_16->io_flags;




 if (VAR_16->io_gang_tree)
  return;

 if (VAR_16->io_error == 0) {
  if (VAR_20 == VAR_19)
   return;

  FUNC_0(VAR_20 == VAR_16->io_vd);

  if (VAR_25 & VAR_8)
   return;

  FUNC_2(&VAR_20->vdev_stat_lock);

  if (VAR_25 & VAR_9) {
   if (VAR_25 & VAR_11) {
    dsl_scan_phys_t *VAR_26 =
        &VAR_18->spa_dsl_pool->dp_scan->scn_phys;
    uint64_t *VAR_27 = &VAR_26->scn_processed;


    if (VAR_20->vdev_ops->vdev_op_leaf)
     FUNC_1(VAR_27, VAR_17);
    VAR_23->vs_scan_processed += VAR_17;
   }

   if (VAR_25 & VAR_12)
    VAR_23->vs_self_healed += VAR_17;
  }

  VAR_23->vs_ops[VAR_24]++;
  VAR_23->vs_bytes[VAR_24] += VAR_17;

  FUNC_3(&VAR_20->vdev_stat_lock);
  return;
 }

 if (VAR_25 & VAR_13)
  return;







 if (VAR_16->io_error == VAR_4 &&
     !(VAR_16->io_flags & VAR_10))
  return;






 if (VAR_16->io_vd == ((void*)0) && (VAR_16->io_flags & VAR_7))
  return;

 FUNC_2(&VAR_20->vdev_stat_lock);
 if (VAR_24 == VAR_14 && !FUNC_10(VAR_20)) {
  if (VAR_16->io_error == VAR_3)
   VAR_23->vs_checksum_errors++;
  else
   VAR_23->vs_read_errors++;
 }
 if (VAR_24 == VAR_15 && !FUNC_10(VAR_20))
  VAR_23->vs_write_errors++;
 FUNC_3(&VAR_20->vdev_stat_lock);

 if (VAR_18->spa_load_state == VAR_5 &&
     VAR_24 == VAR_15 && VAR_22 != 0 &&
     (!(VAR_25 & VAR_9) ||
     (VAR_25 & VAR_11) ||
     VAR_18->spa_claiming)) {
  if (VAR_20->vdev_ops->vdev_op_leaf) {
   uint64_t VAR_28 = VAR_22;
   if (VAR_25 & VAR_11) {
    FUNC_0(VAR_25 & VAR_9);
    FUNC_0(FUNC_5(VAR_18) == 1);
    FUNC_9(VAR_20, VAR_2, VAR_22, 1);
    VAR_28 = FUNC_6(VAR_18);
   } else if (VAR_18->spa_claiming) {
    FUNC_0(VAR_25 & VAR_9);
    VAR_28 = FUNC_4(VAR_18);
   }
   FUNC_0(VAR_28 >= FUNC_6(VAR_18));
   if (FUNC_8(VAR_20, VAR_0, VAR_22, 1))
    return;
   for (VAR_21 = VAR_20; VAR_21 != VAR_19; VAR_21 = VAR_21->vdev_parent)
    FUNC_9(VAR_21, VAR_1, VAR_22, 1);
   FUNC_7(VAR_20->vdev_top, VAR_6, VAR_20, VAR_28);
  }
  if (VAR_20 != VAR_19)
   FUNC_9(VAR_20, VAR_0, VAR_22, 1);
 }
}
