
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union ixgbe_adv_rx_desc {int dummy; } ixgbe_adv_rx_desc ;
typedef int u64 ;
typedef int u32 ;
struct rx_ring {int rx_paddr; int me; int tail; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_4__ {scalar_t__ requested_mode; } ;
struct ixgbe_hw {TYPE_2__ mac; TYPE_1__ fc; } ;
struct ix_rx_queue {struct rx_ring rxr; } ;
struct ifnet {scalar_t__ if_mtu; int if_capenable; } ;
struct adapter {int rx_mbuf_sz; int num_rx_queues; struct ixgbe_hw hw; struct ix_rx_queue* rx_queues; TYPE_3__* shared; } ;
typedef TYPE_3__* if_softc_ctx_t ;
typedef int if_ctx_t ;
struct TYPE_6__ {int* isc_nrxd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ixgbe_hw*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_8 (struct ixgbe_hw*,int ,int) ;
 struct ifnet* FUNC_9 (int ) ;
 struct adapter* FUNC_10 (int ) ;
 int FUNC_11 (struct ixgbe_hw*) ;
 scalar_t__ VAR_21 ;
 int FUNC_12 (struct adapter*) ;
 scalar_t__ VAR_22 ;

__attribute__((used)) static void
FUNC_13(if_ctx_t VAR_23)
{
 struct adapter *VAR_24 = FUNC_10(VAR_23);
 if_softc_ctx_t VAR_25 = VAR_24->shared;
 struct ixgbe_hw *VAR_26 = &VAR_24->hw;
 struct ifnet *VAR_27 = FUNC_9(VAR_23);
 struct ix_rx_queue *VAR_28;
 int VAR_29, VAR_30;
 u32 VAR_31, VAR_32, VAR_33, VAR_34;
 u32 VAR_35;





 FUNC_11(VAR_26);


 VAR_32 = FUNC_6(VAR_26, VAR_3);
 VAR_32 |= VAR_4;
 if (VAR_24->hw.mac.type == VAR_22) {
  VAR_32 |= VAR_5;
  VAR_32 |= VAR_6;
 }
 FUNC_8(VAR_26, VAR_3, VAR_32);


 VAR_35 = FUNC_6(VAR_26, VAR_7);
 if (VAR_27->if_mtu > VAR_1)
  VAR_35 |= VAR_8;
 else
  VAR_35 &= ~VAR_8;
 FUNC_8(VAR_26, VAR_7, VAR_35);

 VAR_31 = (VAR_24->rx_mbuf_sz + VAR_0) >>
     VAR_18;


 for (VAR_29 = 0, VAR_28 = VAR_24->rx_queues; VAR_29 < VAR_24->num_rx_queues; VAR_29++, VAR_28++) {
  struct rx_ring *VAR_36 = &VAR_28->rxr;
  u64 VAR_37 = VAR_36->rx_paddr;

  VAR_30 = VAR_36->me;


  FUNC_8(VAR_26, FUNC_2(VAR_30),
      (VAR_37 & 0x00000000ffffffffULL));
  FUNC_8(VAR_26, FUNC_1(VAR_30), (VAR_37 >> 32));
  FUNC_8(VAR_26, FUNC_4(VAR_30),
       VAR_25->isc_nrxd[0] * sizeof(union ixgbe_adv_rx_desc));


  VAR_33 = FUNC_6(VAR_26, FUNC_7(VAR_30));
  VAR_33 &= ~VAR_16;
  VAR_33 &= ~VAR_17;
  VAR_33 |= VAR_31;
  VAR_33 |= VAR_19;







  if (VAR_24->num_rx_queues > 1 &&
      VAR_24->hw.fc.requested_mode == VAR_21) {
   VAR_33 |= VAR_20;
  } else {
   VAR_33 &= ~VAR_20;
  }

  FUNC_8(VAR_26, FUNC_7(VAR_30), VAR_33);


  FUNC_8(VAR_26, FUNC_3(VAR_30), 0);
  FUNC_8(VAR_26, FUNC_5(VAR_30), 0);


  VAR_36->tail = FUNC_5(VAR_36->me);
 }

 if (VAR_24->hw.mac.type != VAR_22) {
  u32 VAR_38 = VAR_11
              | VAR_12
              | VAR_9
              | VAR_10;
  FUNC_8(VAR_26, FUNC_0(0), VAR_38);
 }

 VAR_34 = FUNC_6(VAR_26, VAR_13);

 FUNC_12(VAR_24);

 if (VAR_24->num_rx_queues > 1) {

  VAR_34 |= VAR_15;
 }

 if (VAR_27->if_capenable & VAR_2)
  VAR_34 |= VAR_15;


 if (!(VAR_34 & VAR_15))
  VAR_34 |= VAR_14;

 FUNC_8(VAR_26, VAR_13, VAR_34);

}
