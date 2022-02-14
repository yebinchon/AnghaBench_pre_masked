
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int dsl_scan_t ;
struct TYPE_11__ {int * dp_scan; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_12__ {scalar_t__ ds_object; int ds_dir; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_14__ {scalar_t__ ds_prev_snap_obj; int ds_prev_snap_txg; } ;
struct TYPE_13__ {scalar_t__ dd_origin_obj; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int ,TYPE_2__**) ;
 TYPE_7__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 TYPE_5__* FUNC_3 (int ) ;
 int FUNC_4 (int *,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_5(dsl_pool_t *VAR_1, dsl_dataset_t *VAR_2, void *VAR_3)
{
 uint64_t VAR_4 = *(uint64_t *)VAR_3;
 dsl_dataset_t *VAR_5;
 int VAR_6;
 dsl_scan_t *VAR_7 = VAR_1->dp_scan;

 if (FUNC_3(VAR_2->ds_dir)->dd_origin_obj != VAR_4)
  return (0);

 VAR_6 = FUNC_0(VAR_1, VAR_2->ds_object, VAR_0, &VAR_5);
 if (VAR_6)
  return (VAR_6);

 while (FUNC_1(VAR_5)->ds_prev_snap_obj != VAR_4) {
  dsl_dataset_t *VAR_8;
  VAR_6 = FUNC_0(VAR_1,
      FUNC_1(VAR_5)->ds_prev_snap_obj, VAR_0, &VAR_8);

  FUNC_2(VAR_5, VAR_0);
  if (VAR_6)
   return (VAR_6);
  VAR_5 = VAR_8;
 }
 FUNC_4(VAR_7, VAR_5->ds_object,
     FUNC_1(VAR_5)->ds_prev_snap_txg);
 FUNC_2(VAR_5, VAR_0);
 return (0);
}
