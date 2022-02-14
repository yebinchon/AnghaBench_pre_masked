
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_11__ {int za_first_integer; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_12__ {int ds_remap_deadlist; int ds_deadlist; TYPE_5__* ds_dir; } ;
typedef TYPE_2__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_15__ {int * dp_meta_objset; } ;
struct TYPE_14__ {int dd_origin_txg; TYPE_9__* dd_pool; } ;
struct TYPE_13__ {scalar_t__ dd_clones; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_9__*,int ,int ,TYPE_2__**) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ,int *) ;
 TYPE_4__* FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_9 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_10(dsl_dataset_t *VAR_1, uint64_t VAR_2, dmu_tx_t *VAR_3)
{
 objset_t *VAR_4 = VAR_1->ds_dir->dd_pool->dp_meta_objset;
 zap_cursor_t VAR_5;
 zap_attribute_t VAR_6;






 if (FUNC_5(VAR_1->ds_dir)->dd_clones == 0)
  return;

 for (FUNC_8(&VAR_5, VAR_4, FUNC_5(VAR_1->ds_dir)->dd_clones);
     FUNC_9(&VAR_5, &VAR_6) == 0;
     FUNC_6(&VAR_5)) {
  dsl_dataset_t *VAR_7;

  FUNC_0(FUNC_1(VAR_1->ds_dir->dd_pool,
      VAR_6.za_first_integer, VAR_0, &VAR_7));
  if (VAR_7->ds_dir->dd_origin_txg > VAR_2) {
   FUNC_4(&VAR_7->ds_deadlist,
       VAR_2, VAR_3);
   if (FUNC_3(VAR_7)) {
    FUNC_4(
        &VAR_7->ds_remap_deadlist, VAR_2, VAR_3);
   }
   FUNC_10(VAR_7, VAR_2, VAR_3);
  }
  FUNC_2(VAR_7, VAR_0);
 }
 FUNC_7(&VAR_5);
}
