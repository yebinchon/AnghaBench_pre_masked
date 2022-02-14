
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ixgbe_adv_tx_desc {int dummy; } ixgbe_adv_tx_desc ;
typedef int u64 ;
typedef int u32 ;
struct tx_ring {int tx_paddr; int me; int tx_cidx_processed; int * tx_rsq; int tx_rs_pidx; int tx_rs_cidx; int tail; } ;
struct TYPE_3__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ix_tx_queue {struct tx_ring txr; } ;
struct adapter {int num_tx_queues; int iov_mode; struct ix_tx_queue* tx_queues; TYPE_2__* shared; struct ixgbe_hw hw; } ;
typedef TYPE_2__* if_softc_ctx_t ;
typedef int if_ctx_t ;
struct TYPE_4__ {int* isc_ntxd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct ixgbe_hw*,int ,int) ;
 int VAR_6 ;
 struct adapter* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;


__attribute__((used)) static void
FUNC_11(if_ctx_t VAR_7)
{
 struct adapter *VAR_8 = FUNC_9(VAR_7);
 struct ixgbe_hw *VAR_9 = &VAR_8->hw;
 if_softc_ctx_t VAR_10 = VAR_8->shared;
 struct ix_tx_queue *VAR_11;
 int VAR_12;


 for (VAR_12 = 0, VAR_11 = VAR_8->tx_queues; VAR_12 < VAR_8->num_tx_queues;
     VAR_12++, VAR_11++) {
  struct tx_ring *VAR_13 = &VAR_11->txr;
  u64 VAR_14 = VAR_13->tx_paddr;
  u32 VAR_15 = 0;
  int VAR_16 = VAR_13->me;

  FUNC_8(VAR_9, FUNC_4(VAR_16),
      (VAR_14 & 0x00000000ffffffffULL));
  FUNC_8(VAR_9, FUNC_3(VAR_16), (VAR_14 >> 32));
  FUNC_8(VAR_9, FUNC_6(VAR_16),
      VAR_10->isc_ntxd[0] * sizeof(union ixgbe_adv_tx_desc));


  FUNC_8(VAR_9, FUNC_5(VAR_16), 0);
  FUNC_8(VAR_9, FUNC_7(VAR_16), 0);


  VAR_13->tail = FUNC_7(VAR_13->me);

  VAR_13->tx_rs_cidx = VAR_13->tx_rs_pidx;
  VAR_13->tx_cidx_processed = VAR_10->isc_ntxd[0] - 1;
  for (int VAR_17 = 0; VAR_17 < VAR_10->isc_ntxd[0]; VAR_17++)
   VAR_13->tx_rsq[VAR_17] = VAR_6;







  switch (VAR_9->mac.type) {
  case 128:
   VAR_15 = FUNC_2(VAR_9, FUNC_0(VAR_16));
   break;
  default:
   VAR_15 = FUNC_2(VAR_9, FUNC_1(VAR_16));
   break;
  }
  VAR_15 &= ~VAR_0;
  switch (VAR_9->mac.type) {
  case 128:
   FUNC_8(VAR_9, FUNC_0(VAR_16), VAR_15);
   break;
  default:
   FUNC_8(VAR_9, FUNC_1(VAR_16), VAR_15);
   break;
  }

 }

 if (VAR_9->mac.type != 128) {
  u32 VAR_18, VAR_19;

  VAR_18 = FUNC_2(VAR_9, VAR_1);
  VAR_18 |= VAR_2;
  FUNC_8(VAR_9, VAR_1, VAR_18);

  VAR_19 = FUNC_2(VAR_9, VAR_4);
  VAR_19 |= VAR_5;
  FUNC_8(VAR_9, VAR_4, VAR_19);
  FUNC_8(VAR_9, VAR_3,
      FUNC_10(VAR_8->iov_mode));
  VAR_19 &= ~VAR_5;
  FUNC_8(VAR_9, VAR_4, VAR_19);
 }

}
