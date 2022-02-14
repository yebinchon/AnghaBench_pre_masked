
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zprop_source_t ;
typedef int zpool_prop_t ;
typedef int zap_cursor_t ;
struct TYPE_7__ {int za_integer_length; int za_num_integers; int za_name; int za_first_integer; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef int uint64_t ;
struct TYPE_8__ {scalar_t__ spa_pool_props_object; int spa_props_lock; int * spa_meta_objset; } ;
typedef TYPE_2__ spa_t ;
typedef int objset_t ;
typedef int nvlist_t ;
typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ,int ,int **) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 char* FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int **,int ,int ) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int *,int ,char*,int ,int ) ;
 int FUNC_14 (TYPE_2__*,int **) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int *,scalar_t__) ;
 int FUNC_18 (int *,TYPE_1__*) ;
 int FUNC_19 (int *,scalar_t__,int ,int,int ,char*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;

int
FUNC_22(spa_t *VAR_9, nvlist_t **VAR_10)
{
 objset_t *VAR_11 = VAR_9->spa_meta_objset;
 zap_cursor_t VAR_12;
 zap_attribute_t VAR_13;
 int VAR_14;

 FUNC_0(FUNC_10(VAR_10, VAR_3, VAR_2) == 0);

 FUNC_8(&VAR_9->spa_props_lock);




 FUNC_14(VAR_9, VAR_10);


 if (VAR_11 == ((void*)0) || VAR_9->spa_pool_props_object == 0) {
  FUNC_9(&VAR_9->spa_props_lock);
  return (0);
 }




 for (FUNC_17(&VAR_12, VAR_11, VAR_9->spa_pool_props_object);
     (VAR_14 = FUNC_18(&VAR_12, &VAR_13)) == 0;
     FUNC_15(&VAR_12)) {
  uint64_t VAR_15 = 0;
  char *VAR_16 = ((void*)0);
  zprop_source_t VAR_17 = VAR_7;
  zpool_prop_t VAR_18;

  if ((VAR_18 = FUNC_20(VAR_13.za_name)) == VAR_6)
   continue;

  switch (VAR_13.za_integer_length) {
  case 8:

   if (VAR_13.za_first_integer !=
       FUNC_21(VAR_18))
    VAR_17 = VAR_8;

   if (VAR_18 == VAR_5) {
    dsl_pool_t *VAR_19;
    dsl_dataset_t *VAR_20 = ((void*)0);

    VAR_19 = FUNC_12(VAR_9);
    FUNC_4(VAR_19, VAR_1);
    VAR_14 = FUNC_1(VAR_19,
        VAR_13.za_first_integer, VAR_1, &VAR_20);
    if (VAR_14 != 0) {
     FUNC_5(VAR_19, VAR_1);
     break;
    }

    VAR_16 = FUNC_6(VAR_4,
        VAR_2);
    FUNC_2(VAR_20, VAR_16);
    FUNC_3(VAR_20, VAR_1);
    FUNC_5(VAR_19, VAR_1);
   } else {
    VAR_16 = ((void*)0);
    VAR_15 = VAR_13.za_first_integer;
   }

   FUNC_13(*VAR_10, VAR_18, VAR_16, VAR_15, VAR_17);

   if (VAR_16 != ((void*)0))
    FUNC_7(VAR_16, VAR_4);

   break;

  case 1:

   VAR_16 = FUNC_6(VAR_13.za_num_integers, VAR_2);
   VAR_14 = FUNC_19(VAR_11, VAR_9->spa_pool_props_object,
       VAR_13.za_name, 1, VAR_13.za_num_integers, VAR_16);
   if (VAR_14) {
    FUNC_7(VAR_16, VAR_13.za_num_integers);
    break;
   }
   FUNC_13(*VAR_10, VAR_18, VAR_16, 0, VAR_17);
   FUNC_7(VAR_16, VAR_13.za_num_integers);
   break;

  default:
   break;
  }
 }
 FUNC_16(&VAR_12);
 FUNC_9(&VAR_9->spa_props_lock);
out:
 if (VAR_14 && VAR_14 != VAR_0) {
  FUNC_11(*VAR_10);
  *VAR_10 = ((void*)0);
  return (VAR_14);
 }

 return (0);
}
