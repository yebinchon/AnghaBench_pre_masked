
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ixgbe_adv_rx_desc {int dummy; } ixgbe_adv_rx_desc ;
typedef int u64 ;
typedef int u32 ;
struct rx_ring {int rx_paddr; int me; int tail; } ;
struct netmap_kring {int dummy; } ;
struct netmap_adapter {int num_rx_desc; struct netmap_kring** rx_rings; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ix_rx_queue {struct rx_ring rxr; } ;
struct ifnet {scalar_t__ if_mtu; int if_capenable; } ;
struct adapter {int num_rx_queues; struct ixgbe_hw hw; TYPE_2__* shared; int dev; int max_frame_size; struct ix_rx_queue* rx_queues; } ;
typedef TYPE_2__* if_softc_ctx_t ;
typedef int if_ctx_t ;
struct TYPE_4__ {int* isc_nrxd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct ixgbe_hw*,int ,int) ;
 struct netmap_adapter* FUNC_9 (struct ifnet*) ;
 int FUNC_10 (int ,char*) ;
 struct ifnet* FUNC_11 (int ) ;
 struct adapter* FUNC_12 (int ) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_13 (struct ixgbe_hw*,int ) ;
 int FUNC_14 (struct adapter*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct netmap_kring*) ;
 int FUNC_17 () ;

__attribute__((used)) static void
FUNC_18(if_ctx_t VAR_15)
{
 struct adapter *VAR_16 = FUNC_12(VAR_15);
 if_softc_ctx_t VAR_17;
 struct ixgbe_hw *VAR_18 = &VAR_16->hw;
 struct ifnet *VAR_19 = FUNC_11(VAR_15);
 struct ix_rx_queue *VAR_20 = VAR_16->rx_queues;
 u32 VAR_21, VAR_22;

 if (VAR_19->if_mtu > VAR_0)
  VAR_21 = 4096 >> VAR_11;
 else
  VAR_21 = 2048 >> VAR_11;

 VAR_22 = VAR_5
         | VAR_6
         | VAR_2
         | VAR_3
         | VAR_4;

 if (VAR_16->num_rx_queues > 1)
  VAR_22 |= 1 << 29;

 FUNC_8(VAR_18, VAR_13, VAR_22);


 if (FUNC_13(VAR_18, VAR_16->max_frame_size) != 0) {
  FUNC_10(VAR_16->dev, "There is a problem with the PF setup.  It is likely the receive unit for this VF will not function correctly.\n");
 }
 VAR_17 = VAR_16->shared;

 for (int VAR_23 = 0; VAR_23 < VAR_16->num_rx_queues; VAR_23++, VAR_20++) {
  struct rx_ring *VAR_24 = &VAR_20->rxr;
  u64 VAR_25 = VAR_24->rx_paddr;
  u32 VAR_26, VAR_27;
  int VAR_28 = VAR_24->me;


  VAR_27 = FUNC_0(VAR_18, FUNC_6(VAR_28));
  VAR_27 &= ~VAR_7;
  FUNC_8(VAR_18, FUNC_6(VAR_28), VAR_27);
  for (int VAR_29 = 0; VAR_29 < 10; VAR_29++) {
   if (FUNC_0(VAR_18, FUNC_6(VAR_28)) &
       VAR_7)
    FUNC_15(1);
   else
    break;
  }
  FUNC_17();

  FUNC_8(VAR_18, FUNC_2(VAR_28),
      (VAR_25 & 0x00000000ffffffffULL));
  FUNC_8(VAR_18, FUNC_1(VAR_28), (VAR_25 >> 32));
  FUNC_8(VAR_18, FUNC_4(VAR_28),
      VAR_17->isc_nrxd[0] * sizeof(union ixgbe_adv_rx_desc));


  FUNC_8(VAR_18, FUNC_3(VAR_24->me), 0);
  FUNC_8(VAR_18, FUNC_5(VAR_24->me), 0);


  VAR_26 = FUNC_0(VAR_18, FUNC_7(VAR_28));
  VAR_26 &= ~VAR_9;
  VAR_26 &= ~VAR_10;
  VAR_26 |= VAR_21;
  VAR_26 |= VAR_12;
  FUNC_8(VAR_18, FUNC_7(VAR_28), VAR_26);


  VAR_24->tail = FUNC_5(VAR_24->me);


  VAR_27 |= VAR_7 | VAR_8;
  FUNC_8(VAR_18, FUNC_6(VAR_28), VAR_27);
  for (int VAR_30 = 0; VAR_30 < 10; VAR_30++) {
   if (FUNC_0(VAR_18, FUNC_6(VAR_28)) &
       VAR_7)
    break;
   FUNC_15(1);
  }
  FUNC_17();
   FUNC_8(VAR_18, FUNC_5(VAR_24->me),
       VAR_17->isc_nrxd[0] - 1);
 }





 if (VAR_16->hw.mac.type >= VAR_14)
  FUNC_14(VAR_16);
}
