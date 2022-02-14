
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_13__ {scalar_t__ za_first_integer; } ;
typedef TYPE_3__ zap_attribute_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_12__ {scalar_t__ ub_version; } ;
struct TYPE_11__ {scalar_t__ ub_version; } ;
struct TYPE_14__ {scalar_t__ spa_avz_action; scalar_t__ spa_all_vdev_zaps; int spa_config_object; int * spa_config_syncing; TYPE_2__ spa_uberblock; TYPE_1__ spa_ubsync; int spa_root_vdev; int spa_meta_objset; int spa_config_dirty_list; } ;
typedef TYPE_4__ spa_t ;
typedef int nvlist_t ;
typedef int new_avz ;
typedef int dmu_tx_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int VAR_13 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,scalar_t__,int *) ;
 int FUNC_7 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_8 (TYPE_4__*,int ,int ) ;
 int * FUNC_9 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_10 (TYPE_4__*,int ,int *,int *) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_13 (int ,int ,int ,int ,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_17 (int *,TYPE_3__*) ;
 int FUNC_18 (int ,scalar_t__,int *) ;
 scalar_t__ FUNC_19 (int ,scalar_t__,scalar_t__) ;
 int FUNC_20 (int ,int ,int ,int *) ;
 int FUNC_21 (int ,int ,int ,int,int,scalar_t__*,int *) ;

__attribute__((used)) static void
FUNC_22(spa_t *VAR_14, dmu_tx_t *VAR_15)
{
 nvlist_t *VAR_16;







 if (FUNC_4(&VAR_14->spa_config_dirty_list) &&
     VAR_14->spa_avz_action == VAR_2)
  return;

 FUNC_7(VAR_14, VAR_12, VAR_10, VAR_11);

 FUNC_0(VAR_14->spa_avz_action == VAR_2 ||
     VAR_14->spa_avz_action == VAR_1 ||
     VAR_14->spa_all_vdev_zaps != 0);

 if (VAR_14->spa_avz_action == VAR_3) {

  uint64_t VAR_17 = FUNC_12(VAR_14->spa_meta_objset,
      VAR_5, VAR_6, 0, VAR_15);
  FUNC_6(VAR_14->spa_root_vdev, VAR_17, VAR_15);


  zap_cursor_t VAR_18;
  zap_attribute_t VAR_19;

  for (FUNC_16(&VAR_18, VAR_14->spa_meta_objset,
      VAR_14->spa_all_vdev_zaps);
      FUNC_17(&VAR_18, &VAR_19) == 0;
      FUNC_14(&VAR_18)) {
   uint64_t VAR_20 = VAR_19.za_first_integer;
   if (FUNC_19(VAR_14->spa_meta_objset, VAR_17,
       VAR_20) == VAR_9) {




    FUNC_1(FUNC_18(VAR_14->spa_meta_objset, VAR_20,
        VAR_15));
   }
  }

  FUNC_15(&VAR_18);


  FUNC_1(FUNC_18(VAR_14->spa_meta_objset,
      VAR_14->spa_all_vdev_zaps, VAR_15));


  FUNC_1(FUNC_21(VAR_14->spa_meta_objset,
      VAR_7, VAR_8,
      sizeof (VAR_17), 1, &VAR_17, VAR_15));

  VAR_14->spa_all_vdev_zaps = VAR_17;
 } else if (VAR_14->spa_avz_action == VAR_0) {
  zap_cursor_t VAR_21;
  zap_attribute_t VAR_22;


  for (FUNC_16(&VAR_21, VAR_14->spa_meta_objset,
      VAR_14->spa_all_vdev_zaps);
      FUNC_17(&VAR_21, &VAR_22) == 0;
      FUNC_14(&VAR_21)) {
   uint64_t VAR_23 = VAR_22.za_first_integer;
   FUNC_1(FUNC_18(VAR_14->spa_meta_objset, VAR_23, VAR_15));
  }

  FUNC_15(&VAR_21);


  FUNC_1(FUNC_18(VAR_14->spa_meta_objset,
      VAR_14->spa_all_vdev_zaps, VAR_15));
  FUNC_1(FUNC_20(VAR_14->spa_meta_objset,
      VAR_7, VAR_8, VAR_15));
  VAR_14->spa_all_vdev_zaps = 0;
 }

 if (VAR_14->spa_all_vdev_zaps == 0) {
  VAR_14->spa_all_vdev_zaps = FUNC_13(VAR_14->spa_meta_objset,
      VAR_5, VAR_7,
      VAR_8, VAR_15);
 }
 VAR_14->spa_avz_action = VAR_2;


 FUNC_11(VAR_14->spa_root_vdev, VAR_15);

 VAR_16 = FUNC_9(VAR_14, VAR_14->spa_root_vdev,
     FUNC_2(VAR_15), VAR_4);





 if (VAR_14->spa_ubsync.ub_version < VAR_14->spa_uberblock.ub_version)
  FUNC_3(VAR_16, VAR_13,
      VAR_14->spa_uberblock.ub_version);

 FUNC_8(VAR_14, VAR_12, VAR_10);

 FUNC_5(VAR_14->spa_config_syncing);
 VAR_14->spa_config_syncing = VAR_16;

 FUNC_10(VAR_14, VAR_14->spa_config_object, VAR_16, VAR_15);
}
