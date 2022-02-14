
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint16_t ;
struct tx_ring {int tail; } ;
struct ixl_vsi {int hw; TYPE_2__* shared; TYPE_1__* tx_queues; } ;
typedef scalar_t__ qidx_t ;
struct TYPE_4__ {scalar_t__* isc_ntxd; } ;
struct TYPE_3__ {struct tx_ring txr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, uint16_t VAR_1, qidx_t VAR_2)
{
 struct ixl_vsi *VAR_3 = VAR_0;
 struct tx_ring *VAR_4 = &VAR_3->tx_queues[VAR_1].txr;






 FUNC_0(VAR_2 < VAR_3->shared->isc_ntxd[0]);
 FUNC_1(VAR_3->hw, VAR_4->tail, VAR_2);
}
