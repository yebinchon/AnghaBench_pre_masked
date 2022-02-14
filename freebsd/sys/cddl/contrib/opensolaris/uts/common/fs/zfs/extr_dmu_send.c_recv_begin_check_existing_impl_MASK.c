
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_25__ {TYPE_3__* dp_origin_snap; int dp_meta_objset; } ;
typedef TYPE_4__ dsl_pool_t ;
struct TYPE_26__ {TYPE_1__* ds_prev; TYPE_9__* ds_dir; } ;
typedef TYPE_5__ dsl_dataset_t ;
struct TYPE_27__ {scalar_t__ drba_snapobj; TYPE_2__* drba_cookie; int drba_cred; } ;
typedef TYPE_6__ dmu_recv_begin_arg_t ;
struct TYPE_28__ {TYPE_4__* dd_pool; } ;
struct TYPE_24__ {scalar_t__ ds_object; } ;
struct TYPE_23__ {scalar_t__ drc_force; int drc_tosnap; } ;
struct TYPE_22__ {scalar_t__ ds_object; } ;
struct TYPE_21__ {scalar_t__ ds_prev_snap_obj; scalar_t__ ds_guid; int ds_snapnames_zapobj; } ;
struct TYPE_20__ {int dd_child_dir_zapobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_4__*,scalar_t__,int ,TYPE_5__**) ;
 scalar_t__ FUNC_3 (TYPE_5__*,TYPE_5__*) ;
 TYPE_13__* FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 TYPE_10__* FUNC_6 (TYPE_9__*) ;
 int FUNC_7 (TYPE_9__*,int,int ,int *,int ) ;
 int VAR_7 ;
 int FUNC_8 (int ,int ,int ,int,int,scalar_t__*) ;

__attribute__((used)) static int
FUNC_9(dmu_recv_begin_arg_t *VAR_8, dsl_dataset_t *VAR_9,
    uint64_t VAR_10)
{
 uint64_t VAR_11;
 int VAR_12;
 dsl_pool_t *VAR_13 = VAR_9->ds_dir->dd_pool;


 VAR_12 = FUNC_8(VAR_13->dp_meta_objset,
     FUNC_6(VAR_9->ds_dir)->dd_child_dir_zapobj, VAR_7,
     8, 1, &VAR_11);
 if (VAR_12 != VAR_3)
  return (VAR_12 == 0 ? FUNC_0(VAR_0) : VAR_12);


 if (FUNC_1(VAR_9))
  return (FUNC_0(VAR_0));


 VAR_12 = FUNC_8(VAR_13->dp_meta_objset,
     FUNC_4(VAR_9)->ds_snapnames_zapobj,
     VAR_8->drba_cookie->drc_tosnap, 8, 1, &VAR_11);
 if (VAR_12 != VAR_3)
  return (VAR_12 == 0 ? FUNC_0(VAR_1) : VAR_12);
 VAR_12 = FUNC_7(VAR_9->ds_dir, 1, VAR_6,
     ((void*)0), VAR_8->drba_cred);
 if (VAR_12 != 0)
  return (VAR_12);

 if (VAR_10 != 0) {
  dsl_dataset_t *VAR_14;
  uint64_t VAR_15 = FUNC_4(VAR_9)->ds_prev_snap_obj;


  while (VAR_15 != 0) {
   VAR_12 = FUNC_2(VAR_13, VAR_15, VAR_5,
       &VAR_14);
   if (VAR_12 != 0)
    return (FUNC_0(VAR_2));
   if (VAR_14->ds_dir != VAR_9->ds_dir) {
    FUNC_5(VAR_14, VAR_5);
    return (FUNC_0(VAR_2));
   }
   if (FUNC_4(VAR_14)->ds_guid == VAR_10)
    break;
   VAR_15 = FUNC_4(VAR_14)->ds_prev_snap_obj;
   FUNC_5(VAR_14, VAR_5);
  }
  if (VAR_15 == 0)
   return (FUNC_0(VAR_2));

  if (VAR_8->drba_cookie->drc_force) {
   VAR_8->drba_snapobj = VAR_15;
  } else {




   if (FUNC_3(VAR_9, VAR_14)) {
    FUNC_5(VAR_14, VAR_5);
    return (FUNC_0(VAR_4));
   }
   VAR_8->drba_snapobj = VAR_9->ds_prev->ds_object;
  }

  FUNC_5(VAR_14, VAR_5);
 } else {

  if (!VAR_8->drba_cookie->drc_force)
   return (FUNC_0(VAR_1));

  VAR_8->drba_snapobj = VAR_13->dp_origin_snap != ((void*)0) ?
      VAR_13->dp_origin_snap->ds_object : 0;
 }

 return (0);

}
