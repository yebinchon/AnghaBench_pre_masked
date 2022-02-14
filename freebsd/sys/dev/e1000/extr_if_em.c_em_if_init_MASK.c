
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u32 ;
struct tx_ring {scalar_t__ tx_cidx_processed; int tx_rs_pidx; int tx_rs_cidx; } ;
struct ifnet {int dummy; } ;
struct em_tx_queue {struct tx_ring txr; } ;
struct TYPE_13__ {scalar_t__ type; int addr; } ;
struct TYPE_12__ {scalar_t__ media_type; } ;
struct TYPE_15__ {TYPE_2__ mac; TYPE_1__ phy; } ;
struct adapter {int tx_num_queues; int ivars; scalar_t__ intr_type; TYPE_4__ hw; scalar_t__ has_amt; scalar_t__ has_manage; int rx_mbuf_sz; struct em_tx_queue* tx_queues; TYPE_3__* shared; } ;
typedef TYPE_3__* if_softc_ctx_t ;
typedef int if_ctx_t ;
struct TYPE_14__ {scalar_t__* isc_ntxd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int VAR_9 ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (char*) ;
 int VAR_16 ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_5 (TYPE_4__*,int ,scalar_t__) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,int ,int ) ;
 int FUNC_8 (TYPE_4__*,int ,int ) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (struct adapter*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct adapter*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct adapter*) ;
 int FUNC_19 (struct ifnet*) ;
 int FUNC_20 (struct ifnet*) ;
 struct ifnet* FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 struct adapter* FUNC_23 (int ) ;
 int FUNC_24 (struct adapter*) ;
 scalar_t__ VAR_21 ;

__attribute__((used)) static void
FUNC_25(if_ctx_t VAR_22)
{
 struct adapter *VAR_23 = FUNC_23(VAR_22);
 if_softc_ctx_t VAR_24 = VAR_23->shared;
 struct ifnet *VAR_25 = FUNC_21(VAR_22);
 struct em_tx_queue *VAR_26;
 int VAR_27;

 FUNC_2("em_if_init: begin");


 FUNC_3(FUNC_20(VAR_25), VAR_23->hw.mac.addr,
     VAR_11);


 FUNC_5(&VAR_23->hw, VAR_23->hw.mac.addr, 0);







 if (VAR_23->hw.mac.type == VAR_17) {
  FUNC_9(&VAR_23->hw, VAR_16);
  FUNC_5(&VAR_23->hw, VAR_23->hw.mac.addr,
      VAR_8 - 1);
 }



 FUNC_17(VAR_22);
 FUNC_13(VAR_22);

 for (VAR_27 = 0, VAR_26 = VAR_23->tx_queues; VAR_27 < VAR_23->tx_num_queues; VAR_27++, VAR_26++) {
  struct tx_ring *VAR_28 = &VAR_26->txr;

  VAR_28->tx_rs_cidx = VAR_28->tx_rs_pidx;






  VAR_28->tx_cidx_processed = VAR_24->isc_ntxd[0] - 1;
 }


 FUNC_1(&VAR_23->hw, VAR_9, VAR_10);


 if (VAR_23->hw.mac.type >= VAR_21)
  FUNC_6(&VAR_23->hw);


 FUNC_14(VAR_23);


 FUNC_16(VAR_22);


 FUNC_11(VAR_22);

 VAR_23->rx_mbuf_sz = FUNC_22(VAR_22);
 FUNC_15(VAR_22);


 if (FUNC_19(VAR_25) & VAR_13) {
  if (FUNC_19(VAR_25) & VAR_12)

   FUNC_18(VAR_23);
  else {
   u32 VAR_29;
   VAR_29 = FUNC_0(&VAR_23->hw, VAR_0);
   VAR_29 |= VAR_3;
   FUNC_1(&VAR_23->hw, VAR_0, VAR_29);
  }
 }


 FUNC_12(VAR_22, VAR_14);
 FUNC_4(&VAR_23->hw);


 if (VAR_23->hw.mac.type == VAR_18) {
  int VAR_30 = FUNC_0(&VAR_23->hw, VAR_1);

  VAR_30 |= VAR_2;
  FUNC_1(&VAR_23->hw, VAR_1, VAR_30);

  FUNC_1(&VAR_23->hw, VAR_7, VAR_23->ivars);
 } else if (VAR_23->intr_type == VAR_15)
  FUNC_24(VAR_23);


 FUNC_0(&VAR_23->hw, VAR_4);
 FUNC_1(&VAR_23->hw, VAR_5, VAR_6);


 if (VAR_23->has_manage && VAR_23->has_amt)
  FUNC_10(VAR_23);


 if (VAR_23->hw.mac.type >= VAR_21 &&
     VAR_23->hw.phy.media_type == VAR_20) {
  if (VAR_23->hw.mac.type == VAR_19)
   FUNC_8(&VAR_23->hw, VAR_16, VAR_16);
  else
   FUNC_7(&VAR_23->hw, VAR_16, VAR_16);
 }
}
