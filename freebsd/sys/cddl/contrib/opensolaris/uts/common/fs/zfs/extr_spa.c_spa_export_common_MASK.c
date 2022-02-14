
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int spa_state; scalar_t__ spa_inject_ref; scalar_t__ spa_config; int * spa_root_vdev; scalar_t__ spa_final_txg; int spa_dsl_pool; scalar_t__ spa_sync_on; } ;
typedef TYPE_1__ spa_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__,int **,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_9 (TYPE_1__*,int ,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int *,int *,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 TYPE_1__* FUNC_15 (char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_16 (TYPE_1__*,int ) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*,int ,int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,int ) ;

__attribute__((used)) static int
FUNC_24(char *VAR_16, int VAR_17, nvlist_t **VAR_18,
    boolean_t VAR_19, boolean_t VAR_20)
{
 spa_t *VAR_21;

 if (VAR_18)
  *VAR_18 = ((void*)0);

 if (!(VAR_14 & VAR_7))
  return (FUNC_0(VAR_3));

 FUNC_2(&VAR_15);
 if ((VAR_21 = FUNC_15(VAR_16)) == ((void*)0)) {
  FUNC_3(&VAR_15);
  return (FUNC_0(VAR_2));
 }





 FUNC_16(VAR_21, VAR_6);
 FUNC_3(&VAR_15);
 FUNC_6(VAR_21);
 FUNC_2(&VAR_15);
 FUNC_7(VAR_21, VAR_6);





 if (VAR_21->spa_state != VAR_9 && VAR_21->spa_sync_on) {





  FUNC_21(VAR_21->spa_dsl_pool, 0);
  FUNC_12(VAR_21);






  if (!FUNC_17(VAR_21) ||
      (VAR_21->spa_inject_ref != 0 &&
      VAR_17 != VAR_9)) {
   FUNC_5(VAR_21);
   FUNC_3(&VAR_15);
   return (FUNC_0(VAR_1));
  }







  if (!VAR_19 && VAR_17 == VAR_8 &&
      FUNC_13(VAR_21)) {
   FUNC_5(VAR_21);
   FUNC_3(&VAR_15);
   return (FUNC_0(VAR_5));
  }
  if (VAR_21->spa_root_vdev != ((void*)0)) {
   FUNC_23(VAR_21->spa_root_vdev,
       VAR_13);
  }






  if (VAR_17 != VAR_9 && !VAR_20) {
   FUNC_8(VAR_21, VAR_11, VAR_6, VAR_10);
   VAR_21->spa_state = VAR_17;
   VAR_21->spa_final_txg = FUNC_14(VAR_21) +
       VAR_12 + 1;
   FUNC_22(VAR_21->spa_root_vdev);
   FUNC_9(VAR_21, VAR_11, VAR_6);
  }
 }

 FUNC_11(VAR_21, ((void*)0), ((void*)0), VAR_4);

 if (VAR_21->spa_state != VAR_9) {
  FUNC_19(VAR_21);
  FUNC_10(VAR_21);
 }

 if (VAR_18 && VAR_21->spa_config)
  FUNC_1(FUNC_4(VAR_21->spa_config, VAR_18, 0) == 0);

 if (VAR_17 != VAR_9) {
  if (!VAR_20)
   FUNC_20(VAR_21, VAR_0, VAR_0);
  FUNC_18(VAR_21);
 }
 FUNC_3(&VAR_15);

 return (0);
}
