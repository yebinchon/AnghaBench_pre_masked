
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int objset_t ;
struct TYPE_10__ {int * dp_meta_objset; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_11__ {int ds_object; TYPE_6__* ds_dir; } ;
typedef TYPE_2__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_13__ {int dd_dbuf; } ;
struct TYPE_12__ {scalar_t__ dd_origin_obj; scalar_t__ dd_clones; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int ,TYPE_2__**) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 TYPE_5__* FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int *,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_6 (int *,int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_7(dsl_pool_t *VAR_3, dsl_dataset_t *VAR_4, void *VAR_5)
{
 dmu_tx_t *VAR_6 = VAR_5;
 objset_t *VAR_7 = VAR_3->dp_meta_objset;

 if (FUNC_4(VAR_4->ds_dir)->dd_origin_obj != 0) {
  dsl_dataset_t *VAR_8;

  FUNC_0(FUNC_2(VAR_3,
      FUNC_4(VAR_4->ds_dir)->dd_origin_obj, VAR_2, &VAR_8));

  if (FUNC_4(VAR_8->ds_dir)->dd_clones == 0) {
   FUNC_1(VAR_8->ds_dir->dd_dbuf, VAR_6);
   FUNC_4(VAR_8->ds_dir)->dd_clones =
       FUNC_6(VAR_7, VAR_0, VAR_1,
       0, VAR_6);
  }

  FUNC_0(FUNC_5(VAR_3->dp_meta_objset,
      FUNC_4(VAR_8->ds_dir)->dd_clones,
      VAR_4->ds_object, VAR_6));

  FUNC_3(VAR_8, VAR_2);
 }
 return (0);
}
