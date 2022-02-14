
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int zio_t ;
typedef size_t spa_feature_t ;
struct TYPE_14__ {scalar_t__* ds_resume_bytes; scalar_t__* ds_resume_object; scalar_t__* ds_resume_offset; scalar_t__* ds_feature_inuse; int ds_object; scalar_t__* ds_feature_activation_needed; int * ds_objset; int ds_fsid_guid; int ds_dbuf; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_15__ {size_t tx_txg; TYPE_1__* tx_pool; } ;
typedef TYPE_3__ dmu_tx_t ;
struct TYPE_16__ {scalar_t__ ds_next_snap_obj; int ds_fsid_guid; } ;
struct TYPE_13__ {int dp_meta_objset; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (int *,int *,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,size_t,TYPE_3__*) ;
 TYPE_7__* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int ,int ,int,int,scalar_t__*,TYPE_3__*) ;

void
FUNC_8(dsl_dataset_t *VAR_6, zio_t *VAR_7, dmu_tx_t *VAR_8)
{
 FUNC_0(FUNC_4(VAR_8));
 FUNC_0(VAR_6->ds_objset != ((void*)0));
 FUNC_0(FUNC_6(VAR_6)->ds_next_snap_obj == 0);





 FUNC_2(VAR_6->ds_dbuf, VAR_8);
 FUNC_6(VAR_6)->ds_fsid_guid = VAR_6->ds_fsid_guid;

 if (VAR_6->ds_resume_bytes[VAR_8->tx_txg & VAR_5] != 0) {
  FUNC_1(FUNC_7(VAR_8->tx_pool->dp_meta_objset,
      VAR_6->ds_object, VAR_2, 8, 1,
      &VAR_6->ds_resume_object[VAR_8->tx_txg & VAR_5], VAR_8));
  FUNC_1(FUNC_7(VAR_8->tx_pool->dp_meta_objset,
      VAR_6->ds_object, VAR_3, 8, 1,
      &VAR_6->ds_resume_offset[VAR_8->tx_txg & VAR_5], VAR_8));
  FUNC_1(FUNC_7(VAR_8->tx_pool->dp_meta_objset,
      VAR_6->ds_object, VAR_1, 8, 1,
      &VAR_6->ds_resume_bytes[VAR_8->tx_txg & VAR_5], VAR_8));
  VAR_6->ds_resume_object[VAR_8->tx_txg & VAR_5] = 0;
  VAR_6->ds_resume_offset[VAR_8->tx_txg & VAR_5] = 0;
  VAR_6->ds_resume_bytes[VAR_8->tx_txg & VAR_5] = 0;
 }

 FUNC_3(VAR_6->ds_objset, VAR_7, VAR_8);

 for (spa_feature_t VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  if (VAR_6->ds_feature_activation_needed[VAR_9]) {
   if (VAR_6->ds_feature_inuse[VAR_9])
    continue;
   FUNC_5(VAR_6->ds_object, VAR_9, VAR_8);
   VAR_6->ds_feature_inuse[VAR_9] = VAR_0;
  }
 }
}
