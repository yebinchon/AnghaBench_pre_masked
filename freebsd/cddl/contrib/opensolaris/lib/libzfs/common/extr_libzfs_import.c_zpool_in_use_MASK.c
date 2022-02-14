
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef int uint64_t ;
typedef scalar_t__ pool_state_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {int cb_guid; int * cb_zhp; int cb_type; int member_0; } ;
typedef TYPE_1__ aux_cbdata_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;



 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int **) ;
 scalar_t__ FUNC_4 (int *,int ,char**) ;
 scalar_t__ FUNC_5 (int *,int ,int*) ;
 int FUNC_6 (int *,char*,int,scalar_t__*) ;
 int FUNC_7 (int) ;
 char* FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int *) ;
 int FUNC_13 (int *,int ,TYPE_1__*) ;
 int * FUNC_14 (int *,char*) ;
 scalar_t__ FUNC_15 (int,int **) ;

int
FUNC_16(libzfs_handle_t *VAR_15, int VAR_16, pool_state_t *VAR_17, char **VAR_18,
    boolean_t *VAR_19)
{
 nvlist_t *VAR_20;
 char *VAR_21;
 boolean_t VAR_22;
 uint64_t VAR_23, VAR_24;
 zpool_handle_t *VAR_25;
 nvlist_t *VAR_26;
 uint64_t VAR_27, VAR_28;
 aux_cbdata_t VAR_29 = { 0 };
 boolean_t VAR_30;

 *VAR_19 = VAR_0;

 if (FUNC_15(VAR_16, &VAR_20) != 0 && VAR_13 == VAR_2) {
  (void) FUNC_1(VAR_15);
  return (-1);
 }

 if (VAR_20 == ((void*)0))
  return (0);

 FUNC_7(FUNC_5(VAR_20, VAR_9,
     &VAR_27) == 0);
 FUNC_7(FUNC_5(VAR_20, VAR_4,
     &VAR_24) == 0);

 if (VAR_27 != 128 && VAR_27 != 129) {
  FUNC_7(FUNC_4(VAR_20, VAR_8,
      &VAR_21) == 0);
  FUNC_7(FUNC_5(VAR_20, VAR_7,
      &VAR_23) == 0);
 }

 switch (VAR_27) {
 case 130:






  if (FUNC_6(VAR_15, VAR_21, VAR_23, &VAR_30) == 0 && VAR_30 &&
      (VAR_25 = FUNC_14(VAR_15, VAR_21)) != ((void*)0)) {
   if (FUNC_12(VAR_25, VAR_12, ((void*)0)))
    VAR_27 = 131;





   FUNC_9(VAR_25);
  }

  VAR_22 = VAR_1;
  break;

 case 131:







  if (FUNC_6(VAR_15, VAR_21, VAR_23, &VAR_30) != 0) {
   FUNC_2(VAR_20);
   return (-1);
  }

  if (VAR_30) {






   if ((VAR_25 = FUNC_14(VAR_15, VAR_21)) != ((void*)0) &&
       (VAR_26 = FUNC_10(VAR_25, ((void*)0)))
       != ((void*)0)) {
    nvlist_t *VAR_31;

    FUNC_7(FUNC_3(VAR_26,
        VAR_11, &VAR_31) == 0);
    VAR_22 = FUNC_0(VAR_31, VAR_24);
   } else {
    VAR_22 = VAR_0;
   }
   if (VAR_22 && FUNC_5(VAR_20,
       VAR_5, &VAR_28) == 0 && VAR_28)
    VAR_27 = 128;

   if (VAR_25 != ((void*)0))
    FUNC_9(VAR_25);
  } else {
   VAR_27 = VAR_3;
   VAR_22 = VAR_1;
  }
  break;

 case 128:
  VAR_29.cb_zhp = ((void*)0);
  VAR_29.cb_guid = VAR_24;
  VAR_29.cb_type = VAR_10;
  if (FUNC_13(VAR_15, VAR_14, &VAR_29) == 1) {
   VAR_21 = (char *)FUNC_11(VAR_29.cb_zhp);
   VAR_22 = VAR_1;
  } else {
   VAR_22 = VAR_0;
  }
  break;

 case 129:




  VAR_29.cb_zhp = ((void*)0);
  VAR_29.cb_guid = VAR_24;
  VAR_29.cb_type = VAR_6;
  if (FUNC_13(VAR_15, VAR_14, &VAR_29) == 1) {
   VAR_21 = (char *)FUNC_11(VAR_29.cb_zhp);
   VAR_22 = VAR_1;
  } else {
   VAR_22 = VAR_0;
  }
  break;

 default:
  VAR_22 = VAR_0;
 }


 if (VAR_22) {
  if ((*VAR_18 = FUNC_8(VAR_15, VAR_21)) == ((void*)0)) {
   if (VAR_29.cb_zhp)
    FUNC_9(VAR_29.cb_zhp);
   FUNC_2(VAR_20);
   return (-1);
  }
  *VAR_17 = (pool_state_t)VAR_27;
 }

 if (VAR_29.cb_zhp)
  FUNC_9(VAR_29.cb_zhp);

 FUNC_2(VAR_20);
 *VAR_19 = VAR_22;
 return (0);
}
