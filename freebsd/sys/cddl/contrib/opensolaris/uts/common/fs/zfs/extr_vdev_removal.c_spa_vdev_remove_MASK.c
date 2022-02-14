
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {scalar_t__ vdev_islog; } ;
typedef TYPE_3__ vdev_t ;
typedef int uint_t ;
typedef int uint64_t ;
typedef int sysevent_t ;
struct TYPE_22__ {void* sav_sync; int sav_config; int * sav_vdevs; } ;
struct TYPE_21__ {void* sav_sync; int sav_config; int * sav_vdevs; } ;
struct TYPE_24__ {TYPE_2__ spa_l2cache; TYPE_1__ spa_spares; } ;
typedef TYPE_4__ spa_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char* FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ***,int *) ;
 int * FUNC_5 (TYPE_4__*,TYPE_3__*,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,char*,int *,char*,int ,int ,char*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*) ;
 TYPE_3__* FUNC_13 (TYPE_4__*,int ,void*) ;
 int FUNC_14 (TYPE_4__*) ;
 int VAR_13 ;
 int * FUNC_15 (int **,int ,int ) ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_4__*,int *,int ,int) ;
 int FUNC_18 (int ,int ,int **,int ,int *) ;
 int FUNC_19 (TYPE_3__*,int *) ;
 int FUNC_20 (TYPE_3__*,int *) ;
 int FUNC_21 (TYPE_4__*) ;

int
FUNC_22(spa_t *VAR_14, uint64_t VAR_15, boolean_t VAR_16)
{
 vdev_t *VAR_17;
 nvlist_t **VAR_18, **VAR_19, *VAR_20;
 uint64_t VAR_21 = 0;
 uint_t VAR_22, VAR_23;
 int VAR_24 = 0;
 boolean_t VAR_25 = FUNC_1(&VAR_13);
 sysevent_t *VAR_26 = ((void*)0);

 FUNC_0(FUNC_21(VAR_14));

 if (!VAR_25)
  VAR_21 = FUNC_16(VAR_14);

 FUNC_0(FUNC_1(&VAR_13));
 if (FUNC_8(VAR_14, VAR_5)) {
  VAR_24 = (FUNC_9(VAR_14)) ?
      VAR_8 : VAR_9;

  if (!VAR_25)
   return (FUNC_17(VAR_14, ((void*)0), VAR_21, VAR_24));

  return (VAR_24);
 }

 VAR_17 = FUNC_13(VAR_14, VAR_15, VAR_0);

 if (VAR_14->spa_spares.sav_vdevs != ((void*)0) &&
     FUNC_4(VAR_14->spa_spares.sav_config,
     VAR_12, &VAR_18, &VAR_22) == 0 &&
     (VAR_20 = FUNC_15(VAR_18, VAR_22, VAR_15)) != ((void*)0)) {




  if (VAR_17 == ((void*)0) || VAR_16) {
   char *VAR_27 = FUNC_3(VAR_20,
       VAR_11);
   FUNC_10(VAR_14, "vdev remove", ((void*)0),
       "%s vdev (%s) %s", FUNC_14(VAR_14),
       VAR_7, VAR_27);
   if (VAR_17 == ((void*)0))
    VAR_17 = FUNC_13(VAR_14, VAR_15, VAR_1);
   VAR_26 = FUNC_5(VAR_14, VAR_17, ((void*)0),
       VAR_4);
   FUNC_18(VAR_14->spa_spares.sav_config,
       VAR_12, VAR_18, VAR_22, VAR_20);
   FUNC_12(VAR_14);
   VAR_14->spa_spares.sav_sync = VAR_1;
  } else {
   VAR_24 = FUNC_2(VAR_2);
  }
 } else if (VAR_14->spa_l2cache.sav_vdevs != ((void*)0) &&
     FUNC_4(VAR_14->spa_l2cache.sav_config,
     VAR_10, &VAR_19, &VAR_23) == 0 &&
     (VAR_20 = FUNC_15(VAR_19, VAR_23, VAR_15)) != ((void*)0)) {
  char *VAR_28 = FUNC_3(VAR_20, VAR_11);
  FUNC_10(VAR_14, "vdev remove", ((void*)0),
      "%s vdev (%s) %s", FUNC_14(VAR_14), VAR_6, VAR_28);



  VAR_17 = FUNC_13(VAR_14, VAR_15, VAR_1);
  VAR_26 = FUNC_5(VAR_14, VAR_17, ((void*)0), VAR_4);
  FUNC_18(VAR_14->spa_l2cache.sav_config,
      VAR_10, VAR_19, VAR_23, VAR_20);
  FUNC_11(VAR_14);
  VAR_14->spa_l2cache.sav_sync = VAR_1;
 } else if (VAR_17 != ((void*)0) && VAR_17->vdev_islog) {
  FUNC_0(!VAR_25);
  VAR_24 = FUNC_19(VAR_17, &VAR_21);
 } else if (VAR_17 != ((void*)0)) {
  FUNC_0(!VAR_25);
  VAR_24 = FUNC_20(VAR_17, &VAR_21);
 } else {



  VAR_24 = FUNC_2(VAR_3);
 }

 if (!VAR_25)
  VAR_24 = FUNC_17(VAR_14, ((void*)0), VAR_21, VAR_24);

 if (VAR_26 != ((void*)0)) {
  if (VAR_24 != 0) {
   FUNC_6(VAR_26);
  } else {
   FUNC_7(VAR_26);
  }
 }

 return (VAR_24);
}
