
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zl_dirty_max_txg; int zl_spa; int zl_os; TYPE_2__* zl_dmu_pool; } ;
typedef TYPE_1__ zilog_t ;
typedef int uint64_t ;
struct TYPE_9__ {int dp_dirty_zilogs; } ;
typedef TYPE_2__ dsl_pool_t ;
struct TYPE_10__ {int ds_dbuf; scalar_t__ ds_is_snapshot; } ;
typedef TYPE_3__ dsl_dataset_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*,int ) ;

void
FUNC_7(zilog_t *VAR_0, uint64_t VAR_1)
{
 dsl_pool_t *VAR_2 = VAR_0->zl_dmu_pool;
 dsl_dataset_t *VAR_3 = FUNC_3(VAR_0->zl_os);

 FUNC_0(FUNC_5(VAR_0->zl_spa));

 if (VAR_3->ds_is_snapshot)
  FUNC_4("dirtying snapshot!");

 if (FUNC_6(&VAR_2->dp_dirty_zilogs, VAR_0, VAR_1)) {

  FUNC_2(VAR_3->ds_dbuf, VAR_0);

  VAR_0->zl_dirty_max_txg = FUNC_1(VAR_1, VAR_0->zl_dirty_max_txg);
 }
}
