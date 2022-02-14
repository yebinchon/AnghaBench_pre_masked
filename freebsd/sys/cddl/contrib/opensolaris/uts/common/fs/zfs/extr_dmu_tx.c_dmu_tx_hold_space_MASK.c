
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {scalar_t__ tx_txg; int tx_objset; } ;
typedef TYPE_1__ dmu_tx_t ;
struct TYPE_7__ {int txh_space_towrite; } ;
typedef TYPE_2__ dmu_tx_hold_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;

void
FUNC_3(dmu_tx_t *VAR_3, uint64_t VAR_4)
{
 dmu_tx_hold_t *VAR_5;
 FUNC_0(VAR_3->tx_txg == 0);

 VAR_5 = FUNC_1(VAR_3, VAR_3->tx_objset,
     VAR_0, VAR_2, VAR_4, 0);

 (void) FUNC_2(&VAR_5->txh_space_towrite, VAR_4, VAR_1);
}
