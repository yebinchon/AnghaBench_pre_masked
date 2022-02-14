
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
typedef int u32 ;
struct rx_ring {int * rx_base; } ;
struct em_rx_queue {struct rx_ring rxr; } ;
struct e1000_rx_desc {int status; } ;
struct adapter {struct em_rx_queue* rx_queues; TYPE_1__* shared; } ;
typedef int qidx_t ;
typedef TYPE_1__* if_softc_ctx_t ;
struct TYPE_2__ {int* isc_nrxd; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(void *VAR_2, uint16_t VAR_3, qidx_t VAR_4, qidx_t VAR_5)
{
 struct adapter *VAR_6 = VAR_2;
 if_softc_ctx_t VAR_7 = VAR_6->shared;
 struct em_rx_queue *VAR_8 = &VAR_6->rx_queues[VAR_3];
 struct rx_ring *VAR_9 = &VAR_8->rxr;
 struct e1000_rx_desc *VAR_10;
 u32 VAR_11 = 0;
 int VAR_12, VAR_13;

 for (VAR_12 = 0, VAR_13 = VAR_4; VAR_12 < VAR_7->isc_nrxd[0] && VAR_12 <= VAR_5;) {
  VAR_10 = (struct e1000_rx_desc *)&VAR_9->rx_base[VAR_13];
  VAR_11 = VAR_10->status;

  if ((VAR_11 & VAR_0) == 0)
   break;
  if (++VAR_13 == VAR_7->isc_nrxd[0])
   VAR_13 = 0;
  if (VAR_11 & VAR_1)
   VAR_12++;
 }
 return (VAR_12);
}
