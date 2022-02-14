
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef scalar_t__ int64_t ;
typedef int dsl_pool_t ;
struct TYPE_15__ {scalar_t__ ds_dir; scalar_t__ ds_object; scalar_t__ ds_quota; int ds_reserved; struct TYPE_15__* ds_prev; scalar_t__ ds_is_snapshot; } ;
typedef TYPE_1__ dsl_dataset_t ;
struct TYPE_16__ {int ddra_owner; int * ddra_tosnap; int * ddra_fsname; } ;
typedef TYPE_2__ dsl_dataset_rollback_arg_t ;
struct TYPE_17__ {scalar_t__ tx_txg; } ;
typedef TYPE_3__ dmu_tx_t ;
struct TYPE_19__ {scalar_t__ ds_prev_snap_txg; scalar_t__ ds_referenced_bytes; int ds_unique_bytes; } ;
struct TYPE_18__ {scalar_t__ dd_origin_obj; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int * FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*,int ,TYPE_3__*) ;
 int FUNC_6 (int *,int *,int ,TYPE_1__**) ;
 TYPE_8__* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 TYPE_5__* FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,int *,int ,int ) ;
 int FUNC_12 (TYPE_1__*,int *,int *) ;
 int FUNC_13 (int *,int ) ;
 int * FUNC_14 () ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (int ,int ) ;
 scalar_t__ FUNC_17 (int *,char*) ;
 int FUNC_18 (int *) ;
 int * FUNC_19 (int *,int *) ;
 int FUNC_20 (int ) ;

int
FUNC_21(void *VAR_12, dmu_tx_t *VAR_13)
{
 dsl_dataset_rollback_arg_t *VAR_14 = VAR_12;
 dsl_pool_t *VAR_15 = FUNC_4(VAR_13);
 dsl_dataset_t *VAR_16;
 int64_t VAR_17;
 int VAR_18;

 VAR_18 = FUNC_6(VAR_15, VAR_14->ddra_fsname, VAR_8, &VAR_16);
 if (VAR_18 != 0)
  return (VAR_18);


 if (VAR_16->ds_is_snapshot) {
  FUNC_8(VAR_16, VAR_8);
  return (FUNC_2(VAR_3));
 }


 if (FUNC_7(VAR_16)->ds_prev_snap_txg < VAR_10) {
  FUNC_8(VAR_16, VAR_8);
  return (FUNC_2(VAR_6));
 }







 if (FUNC_3(VAR_13) &&
     FUNC_7(VAR_16)->ds_prev_snap_txg >= VAR_13->tx_txg) {
  FUNC_8(VAR_16, VAR_8);
  return (FUNC_2(VAR_0));
 }





 if (VAR_14->ddra_tosnap != ((void*)0)) {
  dsl_dataset_t *VAR_19;


  VAR_18 = FUNC_6(VAR_15, VAR_14->ddra_tosnap, VAR_8, &VAR_19);
  if (VAR_18 != 0) {
   if (VAR_18 == VAR_4 || VAR_18 == VAR_7)
    VAR_18 = FUNC_2(VAR_6);
   FUNC_8(VAR_16, VAR_8);
   return (VAR_18);
  }
  FUNC_0(VAR_19->ds_is_snapshot);


  if (VAR_19 != VAR_16->ds_prev) {





   if (VAR_19->ds_dir == VAR_16->ds_dir ||
       (FUNC_9(VAR_16->ds_dir) &&
       FUNC_10(VAR_16->ds_dir)->dd_origin_obj ==
       VAR_19->ds_object)) {
    VAR_18 = FUNC_2(VAR_2);
   } else {
    VAR_18 = FUNC_2(VAR_6);
   }
   FUNC_8(VAR_19, VAR_8);
   FUNC_8(VAR_16, VAR_8);
   return (VAR_18);
  }
  FUNC_8(VAR_19, VAR_8);
 }


 nvlist_t *VAR_20 = FUNC_14();
 FUNC_13(VAR_20, FUNC_20(VAR_11));
 nvlist_t *VAR_21 = FUNC_14();
 VAR_18 = FUNC_12(VAR_16, VAR_20, VAR_21);
 FUNC_15(VAR_20);
 if (VAR_18 != 0) {
  FUNC_8(VAR_16, VAR_8);
  return (VAR_18);
 }
 for (nvpair_t *VAR_22 = FUNC_19(VAR_21, ((void*)0));
     VAR_22 != ((void*)0); VAR_22 = FUNC_19(VAR_21, VAR_22)) {
  nvlist_t *VAR_23 =
      FUNC_16(FUNC_18(VAR_22),
      FUNC_20(VAR_11));
  uint64_t VAR_24 = FUNC_17(VAR_23, "value");
  if (VAR_24 > FUNC_7(VAR_16)->ds_prev_snap_txg) {
   FUNC_15(VAR_21);
   FUNC_8(VAR_16, VAR_8);
   return (FUNC_2(VAR_2));
  }
 }
 FUNC_15(VAR_21);

 VAR_18 = FUNC_5(VAR_16, VAR_14->ddra_owner, VAR_13);
 if (VAR_18 != 0) {
  FUNC_8(VAR_16, VAR_8);
  return (VAR_18);
 }





 if (VAR_16->ds_quota != 0 &&
     FUNC_7(VAR_16->ds_prev)->ds_referenced_bytes > VAR_16->ds_quota) {
  FUNC_8(VAR_16, VAR_8);
  return (FUNC_2(VAR_1));
 }
 VAR_17 = (int64_t)FUNC_1(VAR_16->ds_reserved,
     FUNC_7(VAR_16)->ds_unique_bytes);

 if (VAR_17 > 0 &&
     VAR_17 >
     FUNC_11(VAR_16->ds_dir, ((void*)0), 0, VAR_9)) {
  FUNC_8(VAR_16, VAR_8);
  return (FUNC_2(VAR_5));
 }

 FUNC_8(VAR_16, VAR_8);
 return (0);
}
