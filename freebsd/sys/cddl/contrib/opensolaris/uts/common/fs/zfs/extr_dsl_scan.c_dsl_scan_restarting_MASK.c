
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ scn_restart_txg; } ;
typedef TYPE_1__ dsl_scan_t ;
struct TYPE_6__ {scalar_t__ tx_txg; } ;
typedef TYPE_2__ dmu_tx_t ;
typedef int boolean_t ;



__attribute__((used)) static boolean_t
FUNC_0(dsl_scan_t *VAR_0, dmu_tx_t *VAR_1)
{
 return (VAR_0->scn_restart_txg != 0 &&
     VAR_0->scn_restart_txg <= VAR_1->tx_txg);
}
