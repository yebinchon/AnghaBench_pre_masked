
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tx_ring {int * tx_base; } ;
struct ixl_tx_queue {struct tx_ring txr; TYPE_1__* vsi; } ;
typedef TYPE_2__* if_softc_ctx_t ;
typedef int __le32 ;
struct TYPE_4__ {size_t* isc_ntxd; } ;
struct TYPE_3__ {TYPE_2__* shared; } ;


 int FUNC_0 (int volatile) ;

__attribute__((used)) static inline u32
FUNC_1(struct ixl_tx_queue *VAR_0)
{
 if_softc_ctx_t VAR_1 = VAR_0->vsi->shared;
 struct tx_ring *VAR_2 = &VAR_0->txr;
 void *VAR_3 = &VAR_2->tx_base[VAR_1->isc_ntxd[0]];

 return FUNC_0(*(volatile __le32 *)VAR_3);
}
