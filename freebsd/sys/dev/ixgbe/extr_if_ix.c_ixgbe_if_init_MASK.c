
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct tx_ring {int me; } ;
struct rx_ring {int me; } ;
struct TYPE_7__ {int (* identify ) (struct ixgbe_hw*) ;} ;
struct TYPE_8__ {scalar_t__ type; TYPE_3__ ops; } ;
struct TYPE_6__ {scalar_t__ type; int addr; } ;
struct TYPE_5__ {int rar_used_count; } ;
struct ixgbe_hw {TYPE_4__ phy; TYPE_2__ mac; TYPE_1__ addr_ctrl; } ;
struct ix_tx_queue {struct tx_ring txr; } ;
struct ix_rx_queue {struct rx_ring rxr; } ;
struct ifnet {scalar_t__ if_mtu; } ;
struct adapter {int max_frame_size; int num_tx_queues; int num_rx_queues; int feat_en; int vector; struct ix_rx_queue* rx_queues; struct ix_tx_queue* tx_queues; scalar_t__ task_requests; int rx_mbuf_sz; int pool; struct ixgbe_hw hw; } ;
typedef int if_ctx_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct ixgbe_hw*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int ) ;
 int VAR_16 ;
 int FUNC_6 (int ) ;
 int VAR_17 ;
 int FUNC_7 (struct ixgbe_hw*,int ,int) ;
 int VAR_18 ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ) ;
 struct ifnet* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 struct adapter* FUNC_13 (int ) ;
 int FUNC_14 (struct adapter*) ;
 int FUNC_15 (struct adapter*) ;
 int FUNC_16 (struct adapter*) ;
 int FUNC_17 (struct adapter*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct adapter*) ;
 scalar_t__ VAR_19 ;
 int FUNC_20 (struct ixgbe_hw*,int) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (struct adapter*) ;
 int FUNC_24 (struct ixgbe_hw*) ;
 int FUNC_25 (struct adapter*) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_28 (struct adapter*,int ,int ,int) ;
 int FUNC_29 (struct ixgbe_hw*,int ) ;
 int FUNC_30 (struct ixgbe_hw*,int ,int ,int ,int) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (struct ixgbe_hw*) ;
 int FUNC_33 (int) ;
 int FUNC_34 (struct ixgbe_hw*) ;
 int FUNC_35 () ;

void
FUNC_36(if_ctx_t VAR_22)
{
 struct adapter *VAR_23 = FUNC_13(VAR_22);
 struct ifnet *VAR_24 = FUNC_11(VAR_22);
 device_t VAR_25 = FUNC_10(VAR_22);
 struct ixgbe_hw *VAR_26 = &VAR_23->hw;
 struct ix_rx_queue *VAR_27;
 struct ix_tx_queue *VAR_28;
 u32 VAR_29, VAR_30;
 u32 VAR_31, VAR_32;
 u32 VAR_33;

 int VAR_34, VAR_35, VAR_36;

 FUNC_1("ixgbe_if_init: begin");


 FUNC_14(VAR_23);


 FUNC_30(VAR_26, 0, VAR_26->mac.addr, VAR_23->pool, VAR_12);


 FUNC_8(FUNC_0(VAR_24), VAR_26->mac.addr, VAR_6);
 FUNC_30(VAR_26, 0, VAR_26->mac.addr, VAR_23->pool, 1);
 VAR_26->addr_ctrl.rar_used_count = 1;

 FUNC_24(VAR_26);

 FUNC_25(VAR_23);

 FUNC_27(VAR_22);


 FUNC_22(VAR_22);


 VAR_23->rx_mbuf_sz = FUNC_12(VAR_22);


 FUNC_26(VAR_22);





 VAR_23->task_requests = 0;


 FUNC_17(VAR_23);


 if (VAR_24->if_mtu > VAR_0) {

  VAR_30 = FUNC_4(VAR_26, VAR_9);
  VAR_30 &= ~VAR_10;
  VAR_30 |= VAR_23->max_frame_size << VAR_11;
  FUNC_7(VAR_26, VAR_9, VAR_30);
 }


 for (VAR_34 = 0, VAR_28 = VAR_23->tx_queues; VAR_34 < VAR_23->num_tx_queues; VAR_34++, VAR_28++) {
  struct tx_ring *VAR_37 = &VAR_28->txr;

  VAR_29 = FUNC_4(VAR_26, FUNC_6(VAR_37->me));
  VAR_29 |= VAR_17;

  VAR_29 |= (8 << 16);







  VAR_29 |= (32 << 0) | (1 << 8);
  FUNC_7(VAR_26, FUNC_6(VAR_37->me), VAR_29);
 }

 for (VAR_34 = 0, VAR_27 = VAR_23->rx_queues; VAR_34 < VAR_23->num_rx_queues; VAR_34++, VAR_27++) {
  struct rx_ring *VAR_38 = &VAR_27->rxr;

  VAR_31 = FUNC_4(VAR_26, FUNC_5(VAR_38->me));
  if (VAR_26->mac.type == VAR_20) {





   VAR_31 &= ~0x3FFFFF;
   VAR_31 |= 0x080420;
  }
  VAR_31 |= VAR_16;
  FUNC_7(VAR_26, FUNC_5(VAR_38->me), VAR_31);
  for (VAR_35 = 0; VAR_35 < 10; VAR_35++) {
   if (FUNC_4(VAR_26, FUNC_5(VAR_38->me)) &
       VAR_16)
    break;
   else
    FUNC_33(1);
  }
  FUNC_35();
 }


 VAR_32 = FUNC_4(VAR_26, VAR_13);
 if (VAR_26->mac.type == VAR_20)
  VAR_32 |= VAR_14;
 VAR_32 |= VAR_15;
 FUNC_20(VAR_26, VAR_32);


 if (VAR_19) {
  FUNC_19(VAR_23);

  if (VAR_26->mac.type == VAR_20)
   FUNC_7(VAR_26, VAR_3, VAR_4);
  else {
   FUNC_7(VAR_26, FUNC_2(0), 0xFFFFFFFF);
   FUNC_7(VAR_26, FUNC_2(1), 0xFFFFFFFF);
  }
 } else {
  FUNC_28(VAR_23, 0, 0, 0);
  FUNC_28(VAR_23, 0, 0, 1);
  FUNC_7(VAR_26, VAR_3, VAR_4);
 }

 FUNC_23(VAR_23);





 if (VAR_26->phy.type == VAR_21) {
  VAR_36 = VAR_26->phy.ops.identify(VAR_26);
  if (VAR_36 == VAR_5) {
   FUNC_9(VAR_25,
       "Unsupported SFP+ module type was detected.\n");
   return;
  }
 }


 FUNC_7(VAR_26, FUNC_3(VAR_23->vector), VAR_8);


 FUNC_29(VAR_26, VAR_18);


 FUNC_18(VAR_22);


 FUNC_15(VAR_23);


 FUNC_32(VAR_26);


 FUNC_31(VAR_22);


 FUNC_16(VAR_23);


 FUNC_21(VAR_22);


 if (VAR_23->feat_en & VAR_7) {
  VAR_33 = FUNC_4(VAR_26, VAR_1);
  VAR_33 |= VAR_2;
  FUNC_7(VAR_26, VAR_1, VAR_33);
 }

}
