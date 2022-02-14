
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mge_softc {int mge_ver; int volatile mge_tx_tok_cnt; int volatile mge_tx_tok_cfg; int volatile mge_tx_arb_cfg; int mge_media_status; int volatile tx_desc_start; int volatile rx_desc_start; int wd_callout; scalar_t__ phy_attached; scalar_t__ wd_timer; TYPE_2__* ifp; int mge_desc_dtag; struct mge_desc_wrapper* mge_rx_desc; scalar_t__ tx_desc_used_count; scalar_t__ tx_desc_used_idx; scalar_t__ rx_desc_curr; scalar_t__ tx_desc_curr; scalar_t__ switch_attached; int mge_mtu; } ;
struct mge_desc_wrapper {int desc_dmap; TYPE_1__* mge_desc; } ;
struct TYPE_4__ {int if_capenable; int if_drv_flags; } ;
struct TYPE_3__ {int cmd_status; int buff_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int volatile FUNC_1 (int ) ;
 int VAR_9 ;
 int volatile FUNC_2 (int ) ;
 int FUNC_3 (struct mge_softc*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (struct mge_softc*,int ) ;
 int volatile VAR_15 ;
 int FUNC_5 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int volatile FUNC_6 (int ) ;
 int volatile VAR_22 ;
 int volatile FUNC_7 (int ) ;
 int volatile VAR_23 ;
 int volatile VAR_24 ;
 int FUNC_8 (int) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct mge_softc*,int ,int volatile) ;
 int volatile FUNC_12 (int ) ;
 int volatile FUNC_13 (int ) ;
 int volatile VAR_27 ;
 int volatile VAR_28 ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 (int *,int ,int ,struct mge_softc*) ;
 int VAR_29 ;
 int FUNC_16 (TYPE_2__*,char*) ;
 int FUNC_17 (struct mge_softc*,int) ;
 int FUNC_18 (struct mge_softc*) ;
 int FUNC_19 (int) ;
 int FUNC_20 (struct mge_softc*,int ) ;
 int FUNC_21 (struct mge_softc*) ;
 int FUNC_22 (struct mge_softc*) ;
 int FUNC_23 (struct mge_softc*) ;
 int FUNC_24 (struct mge_softc*) ;
 int VAR_30 ;

__attribute__((used)) static void
FUNC_25(void *VAR_31)
{
 struct mge_softc *VAR_32 = VAR_31;
 struct mge_desc_wrapper *VAR_33;
 volatile uint32_t VAR_34;
 int VAR_35, VAR_36;
 uint32_t VAR_37;


 FUNC_3(VAR_32);


 FUNC_24(VAR_32);


 FUNC_17(VAR_32, 0);


 FUNC_18(VAR_32);


 FUNC_23(VAR_32);

 if (VAR_32->mge_ver == 2) {
  FUNC_11(VAR_32, VAR_13, VAR_15);
  FUNC_11(VAR_32, VAR_9, FUNC_2(0));
 }


 FUNC_11(VAR_32, FUNC_10(0), VAR_32->mge_tx_tok_cnt);
 FUNC_11(VAR_32, FUNC_9(0), VAR_32->mge_tx_tok_cfg);
 FUNC_11(VAR_32, FUNC_8(0), VAR_32->mge_tx_arb_cfg);


 for (VAR_35 = 1; VAR_35 < 7; VAR_35++) {
  FUNC_11(VAR_32, FUNC_10(VAR_35), 0);
  FUNC_11(VAR_32, FUNC_9(VAR_35), 0);
  FUNC_11(VAR_32, FUNC_8(VAR_35), 0);
 }


 FUNC_11(VAR_32, VAR_32->mge_mtu, 0);


 FUNC_11(VAR_32, VAR_10,
     VAR_27 | FUNC_13(0) |
     FUNC_12(0));
 FUNC_11(VAR_32, VAR_11 , 0x0);


 FUNC_20(VAR_32, VAR_16);

 VAR_37 = VAR_32->mge_media_status;
 if (VAR_32->switch_attached) {
  VAR_37 &= ~VAR_6;
  VAR_37 |= VAR_5;
 }


 VAR_34 = FUNC_19(VAR_37);
 FUNC_11(VAR_32, VAR_12, VAR_34);


 FUNC_11(VAR_32, VAR_21 , VAR_22 |
     VAR_23 |
     FUNC_6(VAR_20) |
     FUNC_7(VAR_20));

 FUNC_11(VAR_32, VAR_26, 0x0);

 FUNC_11(VAR_32, VAR_25, VAR_32->tx_desc_start);
 FUNC_11(VAR_32, FUNC_5(VAR_16),
     VAR_32->rx_desc_start);


 VAR_32->tx_desc_curr = 0;
 VAR_32->rx_desc_curr = 0;
 VAR_32->tx_desc_used_idx = 0;
 VAR_32->tx_desc_used_count = 0;


 for (VAR_35 = 0; VAR_35 < VAR_17; VAR_35++) {
  VAR_33 = &VAR_32->mge_rx_desc[VAR_35];
  VAR_33->mge_desc->cmd_status = VAR_18 | VAR_8;
  VAR_33->mge_desc->buff_size = VAR_7;
  FUNC_14(VAR_32->mge_desc_dtag, VAR_33->desc_dmap,
      VAR_0 | VAR_1);
 }


 FUNC_11(VAR_32, VAR_19, FUNC_1(VAR_16));


 VAR_34 = FUNC_4(VAR_32, VAR_12);
 VAR_34 |= VAR_28;
 FUNC_11(VAR_32, VAR_12, VAR_34);
 VAR_36 = 0x100000;
 for (;;) {
  VAR_34 = FUNC_4(VAR_32, VAR_14);
  if (VAR_34 & VAR_24)
   break;
  FUNC_0(100);
  if (--VAR_36 == 0) {
   FUNC_16(VAR_32->ifp, "Timeout on link-up\n");
   break;
  }
 }


 FUNC_21(VAR_32);
 FUNC_22(VAR_32);
 FUNC_17(VAR_32, 1);


 VAR_32->ifp->if_drv_flags |= VAR_4;
 VAR_32->ifp->if_drv_flags &= ~VAR_3;
 VAR_32->wd_timer = 0;


 if (VAR_32->phy_attached)
  FUNC_15(&VAR_32->wd_callout, VAR_29, VAR_30, VAR_32);
}
