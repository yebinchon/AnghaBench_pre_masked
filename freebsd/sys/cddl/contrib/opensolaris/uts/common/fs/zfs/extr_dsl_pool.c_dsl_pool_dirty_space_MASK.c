
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_6__ {int dp_lock; int * dp_dirty_pertxg; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_7__ {size_t tx_txg; } ;
typedef TYPE_2__ dmu_tx_t ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(dsl_pool_t *VAR_1, int64_t VAR_2, dmu_tx_t *VAR_3)
{
 if (VAR_2 > 0) {
  FUNC_1(&VAR_1->dp_lock);
  VAR_1->dp_dirty_pertxg[VAR_3->tx_txg & VAR_0] += VAR_2;
  FUNC_0(VAR_1, VAR_2);
  FUNC_2(&VAR_1->dp_lock);
 }
}
