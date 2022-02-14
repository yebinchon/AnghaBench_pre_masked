
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int nge_tx_ring_paddr; int nge_rx_ring_paddr; } ;
struct nge_softc {int nge_int_holdoff; int nge_stat_ch; scalar_t__ nge_watchdog_timer; int nge_flags; TYPE_1__ nge_rdata; int nge_dev; struct ifnet* nge_ifp; int nge_miibus; } ;
struct mii_data {int dummy; } ;
struct ifnet {int if_drv_flags; int if_capenable; } ;


 int VAR_0 ;
 int FUNC_0 (struct nge_softc*,int ,int ) ;
 int FUNC_1 (struct nge_softc*,int ) ;
 int FUNC_2 (struct nge_softc*,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* FUNC_3 (struct ifnet*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (struct nge_softc*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_7 (struct nge_softc*,int ,int) ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int FUNC_8 (int *,int ,int ,struct nge_softc*) ;
 struct mii_data* FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int VAR_49 ;
 int FUNC_11 (struct mii_data*) ;
 scalar_t__ FUNC_12 (struct nge_softc*) ;
 int FUNC_13 (struct nge_softc*) ;
 int FUNC_14 (struct nge_softc*) ;
 int FUNC_15 (struct nge_softc*) ;
 int FUNC_16 (struct nge_softc*) ;
 int VAR_50 ;

__attribute__((used)) static void
FUNC_17(struct nge_softc *VAR_51)
{
 struct ifnet *VAR_52 = VAR_51->nge_ifp;
 struct mii_data *VAR_53;
 uint8_t *VAR_54;
 uint32_t VAR_55;

 FUNC_6(VAR_51);

 if ((VAR_52->if_drv_flags & VAR_6) != 0)
  return;




 FUNC_16(VAR_51);


 FUNC_14(VAR_51);


 FUNC_2(VAR_51, VAR_33, 0);
 FUNC_0(VAR_51, VAR_33, VAR_0);

 VAR_53 = FUNC_9(VAR_51->nge_miibus);


 VAR_54 = FUNC_3(VAR_51->nge_ifp);
 FUNC_2(VAR_51, VAR_33, VAR_12);
 FUNC_2(VAR_51, VAR_34, (VAR_54[1] << 8) | VAR_54[0]);
 FUNC_2(VAR_51, VAR_33, VAR_13);
 FUNC_2(VAR_51, VAR_34, (VAR_54[3] << 8) | VAR_54[2]);
 FUNC_2(VAR_51, VAR_33, VAR_14);
 FUNC_2(VAR_51, VAR_34, (VAR_54[5] << 8) | VAR_54[4]);


 if (FUNC_12(VAR_51) == VAR_1) {
  FUNC_10(VAR_51->nge_dev, "initialization failed: no "
   "memory for rx buffers\n");
  FUNC_16(VAR_51);
  return;
 }




 FUNC_13(VAR_51);


 FUNC_15(VAR_51);


 FUNC_2(VAR_51, VAR_31, 0);
 FUNC_2(VAR_51, VAR_23,
     VAR_26 |
     VAR_25 |
     ((1 << 24) & VAR_29) |
     ((1 << 22) & VAR_30) |
     ((1 << 20) & VAR_27) |
     ((1 << 18) & VAR_28) |
     VAR_24);




 FUNC_2(VAR_51, VAR_36,
     FUNC_4(VAR_51->nge_rdata.nge_rx_ring_paddr));
 FUNC_2(VAR_51, VAR_37,
     FUNC_5(VAR_51->nge_rdata.nge_rx_ring_paddr));
 FUNC_2(VAR_51, VAR_40,
     FUNC_4(VAR_51->nge_rdata.nge_tx_ring_paddr));
 FUNC_2(VAR_51, VAR_41,
     FUNC_5(VAR_51->nge_rdata.nge_tx_ring_paddr));


 FUNC_2(VAR_51, VAR_35, VAR_32);

 FUNC_2(VAR_51, VAR_47, 0);




 if ((VAR_52->if_capenable & VAR_3) != 0)
  FUNC_7(VAR_51, VAR_47, VAR_42);






 FUNC_7(VAR_51, VAR_47, VAR_43);
 if ((VAR_52->if_capenable & VAR_4) != 0)
  FUNC_7(VAR_51, VAR_47, VAR_44);


 FUNC_2(VAR_51, VAR_39, VAR_38);




 FUNC_2(VAR_51, VAR_48, VAR_45);





 FUNC_7(VAR_51, VAR_48, VAR_46);







 FUNC_7(VAR_51, VAR_7, VAR_11 |
     VAR_10 | VAR_9 | VAR_8);







 FUNC_2(VAR_51, VAR_17, VAR_51->nge_int_holdoff);




 VAR_55 = FUNC_1(VAR_51, VAR_20);
 VAR_55 &= ~VAR_22;
 VAR_55 |= VAR_21;
 FUNC_2(VAR_51, VAR_20, VAR_55);




 FUNC_2(VAR_51, VAR_18, VAR_19);
 FUNC_2(VAR_51, VAR_16, 1);

 VAR_51->nge_flags &= ~VAR_15;
 FUNC_11(VAR_53);

 VAR_51->nge_watchdog_timer = 0;
 FUNC_8(&VAR_51->nge_stat_ch, VAR_49, VAR_50, VAR_51);

 VAR_52->if_drv_flags |= VAR_6;
 VAR_52->if_drv_flags &= ~VAR_5;
}
