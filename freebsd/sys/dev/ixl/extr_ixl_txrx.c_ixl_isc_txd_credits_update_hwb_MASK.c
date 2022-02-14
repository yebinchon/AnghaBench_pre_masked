
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct tx_ring {int tx_cidx_processed; } ;
struct ixl_vsi {struct ixl_tx_queue* tx_queues; TYPE_1__* shared; } ;
struct ixl_tx_queue {struct tx_ring txr; } ;
typedef TYPE_1__* if_softc_ctx_t ;
struct TYPE_2__ {scalar_t__* isc_ntxd; } ;


 int FUNC_0 (struct ixl_tx_queue*) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, uint16_t VAR_1, bool VAR_2)
{
 struct ixl_vsi *VAR_3 = VAR_0;
 if_softc_ctx_t VAR_4 = VAR_3->shared;
 struct ixl_tx_queue *VAR_5 = &VAR_3->tx_queues[VAR_1];
 struct tx_ring *VAR_6 = &VAR_5->txr;
 int VAR_7, VAR_8;


 VAR_7 = FUNC_0(VAR_5);

 VAR_8 = VAR_7 - VAR_6->tx_cidx_processed;
 if (VAR_8 < 0)
  VAR_8 += VAR_4->isc_ntxd[0];
 if (VAR_2)
  VAR_6->tx_cidx_processed = VAR_7;

 return (VAR_8);
}
