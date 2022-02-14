
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int dp_dirty_dirs; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_10__ {int dd_dbuf; TYPE_1__* dd_pool; } ;
typedef TYPE_2__ dsl_dir_t ;
struct TYPE_11__ {int tx_txg; } ;
typedef TYPE_3__ dmu_tx_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_2__*,int ) ;

void
FUNC_4(dsl_dir_t *VAR_0, dmu_tx_t *VAR_1)
{
 dsl_pool_t *VAR_2 = VAR_0->dd_pool;

 FUNC_0(FUNC_2(VAR_0));

 if (FUNC_3(&VAR_2->dp_dirty_dirs, VAR_0, VAR_1->tx_txg)) {

  FUNC_1(VAR_0->dd_dbuf, VAR_0);
 }
}
