
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int vdev_children; scalar_t__ vdev_state; scalar_t__ vdev_islog; struct TYPE_10__** vdev_child; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_11__ {int spa_import_flags; int spa_load_info; TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *,int ,int **,size_t) ;
 int ** FUNC_4 (int,int ) ;
 int FUNC_5 (int **,int) ;
 scalar_t__ FUNC_6 (int **,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int * FUNC_11 (TYPE_2__*,TYPE_1__*,int ,int ) ;
 int FUNC_12 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_13(spa_t *VAR_10)
{
 vdev_t *VAR_11 = VAR_10->spa_root_vdev;






 if (!(VAR_10->spa_import_flags & VAR_7)) {
  nvlist_t **VAR_12, *VAR_13;
  uint64_t VAR_14 = 0;

  VAR_12 = FUNC_4(VAR_11->vdev_children * sizeof (nvlist_t **),
      VAR_2);
  FUNC_1(FUNC_6(&VAR_13, VAR_3, VAR_2) == 0);

  for (uint64_t VAR_15 = 0; VAR_15 < VAR_11->vdev_children; VAR_15++) {
   vdev_t *VAR_16 = VAR_11->vdev_child[VAR_15];






   if (VAR_16->vdev_islog &&
       VAR_16->vdev_state == VAR_6) {
    VAR_12[VAR_14++] = FUNC_11(VAR_10, VAR_16,
        VAR_0, VAR_5);
   }
  }

  if (VAR_14 > 0) {
   FUNC_3(VAR_13,
       VAR_8, VAR_12, VAR_14);
   FUNC_2(VAR_10->spa_load_info,
       VAR_9, VAR_13);

   for (uint64_t VAR_17 = 0; VAR_17 < VAR_14; VAR_17++)
    FUNC_7(VAR_12[VAR_17]);
  }
  FUNC_7(VAR_13);
  FUNC_5(VAR_12, VAR_11->vdev_children * sizeof (char **));

  if (VAR_14 > 0) {
   FUNC_8(VAR_10, "some log devices are missing");
   FUNC_12(VAR_11, 2);
   return (FUNC_0(VAR_1));
  }
 } else {
  for (uint64_t VAR_18 = 0; VAR_18 < VAR_11->vdev_children; VAR_18++) {
   vdev_t *VAR_19 = VAR_11->vdev_child[VAR_18];

   if (VAR_19->vdev_islog &&
       VAR_19->vdev_state == VAR_6) {
    FUNC_10(VAR_10, VAR_4);
    FUNC_9(VAR_10, "some log devices are "
        "missing, ZIL is dropped.");
    FUNC_12(VAR_11, 2);
    break;
   }
  }
 }

 return (0);
}
