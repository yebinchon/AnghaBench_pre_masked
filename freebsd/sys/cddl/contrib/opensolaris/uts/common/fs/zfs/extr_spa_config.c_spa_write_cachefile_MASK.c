
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int spa_import_flags; scalar_t__ spa_ccw_fail_time; int spa_config_list; int spa_props_lock; int * spa_config; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_19__ {int * scd_path; } ;
typedef TYPE_2__ spa_config_dirent_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,char*,int *) ;
 int * FUNC_3 () ;
 char* FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 (int *,TYPE_2__*) ;
 int FUNC_9 (int *,TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,char*,int **) ;
 int * VAR_9 ;
 int FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (int *) ;
 int VAR_10 ;
 int FUNC_16 (TYPE_2__*,int *) ;
 int FUNC_17 (TYPE_1__*,int *,int *,int ) ;
 int VAR_11 ;
 char* FUNC_18 (TYPE_1__*) ;
 int VAR_12 ;
 TYPE_1__* FUNC_19 (TYPE_1__*) ;
 scalar_t__ FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (TYPE_1__*) ;
 scalar_t__ FUNC_23 (int *,int *) ;
 int FUNC_24 (int ,TYPE_1__*,int *,int *,int ,int ) ;

void
FUNC_25(spa_t *VAR_13, boolean_t VAR_14, boolean_t VAR_15)
{
 spa_config_dirent_t *VAR_16, *VAR_17;
 nvlist_t *VAR_18;
 boolean_t VAR_19;
 int VAR_20;
 char *VAR_21;

 FUNC_0(FUNC_1(&VAR_12));

 if (VAR_9 == ((void*)0) || !(VAR_11 & VAR_4))
  return;






 VAR_19 = VAR_0;
 for (VAR_16 = FUNC_7(&VAR_13->spa_config_list); VAR_16 != ((void*)0);
     VAR_16 = FUNC_8(&VAR_13->spa_config_list, VAR_16)) {
  spa_t *VAR_22 = ((void*)0);
  if (VAR_16->scd_path == ((void*)0))
   continue;




  VAR_18 = ((void*)0);
  while ((VAR_22 = FUNC_19(VAR_22)) != ((void*)0)) {
   nvlist_t *VAR_23 = ((void*)0);







   if ((VAR_22 == VAR_13 && VAR_14) ||
       (FUNC_20(VAR_22) == VAR_5 &&
       !FUNC_22(VAR_22)))
    continue;

   FUNC_10(&VAR_22->spa_props_lock);
   VAR_17 = FUNC_7(&VAR_22->spa_config_list);
   if (VAR_22->spa_config == ((void*)0) ||
       VAR_17->scd_path == ((void*)0) ||
       FUNC_23(VAR_17->scd_path, VAR_16->scd_path) != 0) {
    FUNC_11(&VAR_22->spa_props_lock);
    continue;
   }

   if (VAR_18 == ((void*)0))
    VAR_18 = FUNC_3();

   if (VAR_22->spa_import_flags & VAR_7) {
    VAR_21 = FUNC_4(
        VAR_22->spa_config, VAR_8);
   } else {
    VAR_21 = FUNC_18(VAR_22);
   }

   FUNC_2(VAR_18, VAR_21,
       VAR_22->spa_config);
   FUNC_11(&VAR_22->spa_props_lock);

   if (FUNC_13(VAR_18, VAR_21, &VAR_23) == 0)
    FUNC_15(VAR_23);
  }

  VAR_20 = FUNC_16(VAR_16, VAR_18);
  if (VAR_20 != 0)
   VAR_19 = VAR_1;
  FUNC_12(VAR_18);
 }

 if (VAR_19) {





  if (VAR_13->spa_ccw_fail_time == 0) {
   FUNC_24(VAR_3,
       VAR_13, ((void*)0), ((void*)0), 0, 0);
  }
  VAR_13->spa_ccw_fail_time = FUNC_5();
  FUNC_14(VAR_13, VAR_6);
 } else {




  VAR_13->spa_ccw_fail_time = 0;
 }




 VAR_16 = FUNC_7(&VAR_13->spa_config_list);
 while ((VAR_17 = FUNC_8(&VAR_13->spa_config_list, VAR_16)) != ((void*)0)) {
  FUNC_9(&VAR_13->spa_config_list, VAR_17);
  if (VAR_17->scd_path != ((void*)0))
   FUNC_21(VAR_17->scd_path);
  FUNC_6(VAR_17, sizeof (spa_config_dirent_t));
 }

 VAR_10++;

 if (VAR_15)
  FUNC_17(VAR_13, ((void*)0), ((void*)0), VAR_2);
}
