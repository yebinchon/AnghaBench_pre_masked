
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ztest_ds_t ;
struct TYPE_10__ {int vdev_guid; int * vdev_initialize_thread; int vdev_path; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
struct TYPE_11__ {int spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
typedef int boolean_t ;
struct TYPE_12__ {int zo_verbose; } ;


 int VAR_0 ;


 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int,int) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (char*,TYPE_1__*,int) ;
 TYPE_5__ VAR_4 ;
 int FUNC_9 (int ) ;
 TYPE_1__* FUNC_10 (int ) ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;

void
FUNC_11(ztest_ds_t *VAR_7, uint64_t VAR_8)
{
 spa_t *VAR_9 = VAR_5;
 int VAR_10 = 0;

 FUNC_1(&VAR_6);

 FUNC_4(VAR_9, VAR_3, VAR_0, VAR_2);


 vdev_t *VAR_11 = FUNC_10(VAR_9->spa_root_vdev);
 if (VAR_11 == ((void*)0)) {
  FUNC_5(VAR_9, VAR_3, VAR_0);
  FUNC_2(&VAR_6);
  return;
 }






 uint64_t VAR_12 = VAR_11->vdev_guid;
 char *VAR_13 = FUNC_7(VAR_11->vdev_path);
 boolean_t VAR_14 = VAR_11->vdev_initialize_thread != ((void*)0);

 FUNC_8("vd %p, guid %llu", VAR_11, VAR_12);
 FUNC_5(VAR_9, VAR_3, VAR_0);

 uint64_t VAR_15 = FUNC_9(VAR_1);
 VAR_10 = FUNC_6(VAR_9, VAR_12, VAR_15);
 switch (VAR_15) {
 case 130:
  if (VAR_4.zo_verbose >= 4) {
   (void) FUNC_3("Cancel initialize %s", VAR_13);
   if (!VAR_14)
    (void) FUNC_3(" failed (no initialize active)");
   (void) FUNC_3("\n");
  }
  break;
 case 129:
  if (VAR_4.zo_verbose >= 4) {
   (void) FUNC_3("Start initialize %s", VAR_13);
   if (VAR_14 && VAR_10 == 0)
    (void) FUNC_3(" failed (already active)");
   else if (VAR_10 != 0)
    (void) FUNC_3(" failed (error %d)", VAR_10);
   (void) FUNC_3("\n");
  }
  break;
 case 128:
  if (VAR_4.zo_verbose >= 4) {
   (void) FUNC_3("Suspend initialize %s", VAR_13);
   if (!VAR_14)
    (void) FUNC_3(" failed (no initialize active)");
   (void) FUNC_3("\n");
  }
  break;
 }
 FUNC_0(VAR_13);
 FUNC_2(&VAR_6);
}
