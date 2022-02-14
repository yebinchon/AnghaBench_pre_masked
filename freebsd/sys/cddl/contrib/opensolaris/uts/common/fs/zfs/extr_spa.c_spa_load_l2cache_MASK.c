
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


struct TYPE_31__ {scalar_t__ vdev_guid; int vdev_isl2cache; TYPE_3__* vdev_aux; struct TYPE_31__* vdev_top; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_33__ {int sav_count; int * sav_config; TYPE_1__** sav_vdevs; } ;
struct TYPE_32__ {TYPE_3__ spa_l2cache; } ;
typedef TYPE_2__ spa_t ;
typedef TYPE_3__ spa_aux_vdev_t ;
typedef TYPE_1__ nvlist_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__** FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__**,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *,int ,TYPE_1__**,int) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int *,int ,TYPE_1__***,int*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ,scalar_t__*) ;
 scalar_t__ FUNC_11 (int *,int ,int ) ;
 scalar_t__ FUNC_12 (TYPE_2__*,scalar_t__,int ) ;
 scalar_t__ FUNC_13 (TYPE_2__*,TYPE_1__**,TYPE_1__*,int *,int ,int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_1__*) ;
 TYPE_1__* FUNC_19 (TYPE_2__*,TYPE_1__*,int ,int ) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;
 scalar_t__ FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*) ;

void
FUNC_24(spa_t *VAR_9)
{
 nvlist_t **VAR_10;
 uint_t VAR_11;
 int VAR_12, VAR_13, VAR_14;
 uint64_t VAR_15;
 vdev_t *VAR_16, **VAR_17, **VAR_18;
 spa_aux_vdev_t *VAR_19 = &VAR_9->spa_l2cache;
 if (!FUNC_17(VAR_9))
  return;


 FUNC_0(FUNC_12(VAR_9, VAR_4, VAR_3) == VAR_4);

 if (VAR_19->sav_config != ((void*)0)) {
  FUNC_1(FUNC_9(VAR_19->sav_config,
      VAR_8, &VAR_10, &VAR_11) == 0);
  VAR_18 = FUNC_2(VAR_11 * sizeof (void *), VAR_2);
 } else {
  VAR_11 = 0;
  VAR_18 = ((void*)0);
 }

 VAR_17 = VAR_19->sav_vdevs;
 VAR_14 = VAR_19->sav_count;
 VAR_19->sav_vdevs = ((void*)0);
 VAR_19->sav_count = 0;




 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  FUNC_1(FUNC_10(VAR_10[VAR_12], VAR_7,
      &VAR_15) == 0);

  VAR_18[VAR_12] = ((void*)0);
  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
   VAR_16 = VAR_17[VAR_13];
   if (VAR_16 != ((void*)0) && VAR_15 == VAR_16->vdev_guid) {



    VAR_18[VAR_12] = VAR_16;
    VAR_17[VAR_13] = ((void*)0);
    break;
   }
  }

  if (VAR_18[VAR_12] == ((void*)0)) {



   FUNC_1(FUNC_13(VAR_9, &VAR_16, VAR_10[VAR_12], ((void*)0), 0,
       VAR_5) == 0);
   FUNC_0(VAR_16 != ((void*)0));
   VAR_18[VAR_12] = VAR_16;





   FUNC_15(VAR_16);

   VAR_16->vdev_top = VAR_16;
   VAR_16->vdev_aux = VAR_19;

   FUNC_14(VAR_16);

   if (FUNC_22(VAR_16) != 0)
    continue;

   (void) FUNC_23(VAR_16);

   if (!FUNC_21(VAR_16))
    FUNC_4(VAR_9, VAR_16);
  }
 }




 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
  uint64_t VAR_20;

  VAR_16 = VAR_17[VAR_12];
  if (VAR_16 != ((void*)0)) {
   FUNC_0(VAR_16->vdev_isl2cache);

   if (FUNC_16(VAR_16->vdev_guid, &VAR_20) &&
       VAR_20 != 0ULL && FUNC_6(VAR_16))
    FUNC_5(VAR_16);
   FUNC_18(VAR_16);
   FUNC_20(VAR_16);
  }
 }

 if (VAR_17)
  FUNC_3(VAR_17, VAR_14 * sizeof (void *));

 if (VAR_19->sav_config == ((void*)0))
  goto out;

 VAR_19->sav_vdevs = VAR_18;
 VAR_19->sav_count = (int)VAR_11;





 FUNC_1(FUNC_11(VAR_19->sav_config, VAR_8,
     VAR_1) == 0);

 VAR_10 = FUNC_2(VAR_19->sav_count * sizeof (void *), VAR_2);
 for (VAR_12 = 0; VAR_12 < VAR_19->sav_count; VAR_12++)
  VAR_10[VAR_12] = FUNC_19(VAR_9,
      VAR_19->sav_vdevs[VAR_12], VAR_0, VAR_6);
 FUNC_1(FUNC_7(VAR_19->sav_config,
     VAR_8, VAR_10, VAR_19->sav_count) == 0);
out:
 for (VAR_12 = 0; VAR_12 < VAR_19->sav_count; VAR_12++)
  FUNC_8(VAR_10[VAR_12]);
 if (VAR_19->sav_count)
  FUNC_3(VAR_10, VAR_19->sav_count * sizeof (void *));
}
