
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_29__ {TYPE_1__* vdev_aux; struct TYPE_29__* vdev_top; scalar_t__ vdev_isspare; int vdev_guid; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint_t ;
struct TYPE_28__ {int sav_count; int * sav_config; TYPE_2__** sav_vdevs; } ;
struct TYPE_30__ {TYPE_1__ spa_spares; } ;
typedef TYPE_3__ spa_t ;
typedef TYPE_2__ nvlist_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_2__**,int) ;
 scalar_t__ FUNC_4 (int *,int ,TYPE_2__**,int) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *,int ,TYPE_2__***,int*) ;
 scalar_t__ FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_3__*,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (TYPE_3__*,TYPE_2__**,TYPE_2__*,int *,int ,int ) ;
 TYPE_2__* FUNC_10 (TYPE_3__*,int ,int ) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_2__*) ;
 TYPE_2__* FUNC_16 (TYPE_3__*,TYPE_2__*,int ,int ) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 scalar_t__ FUNC_19 (TYPE_2__*) ;
 scalar_t__ FUNC_20 (TYPE_2__*) ;

void
FUNC_21(spa_t *VAR_9)
{
 nvlist_t **VAR_10;
 uint_t VAR_11;
 int VAR_12;
 vdev_t *VAR_13, *VAR_14;
 if (!FUNC_14(VAR_9))
  return;


 FUNC_0(FUNC_8(VAR_9, VAR_5, VAR_4) == VAR_5);




 for (VAR_12 = 0; VAR_12 < VAR_9->spa_spares.sav_count; VAR_12++) {
  VAR_13 = VAR_9->spa_spares.sav_vdevs[VAR_12];


  if ((VAR_14 = FUNC_10(VAR_9, VAR_13->vdev_guid,
      VAR_0)) != ((void*)0) && VAR_14->vdev_isspare)
   FUNC_13(VAR_14);
  FUNC_15(VAR_13);
  FUNC_17(VAR_13);
 }

 if (VAR_9->spa_spares.sav_vdevs)
  FUNC_3(VAR_9->spa_spares.sav_vdevs,
      VAR_9->spa_spares.sav_count * sizeof (void *));

 if (VAR_9->spa_spares.sav_config == ((void*)0))
  VAR_11 = 0;
 else
  FUNC_1(FUNC_6(VAR_9->spa_spares.sav_config,
      VAR_8, &VAR_10, &VAR_11) == 0);

 VAR_9->spa_spares.sav_count = (int)VAR_11;
 VAR_9->spa_spares.sav_vdevs = ((void*)0);

 if (VAR_11 == 0)
  return;
 VAR_9->spa_spares.sav_vdevs = FUNC_2(VAR_11 * sizeof (void *),
     VAR_3);
 for (VAR_12 = 0; VAR_12 < VAR_9->spa_spares.sav_count; VAR_12++) {
  FUNC_1(FUNC_9(VAR_9, &VAR_13, VAR_10[VAR_12], ((void*)0), 0,
      VAR_6) == 0);
  FUNC_0(VAR_13 != ((void*)0));

  VAR_9->spa_spares.sav_vdevs[VAR_12] = VAR_13;

  if ((VAR_14 = FUNC_10(VAR_9, VAR_13->vdev_guid,
      VAR_0)) != ((void*)0)) {
   if (!VAR_14->vdev_isspare)
    FUNC_12(VAR_14);
   if (!FUNC_18(VAR_14))
    FUNC_11(VAR_14);
  }

  VAR_13->vdev_top = VAR_13;
  VAR_13->vdev_aux = &VAR_9->spa_spares;

  if (FUNC_19(VAR_13) != 0)
   continue;

  if (FUNC_20(VAR_13) == 0)
   FUNC_12(VAR_13);
 }





 FUNC_1(FUNC_7(VAR_9->spa_spares.sav_config, VAR_8,
     VAR_2) == 0);

 VAR_10 = FUNC_2(VAR_9->spa_spares.sav_count * sizeof (void *),
     VAR_3);
 for (VAR_12 = 0; VAR_12 < VAR_9->spa_spares.sav_count; VAR_12++)
  VAR_10[VAR_12] = FUNC_16(VAR_9,
      VAR_9->spa_spares.sav_vdevs[VAR_12], VAR_1, VAR_7);
 FUNC_1(FUNC_4(VAR_9->spa_spares.sav_config,
     VAR_8, VAR_10, VAR_9->spa_spares.sav_count) == 0);
 for (VAR_12 = 0; VAR_12 < VAR_9->spa_spares.sav_count; VAR_12++)
  FUNC_5(VAR_10[VAR_12]);
 FUNC_3(VAR_10, VAR_9->spa_spares.sav_count * sizeof (void *));
}
