
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status_error; } ;
struct TYPE_5__ {TYPE_1__ upper; } ;
union e1000_adv_rx_desc {TYPE_2__ wb; } ;
typedef size_t uint16_t ;
typedef int u32 ;
struct rx_ring {int * rx_base; } ;
struct em_rx_queue {struct rx_ring rxr; } ;
struct adapter {struct em_rx_queue* rx_queues; TYPE_3__* shared; } ;
typedef int qidx_t ;
typedef TYPE_3__* if_softc_ctx_t ;
struct TYPE_6__ {int* isc_nrxd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, uint16_t VAR_3, qidx_t VAR_4, qidx_t VAR_5)
{
 struct adapter *VAR_6 = VAR_2;
 if_softc_ctx_t VAR_7 = VAR_6->shared;
 struct em_rx_queue *VAR_8 = &VAR_6->rx_queues[VAR_3];
 struct rx_ring *VAR_9 = &VAR_8->rxr;
 union e1000_adv_rx_desc *VAR_10;
 u32 VAR_11 = 0;
 int VAR_12, VAR_13;

 for (VAR_12 = 0, VAR_13 = VAR_4; VAR_12 < VAR_7->isc_nrxd[0] && VAR_12 <= VAR_5;) {
  VAR_10 = (union e1000_adv_rx_desc *)&VAR_9->rx_base[VAR_13];
  VAR_11 = FUNC_0(VAR_10->wb.upper.status_error);

  if ((VAR_11 & VAR_0) == 0)
   break;
  if (++VAR_13 == VAR_7->isc_nrxd[0])
   VAR_13 = 0;
  if (VAR_11 & VAR_1)
   VAR_12++;
 }
 return (VAR_12);
}
