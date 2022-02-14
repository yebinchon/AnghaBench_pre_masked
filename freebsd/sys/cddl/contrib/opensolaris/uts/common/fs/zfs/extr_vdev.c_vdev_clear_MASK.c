
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ vs_checksum_errors; scalar_t__ vs_write_errors; scalar_t__ vs_read_errors; } ;
struct TYPE_23__ {int vdev_children; unsigned long long vdev_faulted; unsigned long long vdev_degraded; void* vdev_unspare; TYPE_4__* vdev_parent; int * vdev_aux; struct TYPE_23__* vdev_top; void* vdev_forcefault; void* vdev_cant_write; void* vdev_cant_read; struct TYPE_23__** vdev_child; TYPE_1__ vdev_stat; } ;
typedef TYPE_5__ vdev_t ;
struct TYPE_21__ {int sav_count; TYPE_5__** sav_vdevs; } ;
struct TYPE_20__ {int sav_count; TYPE_5__** sav_vdevs; } ;
struct TYPE_24__ {TYPE_3__ spa_spares; TYPE_2__ spa_l2cache; TYPE_5__* spa_root_vdev; } ;
typedef TYPE_6__ spa_t ;
struct TYPE_22__ {TYPE_5__** vdev_child; int * vdev_ops; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_6__*,scalar_t__,int ) ;
 int FUNC_3 (TYPE_6__*,TYPE_5__*,int *,int ) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int VAR_6 ;
 int FUNC_8 (TYPE_5__*) ;
 scalar_t__ FUNC_9 (TYPE_5__*) ;

void
FUNC_10(spa_t *VAR_7, vdev_t *VAR_8)
{
 vdev_t *VAR_9 = VAR_7->spa_root_vdev;

 FUNC_0(FUNC_2(VAR_7, VAR_4, VAR_3) == VAR_4);

 if (VAR_8 == ((void*)0))
  VAR_8 = VAR_9;

 VAR_8->vdev_stat.vs_read_errors = 0;
 VAR_8->vdev_stat.vs_write_errors = 0;
 VAR_8->vdev_stat.vs_checksum_errors = 0;

 for (int VAR_10 = 0; VAR_10 < VAR_8->vdev_children; VAR_10++)
  FUNC_10(VAR_7, VAR_8->vdev_child[VAR_10]);

 if (VAR_8 == VAR_9) {
  for (int VAR_11 = 0; VAR_11 < VAR_7->spa_l2cache.sav_count; VAR_11++)
   FUNC_10(VAR_7, VAR_7->spa_l2cache.sav_vdevs[VAR_11]);

  for (int VAR_12 = 0; VAR_12 < VAR_7->spa_spares.sav_count; VAR_12++)
   FUNC_10(VAR_7, VAR_7->spa_spares.sav_vdevs[VAR_12]);
 }




 if (!FUNC_4(VAR_8))
  return;







 if (VAR_8->vdev_faulted || VAR_8->vdev_degraded ||
     !FUNC_6(VAR_8) || !FUNC_9(VAR_8)) {






  VAR_8->vdev_forcefault = VAR_1;

  VAR_8->vdev_faulted = VAR_8->vdev_degraded = 0ULL;
  VAR_8->vdev_cant_read = VAR_0;
  VAR_8->vdev_cant_write = VAR_0;

  FUNC_7(VAR_8 == VAR_9 ? VAR_9 : VAR_8->vdev_top);

  VAR_8->vdev_forcefault = VAR_0;

  if (VAR_8 != VAR_9 && FUNC_9(VAR_8->vdev_top))
   FUNC_8(VAR_8->vdev_top);

  if (VAR_8->vdev_aux == ((void*)0) && !FUNC_5(VAR_8))
   FUNC_1(VAR_7, VAR_5);

  FUNC_3(VAR_7, VAR_8, ((void*)0), VAR_2);
 }






 if (!FUNC_5(VAR_8) && VAR_8->vdev_parent != ((void*)0) &&
     VAR_8->vdev_parent->vdev_ops == &VAR_6 &&
     VAR_8->vdev_parent->vdev_child[0] == VAR_8)
  VAR_8->vdev_unspare = VAR_1;
}
