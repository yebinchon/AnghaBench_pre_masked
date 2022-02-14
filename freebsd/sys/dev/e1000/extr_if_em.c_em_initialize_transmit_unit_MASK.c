
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct tx_ring {int tx_paddr; int csum_flags; } ;
struct em_tx_queue {struct tx_ring txr; } ;
struct e1000_tx_desc {int dummy; } ;
struct TYPE_9__ {int type; } ;
struct TYPE_6__ {int media_type; } ;
struct e1000_hw {TYPE_4__ mac; TYPE_1__ phy; } ;
struct TYPE_7__ {int value; } ;
struct TYPE_8__ {int value; } ;
struct adapter {int tx_num_queues; struct e1000_hw hw; int txd_cmd; TYPE_2__ tx_int_delay; TYPE_3__ tx_abs_int_delay; struct em_tx_queue* tx_queues; TYPE_5__* shared; } ;
typedef TYPE_5__* if_softc_ctx_t ;
typedef int if_ctx_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_10__ {int* isc_ntxd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct e1000_hw*,int ) ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_7 (int) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_8 (struct e1000_hw*,int ,int) ;
 int FUNC_9 (char*,int,int) ;
 int FUNC_10 (char*) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_11 (scalar_t__,scalar_t__) ;

 int VAR_31 ;

 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int const VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 scalar_t__ VAR_37 ;
 struct adapter* FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(if_ctx_t VAR_38)
{
 struct adapter *VAR_39 = FUNC_12(VAR_38);
 if_softc_ctx_t VAR_40 = VAR_39->shared;
 struct em_tx_queue *VAR_41;
 struct tx_ring *VAR_42;
 struct e1000_hw *VAR_43 = &VAR_39->hw;
 u32 VAR_44, VAR_45 = 0, VAR_46, VAR_47 = 0;

 FUNC_10("em_initialize_transmit_unit: begin");

 for (int VAR_48 = 0; VAR_48 < VAR_39->tx_num_queues; VAR_48++, VAR_42++) {
  u64 VAR_49;
  caddr_t VAR_50, VAR_51;

  VAR_41 = &VAR_39->tx_queues[VAR_48];
  VAR_42 = &VAR_41->txr;
  VAR_49 = VAR_42->tx_paddr;


  VAR_50 = (caddr_t)&VAR_42->csum_flags;
  VAR_51 = (caddr_t)(VAR_42 + 1);
  FUNC_11(VAR_50, VAR_51 - VAR_50);


  FUNC_8(VAR_43, FUNC_5(VAR_48),
      VAR_40->isc_ntxd[0] * sizeof(struct e1000_tx_desc));
  FUNC_8(VAR_43, FUNC_2(VAR_48),
      (u32)(VAR_49 >> 32));
  FUNC_8(VAR_43, FUNC_3(VAR_48),
      (u32)VAR_49);

  FUNC_8(VAR_43, FUNC_6(VAR_48), 0);
  FUNC_8(VAR_43, FUNC_4(VAR_48), 0);

  FUNC_9("Base = %x, Length = %x\n",
      FUNC_0(&VAR_39->hw, FUNC_3(VAR_48)),
      FUNC_0(&VAR_39->hw, FUNC_5(VAR_48)));

  VAR_45 = 0;
  VAR_45 |= 0x1f;
  VAR_45 |= 1 << 8;
  VAR_45 |= 1 << 16;
  VAR_45 |= 1 << 22;
  VAR_45 |= VAR_25;
  VAR_45 |= 1 << 25;

  FUNC_8(VAR_43, FUNC_7(VAR_48), VAR_45);
 }


 switch (VAR_39->hw.mac.type) {
 case 129:
  VAR_47 = VAR_4;
  VAR_47 |= VAR_0 <<
      VAR_24;
  break;
 case 128:
  VAR_47 = VAR_3;
  VAR_47 |= VAR_1 << VAR_23;
  VAR_47 |= VAR_2 << VAR_24;
  break;
 default:
  if ((VAR_39->hw.phy.media_type == VAR_35) ||
      (VAR_39->hw.phy.media_type ==
      VAR_36))
   VAR_47 = VAR_7;
  else
   VAR_47 = VAR_6;
  VAR_47 |= VAR_4 << VAR_23;
  VAR_47 |= VAR_5 << VAR_24;
 }

 FUNC_8(&VAR_39->hw, VAR_22, VAR_47);
 FUNC_8(&VAR_39->hw, VAR_21, VAR_39->tx_int_delay.value);

 if(VAR_39->hw.mac.type >= VAR_31)
  FUNC_8(&VAR_39->hw, VAR_12,
      VAR_39->tx_abs_int_delay.value);

 if ((VAR_39->hw.mac.type == VAR_32) ||
     (VAR_39->hw.mac.type == VAR_33)) {
  VAR_46 = FUNC_0(&VAR_39->hw, FUNC_1(0));
  VAR_46 |= VAR_30;
  FUNC_8(&VAR_39->hw, FUNC_1(0), VAR_46);
 } else if (VAR_39->hw.mac.type == 129) {

  VAR_46 = FUNC_0(&VAR_39->hw, FUNC_1(0));
  VAR_46 |= 1;
  FUNC_8(&VAR_39->hw, FUNC_1(0), VAR_46);
  VAR_46 = FUNC_0(&VAR_39->hw, FUNC_1(1));
  VAR_46 |= 1;
  FUNC_8(&VAR_39->hw, FUNC_1(1), VAR_46);
 } else if (VAR_39->hw.mac.type == VAR_34) {
  VAR_46 = FUNC_0(&VAR_39->hw, FUNC_1(0));
  VAR_46 |= VAR_28;
  if ( VAR_39->tx_num_queues > 1) {
   VAR_46 |= (VAR_27 | VAR_29);
   FUNC_8(&VAR_39->hw, FUNC_1(0), VAR_46);
   FUNC_8(&VAR_39->hw, FUNC_1(1), VAR_46);
  } else
   FUNC_8(&VAR_39->hw, FUNC_1(0), VAR_46);
 }

 if (VAR_39->tx_int_delay.value > 0)
  VAR_39->txd_cmd |= VAR_26;


 VAR_44 = FUNC_0(&VAR_39->hw, VAR_15);
 VAR_44 &= ~VAR_16;
 VAR_44 |= (VAR_19 | VAR_20 | VAR_17 |
     (VAR_8 << VAR_9));

 if (VAR_39->hw.mac.type >= VAR_32)
  VAR_44 |= VAR_18;


 FUNC_8(&VAR_39->hw, VAR_15, VAR_44);


 if (VAR_43->mac.type == VAR_37) {
  u32 VAR_52;
  VAR_52 = FUNC_0(VAR_43, VAR_10);
  VAR_52 |= VAR_11;
  FUNC_8(VAR_43, VAR_10, VAR_52);

  VAR_52 = FUNC_0(VAR_43, FUNC_1(0));
  VAR_52 &= ~VAR_14;
  VAR_52 |= VAR_13;
  FUNC_8(VAR_43, FUNC_1(0), VAR_52);
 }
}
