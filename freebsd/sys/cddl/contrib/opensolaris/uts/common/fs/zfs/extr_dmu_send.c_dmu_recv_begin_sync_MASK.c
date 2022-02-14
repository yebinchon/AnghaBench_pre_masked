
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int uint64_t ;
struct drr_begin {int drr_flags; scalar_t__ drr_fromguid; int drr_toguid; int* drr_toname; int drr_type; int drr_versioninfo; } ;
typedef int objset_t ;
struct TYPE_22__ {int dp_spa; int * dp_meta_objset; } ;
typedef TYPE_2__ dsl_pool_t ;
typedef int dsl_dir_t ;
struct TYPE_23__ {int ds_bp_rwlock; int ds_dbuf; int * ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_24__ {scalar_t__ drba_snapobj; char const* drba_origin; TYPE_1__* drba_cookie; int drba_cred; } ;
typedef TYPE_4__ dmu_recv_begin_arg_t ;
struct TYPE_25__ {int ds_flags; } ;
struct TYPE_21__ {char* drc_tofs; TYPE_3__* drc_ds; scalar_t__ drc_resumable; int drc_newfs; struct drr_begin* drc_drrb; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
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
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,TYPE_3__*,int ,int ,int *) ;
 int VAR_18 ;
 TYPE_2__* FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__,TYPE_3__*,int,int ,int *) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_2__*,char const*,int ,TYPE_3__**) ;
 int FUNC_9 (TYPE_2__*,scalar_t__,int ,TYPE_3__**) ;
 int FUNC_10 (TYPE_2__*,int,int ,TYPE_3__**) ;
 TYPE_9__* FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,int ) ;
 int FUNC_13 (TYPE_3__*,int *) ;
 int FUNC_14 (TYPE_2__*,char const*,int ,int **,char const**) ;
 int FUNC_15 (int *,int ) ;
 scalar_t__ VAR_19 ;
 int FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (TYPE_3__*,char*,int *,char*) ;
 int FUNC_19 (int*) ;
 scalar_t__ FUNC_20 (char const*,char) ;
 int FUNC_21 (int *,int,int ,int,int,int*,int *) ;

__attribute__((used)) static void
FUNC_22(void *VAR_20, dmu_tx_t *VAR_21)
{
 dmu_recv_begin_arg_t *VAR_22 = VAR_20;
 dsl_pool_t *VAR_23 = FUNC_5(VAR_21);
 objset_t *VAR_24 = VAR_23->dp_meta_objset;
 struct drr_begin *VAR_25 = VAR_22->drba_cookie->drc_drrb;
 const char *VAR_26 = VAR_22->drba_cookie->drc_tofs;
 dsl_dataset_t *VAR_27, *VAR_28;
 uint64_t VAR_29;
 int VAR_30;
 uint64_t VAR_31 = 0;

 if (VAR_25->drr_flags & VAR_4)
  VAR_31 |= VAR_14;

 VAR_30 = FUNC_8(VAR_23, VAR_26, VAR_16, &VAR_27);
 if (VAR_30 == 0) {

  dsl_dataset_t *VAR_32 = ((void*)0);
  if (VAR_22->drba_snapobj != 0) {
   FUNC_2(FUNC_9(VAR_23,
       VAR_22->drba_snapobj, VAR_16, &VAR_32));
  }
  VAR_29 = FUNC_6(VAR_27->ds_dir, VAR_19,
      VAR_32, VAR_31, VAR_22->drba_cred, VAR_21);
  if (VAR_22->drba_snapobj != 0)
   FUNC_12(VAR_32, VAR_16);
  FUNC_12(VAR_27, VAR_16);
 } else {
  dsl_dir_t *VAR_33;
  const char *VAR_34;
  dsl_dataset_t *VAR_35 = ((void*)0);

  FUNC_2(FUNC_14(VAR_23, VAR_26, VAR_16, &VAR_33, &VAR_34));

  if (VAR_22->drba_origin != ((void*)0)) {
   FUNC_2(FUNC_8(VAR_23, VAR_22->drba_origin,
       VAR_16, &VAR_35));
  }


  VAR_29 = FUNC_6(VAR_33,
      FUNC_20(VAR_26, '/') + 1,
      VAR_35, VAR_31, VAR_22->drba_cred, VAR_21);
  if (VAR_35 != ((void*)0))
   FUNC_12(VAR_35, VAR_16);
  FUNC_15(VAR_33, VAR_16);
  VAR_22->drba_cookie->drc_newfs = VAR_0;
 }
 FUNC_2(FUNC_10(VAR_23, VAR_29, VAR_18, &VAR_28));

 if (VAR_22->drba_cookie->drc_resumable) {
  FUNC_13(VAR_28, VAR_21);
  if (VAR_25->drr_fromguid != 0) {
   FUNC_2(FUNC_21(VAR_24, VAR_29, VAR_8,
       8, 1, &VAR_25->drr_fromguid, VAR_21));
  }
  FUNC_2(FUNC_21(VAR_24, VAR_29, VAR_12,
      8, 1, &VAR_25->drr_toguid, VAR_21));
  FUNC_2(FUNC_21(VAR_24, VAR_29, VAR_13,
      1, FUNC_19(VAR_25->drr_toname) + 1, VAR_25->drr_toname, VAR_21));
  uint64_t VAR_36 = 1;
  uint64_t VAR_37 = 0;
  FUNC_2(FUNC_21(VAR_24, VAR_29, VAR_10,
      8, 1, &VAR_36, VAR_21));
  FUNC_2(FUNC_21(VAR_24, VAR_29, VAR_11,
      8, 1, &VAR_37, VAR_21));
  FUNC_2(FUNC_21(VAR_24, VAR_29, VAR_5,
      8, 1, &VAR_37, VAR_21));
  if (FUNC_1(VAR_25->drr_versioninfo) &
      VAR_3) {
   FUNC_2(FUNC_21(VAR_24, VAR_29, VAR_9,
       8, 1, &VAR_36, VAR_21));
  }
  if (FUNC_1(VAR_25->drr_versioninfo) &
      VAR_2) {
   FUNC_2(FUNC_21(VAR_24, VAR_29, VAR_7,
       8, 1, &VAR_36, VAR_21));
  }
  if (FUNC_1(VAR_25->drr_versioninfo) &
      VAR_1) {
   FUNC_2(FUNC_21(VAR_24, VAR_29, VAR_6,
       8, 1, &VAR_36, VAR_21));
  }
 }

 FUNC_3(VAR_28->ds_dbuf, VAR_21);
 FUNC_11(VAR_28)->ds_flags |= VAR_15;





 FUNC_16(&VAR_28->ds_bp_rwlock, VAR_17, VAR_16);
 if (FUNC_0(FUNC_7(VAR_28))) {
  (void) FUNC_4(VAR_23->dp_spa,
      VAR_28, FUNC_7(VAR_28), VAR_25->drr_type, VAR_21);
 }
 FUNC_17(&VAR_28->ds_bp_rwlock, VAR_16);

 VAR_22->drba_cookie->drc_ds = VAR_28;

 FUNC_18(VAR_28, "receive", VAR_21, "");
}
