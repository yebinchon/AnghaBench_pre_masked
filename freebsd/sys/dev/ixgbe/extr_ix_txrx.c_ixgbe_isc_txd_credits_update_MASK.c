
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct tx_ring {size_t tx_rs_cidx; size_t tx_rs_pidx; size_t* tx_rsq; size_t tx_cidx_processed; TYPE_2__* tx_base; } ;
struct ix_tx_queue {struct tx_ring txr; } ;
struct adapter {struct ix_tx_queue* tx_queues; TYPE_3__* shared; } ;
typedef size_t qidx_t ;
typedef scalar_t__ int32_t ;
typedef TYPE_3__* if_softc_ctx_t ;
struct TYPE_6__ {size_t* isc_ntxd; } ;
struct TYPE_4__ {int status; } ;
struct TYPE_5__ {TYPE_1__ wb; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(void *VAR_1, uint16_t VAR_2, bool VAR_3)
{
 struct adapter *VAR_4 = VAR_1;
 if_softc_ctx_t VAR_5 = VAR_4->shared;
 struct ix_tx_queue *VAR_6 = &VAR_4->tx_queues[VAR_2];
 struct tx_ring *VAR_7 = &VAR_6->txr;
 qidx_t VAR_8 = 0;
 int VAR_9;
 qidx_t VAR_10, VAR_11, VAR_12, VAR_13;
 int32_t VAR_14;
 uint8_t VAR_15;

 VAR_13 = VAR_7->tx_rs_cidx;
 if (VAR_13 == VAR_7->tx_rs_pidx)
  return (0);

 VAR_10 = VAR_7->tx_rsq[VAR_13];
 VAR_15 = VAR_7->tx_base[VAR_10].wb.status;
 VAR_9 = !!(VAR_15 & VAR_0);

 if (!VAR_9)
  return (0);



 if (!VAR_3)
  return (1);

 VAR_11 = VAR_7->tx_cidx_processed;
 VAR_12 = VAR_5->isc_ntxd[0];
 do {
  FUNC_0(VAR_11 != VAR_10);
  VAR_14 = (int32_t)VAR_10 - (int32_t)VAR_11;
  if (VAR_14 < 0)
   VAR_14 += VAR_12;
  FUNC_0(VAR_14 > 0);

  VAR_8 += VAR_14;
  VAR_11 = VAR_10;
  VAR_13 = (VAR_13 + 1) & (VAR_12 - 1);
  if (VAR_13 == VAR_7->tx_rs_pidx)
   break;

  VAR_10 = VAR_7->tx_rsq[VAR_13];
  VAR_15 = VAR_7->tx_base[VAR_10].wb.status;
 } while ((VAR_15 & VAR_0));

 VAR_7->tx_rs_cidx = VAR_13;
 VAR_7->tx_cidx_processed = VAR_11;

 return (VAR_8);
}
