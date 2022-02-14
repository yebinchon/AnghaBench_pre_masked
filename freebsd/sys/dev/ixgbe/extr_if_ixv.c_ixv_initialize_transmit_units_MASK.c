
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct tx_ring {int tx_paddr; int me; int tx_cidx_processed; int * tx_rsq; int tx_rs_pidx; int tx_rs_cidx; int tail; } ;
struct ixgbe_legacy_tx_desc {int dummy; } ;
struct ixgbe_hw {int dummy; } ;
struct ix_tx_queue {struct tx_ring txr; } ;
struct adapter {int num_tx_queues; struct ixgbe_hw hw; struct ix_tx_queue* tx_queues; TYPE_1__* shared; } ;
typedef TYPE_1__* if_softc_ctx_t ;
typedef int if_ctx_t ;
struct TYPE_2__ {int* isc_ntxd; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct ixgbe_hw*,int ,int) ;
 int VAR_2 ;
 struct adapter* FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(if_ctx_t VAR_3)
{
 struct adapter *VAR_4 = FUNC_9(VAR_3);
 struct ixgbe_hw *VAR_5 = &VAR_4->hw;
 if_softc_ctx_t VAR_6 = VAR_4->shared;
 struct ix_tx_queue *VAR_7 = VAR_4->tx_queues;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4->num_tx_queues; VAR_8++, VAR_7++) {
  struct tx_ring *VAR_9 = &VAR_7->txr;
  u64 VAR_10 = VAR_9->tx_paddr;
  u32 VAR_11, VAR_12;
  int VAR_13 = VAR_9->me;


  VAR_12 = FUNC_0(VAR_5, FUNC_7(VAR_13));
  VAR_12 |= (8 << 16);
  FUNC_8(VAR_5, FUNC_7(VAR_13), VAR_12);


  FUNC_8(&VAR_4->hw, FUNC_4(VAR_13), 0);
  FUNC_8(&VAR_4->hw, FUNC_6(VAR_13), 0);


  VAR_9->tail = FUNC_6(VAR_13);

  VAR_9->tx_rs_cidx = VAR_9->tx_rs_pidx;





  VAR_9->tx_cidx_processed = VAR_6->isc_ntxd[0] - 1;
  for (int VAR_14 = 0; VAR_14 < VAR_6->isc_ntxd[0]; VAR_14++)
   VAR_9->tx_rsq[VAR_14] = VAR_2;


  FUNC_8(VAR_5, FUNC_3(VAR_13),
      (VAR_10 & 0x00000000ffffffffULL));
  FUNC_8(VAR_5, FUNC_2(VAR_13), (VAR_10 >> 32));
  FUNC_8(VAR_5, FUNC_5(VAR_13),
      VAR_6->isc_ntxd[0] * sizeof(struct ixgbe_legacy_tx_desc));
  VAR_11 = FUNC_0(VAR_5, FUNC_1(VAR_13));
  VAR_11 &= ~VAR_0;
  FUNC_8(VAR_5, FUNC_1(VAR_13), VAR_11);


  VAR_12 = FUNC_0(VAR_5, FUNC_7(VAR_13));
  VAR_12 |= VAR_1;
  FUNC_8(VAR_5, FUNC_7(VAR_13), VAR_12);
 }

 return;
}
