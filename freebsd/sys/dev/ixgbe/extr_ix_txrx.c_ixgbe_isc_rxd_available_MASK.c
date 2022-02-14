
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int status_error; } ;
struct TYPE_6__ {TYPE_2__ upper; } ;
union ixgbe_adv_rx_desc {TYPE_3__ wb; } ;
typedef size_t uint16_t ;
typedef int u32 ;
struct rx_ring {union ixgbe_adv_rx_desc* rx_base; } ;
struct ix_rx_queue {struct rx_ring rxr; } ;
struct adapter {TYPE_1__* shared; struct ix_rx_queue* rx_queues; } ;
typedef int qidx_t ;
struct TYPE_4__ {int* isc_nrxd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, uint16_t VAR_3, qidx_t VAR_4, qidx_t VAR_5)
{
 struct adapter *VAR_6 = VAR_2;
 struct ix_rx_queue *VAR_7 = &VAR_6->rx_queues[VAR_3];
 struct rx_ring *VAR_8 = &VAR_7->rxr;
 union ixgbe_adv_rx_desc *VAR_9;
 u32 VAR_10;
 int VAR_11, VAR_12, VAR_13;

 VAR_13 = VAR_6->shared->isc_nrxd[0];
 for (VAR_11 = 0, VAR_12 = VAR_4; VAR_11 < VAR_13 && VAR_11 <= VAR_5;) {
  VAR_9 = &VAR_8->rx_base[VAR_12];
  VAR_10 = FUNC_0(VAR_9->wb.upper.status_error);

  if ((VAR_10 & VAR_0) == 0)
   break;
  if (++VAR_12 == VAR_13)
   VAR_12 = 0;
  if (VAR_10 & VAR_1)
   VAR_11++;
 }
 return (VAR_11);
}
