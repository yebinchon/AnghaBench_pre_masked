
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_ring {int tail; scalar_t__ tx_base; } ;
struct ixl_vsi {int hw; scalar_t__ enable_head_writeback; TYPE_1__* shared; } ;
struct ixl_tx_queue {struct tx_ring txr; } ;
struct i40e_tx_desc {int dummy; } ;
struct TYPE_2__ {int* isc_ntxd; } ;


 int FUNC_0 (void*,int) ;
 int FUNC_1 (int ,int ,int ) ;

void
FUNC_2(struct ixl_vsi *VAR_0, struct ixl_tx_queue *VAR_1)
{
 struct tx_ring *VAR_2 = &VAR_1->txr;


 FUNC_0((void *)VAR_2->tx_base,
       (sizeof(struct i40e_tx_desc)) *
       (VAR_0->shared->isc_ntxd[0] + (VAR_0->enable_head_writeback ? 1 : 0)));

 FUNC_1(VAR_0->hw, VAR_2->tail, 0);
}
