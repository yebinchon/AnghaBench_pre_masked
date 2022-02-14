
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* uint64_t ;
typedef enum dmu_tx_hold_type { ____Placeholder_dmu_tx_hold_type } dmu_tx_hold_type ;
struct TYPE_10__ {scalar_t__ dn_assigned_txg; int dn_mtx; int dn_tx_holds; int dn_holds; } ;
typedef TYPE_1__ dnode_t ;
struct TYPE_11__ {scalar_t__ tx_txg; int tx_holds; } ;
typedef TYPE_2__ dmu_tx_t ;
struct TYPE_12__ {int txh_type; void* txh_arg2; void* txh_arg1; int txh_memory_tohold; int txh_space_towrite; TYPE_1__* txh_dnode; TYPE_2__* txh_tx; } ;
typedef TYPE_3__ dmu_tx_hold_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static dmu_tx_hold_t *
FUNC_7(dmu_tx_t *VAR_1, dnode_t *VAR_2, enum dmu_tx_hold_type VAR_3,
    uint64_t VAR_4, uint64_t VAR_5)
{
 dmu_tx_hold_t *VAR_6;

 if (VAR_2 != ((void*)0)) {
  (void) FUNC_5(&VAR_2->dn_holds, VAR_1);
  if (VAR_1->tx_txg != 0) {
   FUNC_3(&VAR_2->dn_mtx);





   FUNC_0(VAR_2->dn_assigned_txg == 0);
   VAR_2->dn_assigned_txg = VAR_1->tx_txg;
   (void) FUNC_5(&VAR_2->dn_tx_holds, VAR_1);
   FUNC_4(&VAR_2->dn_mtx);
  }
 }

 VAR_6 = FUNC_1(sizeof (dmu_tx_hold_t), VAR_0);
 VAR_6->txh_tx = VAR_1;
 VAR_6->txh_dnode = VAR_2;
 FUNC_6(&VAR_6->txh_space_towrite);
 FUNC_6(&VAR_6->txh_memory_tohold);
 VAR_6->txh_type = VAR_3;
 VAR_6->txh_arg1 = VAR_4;
 VAR_6->txh_arg2 = VAR_5;
 FUNC_2(&VAR_1->tx_holds, VAR_6);

 return (VAR_6);
}
