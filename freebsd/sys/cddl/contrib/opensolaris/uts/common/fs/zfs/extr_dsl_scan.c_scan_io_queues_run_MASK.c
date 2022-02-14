
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int vdev_scan_io_queue_lock; int * vdev_scan_io_queue; } ;
typedef TYPE_3__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_11__ {char* spa_name; TYPE_2__* spa_root_vdev; } ;
typedef TYPE_4__ spa_t ;
struct TYPE_12__ {scalar_t__ scn_bytes_pending; int * scn_taskq; int scn_is_sorted; TYPE_1__* scn_dp; } ;
typedef TYPE_5__ dsl_scan_t ;
struct TYPE_9__ {int vdev_children; TYPE_3__** vdev_child; } ;
struct TYPE_8__ {TYPE_4__* dp_spa; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*,scalar_t__) ;
 char* FUNC_3 (scalar_t__,int ) ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_8 ;
 int FUNC_6 (char*,scalar_t__,char*,char*) ;
 int FUNC_7 (TYPE_4__*,int ,int ) ;
 int * FUNC_8 (char*,int,int ,int,int,int ) ;
 scalar_t__ FUNC_9 (int *,int ,int *,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(dsl_scan_t *VAR_9)
{
 spa_t *VAR_10 = VAR_9->scn_dp->dp_spa;

 FUNC_0(VAR_9->scn_is_sorted);
 FUNC_0(FUNC_7(VAR_10, VAR_2, VAR_1));

 if (VAR_9->scn_bytes_pending == 0)
  return;

 if (VAR_9->scn_taskq == ((void*)0)) {
  char *VAR_11 = FUNC_3(VAR_6 + 16,
      VAR_0);
  int VAR_12 = VAR_10->spa_root_vdev->vdev_children;
  (void) FUNC_6(VAR_11, VAR_6 + 16,
      "dsl_scan_tq_%s", VAR_10->spa_name);
  VAR_9->scn_taskq = FUNC_8(VAR_11, VAR_12, VAR_7,
      VAR_12, VAR_12, VAR_4);
  FUNC_2(VAR_11, VAR_6 + 16);
 }

 for (uint64_t VAR_13 = 0; VAR_13 < VAR_10->spa_root_vdev->vdev_children; VAR_13++) {
  vdev_t *VAR_14 = VAR_10->spa_root_vdev->vdev_child[VAR_13];

  FUNC_4(&VAR_14->vdev_scan_io_queue_lock);
  if (VAR_14->vdev_scan_io_queue != ((void*)0)) {
   FUNC_1(FUNC_9(VAR_9->scn_taskq,
       VAR_8, VAR_14->vdev_scan_io_queue,
       VAR_5) != VAR_3);
  }
  FUNC_5(&VAR_14->vdev_scan_io_queue_lock);
 }






 FUNC_10(VAR_9->scn_taskq);
}
