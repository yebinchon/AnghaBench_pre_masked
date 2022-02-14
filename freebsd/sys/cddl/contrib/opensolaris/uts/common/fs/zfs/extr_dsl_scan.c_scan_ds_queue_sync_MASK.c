
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int spa_t ;
struct TYPE_10__ {int sds_txg; int sds_dsobj; } ;
typedef TYPE_2__ scan_ds_t ;
struct TYPE_9__ {int scn_queue_obj; } ;
struct TYPE_11__ {TYPE_1__ scn_phys; int scn_queue; int scn_bytes_pending; TYPE_4__* scn_dp; } ;
typedef TYPE_3__ dsl_scan_t ;
struct TYPE_12__ {int dp_meta_objset; int * dp_spa; } ;
typedef TYPE_4__ dsl_pool_t ;
typedef int dmu_tx_t ;
typedef int dmu_object_type_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int *,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ,int ,int *) ;
 int FUNC_8 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_9(dsl_scan_t *VAR_4, dmu_tx_t *VAR_5)
{
 dsl_pool_t *VAR_6 = VAR_4->scn_dp;
 spa_t *VAR_7 = VAR_6->dp_spa;
 dmu_object_type_t VAR_8 = (FUNC_6(VAR_7) >= VAR_3) ?
     VAR_1 : VAR_2;

 FUNC_1(VAR_4->scn_bytes_pending);
 FUNC_0(VAR_4->scn_phys.scn_queue_obj != 0);

 FUNC_3(FUNC_5(VAR_6->dp_meta_objset,
     VAR_4->scn_phys.scn_queue_obj, VAR_5));
 VAR_4->scn_phys.scn_queue_obj = FUNC_8(VAR_6->dp_meta_objset, VAR_8,
     VAR_0, 0, VAR_5);
 for (scan_ds_t *VAR_9 = FUNC_4(&VAR_4->scn_queue);
     VAR_9 != ((void*)0); VAR_9 = FUNC_2(&VAR_4->scn_queue, VAR_9)) {
  FUNC_3(FUNC_7(VAR_6->dp_meta_objset,
      VAR_4->scn_phys.scn_queue_obj, VAR_9->sds_dsobj,
      VAR_9->sds_txg, VAR_5));
 }
}
