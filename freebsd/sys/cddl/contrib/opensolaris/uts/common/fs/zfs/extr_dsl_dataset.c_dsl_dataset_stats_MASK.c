
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_24__ ;
typedef struct TYPE_30__ TYPE_21__ ;
typedef struct TYPE_29__ TYPE_1__ ;


typedef int uint64_t ;
typedef int recvname ;
typedef int nvlist_t ;
typedef int dsl_pool_t ;
struct TYPE_29__ {TYPE_21__* ds_dir; scalar_t__ ds_is_snapshot; } ;
typedef TYPE_1__ dsl_dataset_t ;
struct TYPE_31__ {scalar_t__ ds_prev_snap_obj; } ;
struct TYPE_30__ {int * dd_pool; } ;


 int FUNC_0 (int ) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_1 (int *,char*,int ,TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 TYPE_24__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_21__*,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (TYPE_1__*,char*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (TYPE_1__*) ;
 scalar_t__ FUNC_23 (TYPE_1__*,int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *,int ,char*) ;
 int FUNC_26 (int *,int ,int ) ;
 int FUNC_27 (TYPE_1__*,int *) ;
 int FUNC_28 (TYPE_1__*,int *) ;
 char* VAR_19 ;
 int FUNC_29 (char*,char*,int) ;

void
FUNC_30(dsl_dataset_t *VAR_20, nvlist_t *VAR_21)
{
 dsl_pool_t *VAR_22 = VAR_20->ds_dir->dd_pool;

 FUNC_0(FUNC_24(VAR_22));

 FUNC_26(VAR_21, VAR_13,
     FUNC_18(VAR_20));
 FUNC_26(VAR_21, VAR_8,
     FUNC_13(VAR_20));
 FUNC_26(VAR_21, VAR_3,
     FUNC_8(VAR_20));
 FUNC_26(VAR_21, VAR_16,
     FUNC_21(VAR_20));

 if (VAR_20->ds_is_snapshot) {
  FUNC_27(VAR_20, VAR_21);
 } else {
  char VAR_23[VAR_1];
  if (FUNC_15(VAR_20, VAR_23) == 0)
   FUNC_25(VAR_21, VAR_10,
       VAR_23);
  FUNC_6(VAR_20->ds_dir, VAR_21);
 }

 FUNC_26(VAR_21, VAR_2,
     FUNC_7(VAR_20));
 FUNC_26(VAR_21, VAR_11,
     FUNC_16(VAR_20));
 FUNC_26(VAR_21, VAR_5,
     FUNC_9(VAR_20));
 FUNC_26(VAR_21, VAR_4,
     FUNC_10(VAR_20));
 FUNC_26(VAR_21, VAR_12,
     FUNC_17(VAR_20));
 FUNC_26(VAR_21, VAR_14,
     FUNC_19(VAR_20));
 FUNC_26(VAR_21, VAR_7,
     FUNC_12(VAR_20));
 FUNC_26(VAR_21, VAR_15,
     FUNC_20(VAR_20));
 FUNC_26(VAR_21, VAR_9,
     FUNC_14(VAR_20));
 FUNC_26(VAR_21, VAR_17,
     FUNC_22(VAR_20));
 FUNC_26(VAR_21, VAR_6,
     FUNC_11(VAR_20));

 if (FUNC_4(VAR_20)->ds_prev_snap_obj != 0) {
  uint64_t VAR_24;
  if (FUNC_23(VAR_20, &VAR_24) == 0) {
   FUNC_26(VAR_21, VAR_18,
       VAR_24);
  }
 }

 if (!FUNC_2(VAR_20)) {




  FUNC_28(VAR_20, VAR_21);







  char VAR_25[VAR_1 + 6];
  dsl_dataset_t *VAR_26;
  FUNC_3(VAR_20, VAR_25);
  if (FUNC_29(VAR_25, "/", sizeof (VAR_25)) <
      sizeof (VAR_25) &&
      FUNC_29(VAR_25, VAR_19, sizeof (VAR_25)) <
      sizeof (VAR_25) &&
      FUNC_1(VAR_22, VAR_25, VAR_0, &VAR_26) == 0) {
   FUNC_28(VAR_26, VAR_21);
   FUNC_5(VAR_26, VAR_0);
  }
 }
}
