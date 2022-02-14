
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {unsigned long long dn_indblkshift; } ;
typedef TYPE_1__ dnode_t ;
struct TYPE_9__ {scalar_t__ tx_txg; int tx_objset; } ;
typedef TYPE_2__ dmu_tx_t ;
struct TYPE_10__ {int txh_space_towrite; TYPE_1__* txh_dnode; } ;
typedef TYPE_3__ dmu_tx_hold_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *,unsigned long long,int ) ;

void
FUNC_4(dmu_tx_t *VAR_2, uint64_t VAR_3)
{
 dmu_tx_hold_t *VAR_4;

 FUNC_0(VAR_2->tx_txg == 0);
 VAR_4 = FUNC_2(VAR_2, VAR_2->tx_objset,
     VAR_3, VAR_1, 0, 0);
 if (VAR_4 == ((void*)0))
  return;

 dnode_t *VAR_5 = VAR_4->txh_dnode;
 (void) FUNC_3(&VAR_4->txh_space_towrite,
     1ULL << VAR_5->dn_indblkshift, VAR_0);
 FUNC_1(VAR_4);
}
