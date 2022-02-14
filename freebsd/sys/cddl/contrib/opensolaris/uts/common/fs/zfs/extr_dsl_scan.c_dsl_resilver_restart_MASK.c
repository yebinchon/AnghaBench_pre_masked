
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {TYPE_1__* dp_scan; int dp_mos_dir; } ;
typedef TYPE_2__ dsl_pool_t ;
typedef int dmu_tx_t ;
struct TYPE_4__ {scalar_t__ scn_restart_txg; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char*,scalar_t__) ;

void
FUNC_6(dsl_pool_t *VAR_1, uint64_t VAR_2)
{
 if (VAR_2 == 0) {
  dmu_tx_t *VAR_3;
  VAR_3 = FUNC_3(VAR_1->dp_mos_dir);
  FUNC_0(0 == FUNC_1(VAR_3, VAR_0));

  VAR_2 = FUNC_4(VAR_3);
  VAR_1->dp_scan->scn_restart_txg = VAR_2;
  FUNC_2(VAR_3);
 } else {
  VAR_1->dp_scan->scn_restart_txg = VAR_2;
 }
 FUNC_5("restarting resilver txg=%llu", VAR_2);
}
