
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct dsl_pool {int dp_spa; } ;
struct TYPE_4__ {int tx_anyobj; int tx_txg; struct dsl_pool* tx_pool; } ;
typedef TYPE_1__ dmu_tx_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

dmu_tx_t *
FUNC_2(struct dsl_pool *VAR_1, uint64_t VAR_2)
{
 dmu_tx_t *VAR_3 = FUNC_0(((void*)0));

 FUNC_1(VAR_1->dp_spa, VAR_2);
 VAR_3->tx_pool = VAR_1;
 VAR_3->tx_txg = VAR_2;
 VAR_3->tx_anyobj = VAR_0;

 return (VAR_3);
}
