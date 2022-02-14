
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
typedef int uint16_t ;
struct stge_softc {int sc_txthresh; int sc_IntEnable; unsigned int sc_DMACtrl; int sc_if_framesize; int sc_rev; int sc_dev; int sc_tick_ch; scalar_t__ sc_link; int sc_rxint_dmawait; int sc_rxint_nframe; int sc_miibus; struct ifnet* sc_ifp; } ;
struct mii_data {int dummy; } ;
struct ifnet {int if_drv_flags; int if_capenable; int if_mtu; } ;


 int FUNC_0 (struct stge_softc*,int ) ;
 unsigned int FUNC_1 (struct stge_softc*,int ) ;
 int FUNC_2 (struct stge_softc*,int ,int) ;
 int FUNC_3 (struct stge_softc*,int ,int) ;
 int FUNC_4 (struct stge_softc*,int ,unsigned int) ;
 unsigned int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct ifnet*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int FUNC_7 (int ) ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int FUNC_8 (int ) ;
 unsigned int FUNC_9 (int ) ;
 unsigned int FUNC_10 (int ) ;
 unsigned int FUNC_11 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_12 (struct stge_softc*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct stge_softc*,int ) ;
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
 int FUNC_15 (struct stge_softc*,int ) ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_16 (int ,int *,int ) ;
 int FUNC_17 (int *,int ,int ,struct stge_softc*) ;
 struct mii_data* FUNC_18 (int ) ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 (int ) ;
 int VAR_42 ;
 int FUNC_21 (struct mii_data*) ;
 int FUNC_22 (struct stge_softc*) ;
 int FUNC_23 (struct stge_softc*) ;
 int FUNC_24 (struct stge_softc*,int ) ;
 int FUNC_25 (struct stge_softc*) ;
 int FUNC_26 (struct stge_softc*) ;
 int FUNC_27 (struct stge_softc*) ;
 int FUNC_28 (struct stge_softc*) ;
 int FUNC_29 (struct stge_softc*) ;
 int VAR_43 ;
 int FUNC_30 (struct stge_softc*) ;

__attribute__((used)) static void
FUNC_31(struct stge_softc *VAR_44)
{
 struct ifnet *VAR_45;
 struct mii_data *VAR_46;
 uint16_t VAR_47[3];
 uint32_t VAR_48;
 int VAR_49;

 FUNC_12(VAR_44);

 VAR_45 = VAR_44->sc_ifp;
 if ((VAR_45->if_drv_flags & VAR_5) != 0)
  return;
 VAR_46 = FUNC_18(VAR_44->sc_miibus);




 FUNC_29(VAR_44);




 FUNC_24(VAR_44, VAR_23);


 VAR_49 = FUNC_22(VAR_44);
        if (VAR_49 != 0) {
                FUNC_19(VAR_44->sc_dev,
                    "initialization failed: no memory for rx buffers\n");
                FUNC_29(VAR_44);
  goto out;
        }
 FUNC_23(VAR_44);


 FUNC_16(FUNC_6(VAR_45), VAR_47, VAR_0);
 FUNC_3(VAR_44, VAR_32, FUNC_20(VAR_47[0]));
 FUNC_3(VAR_44, VAR_33, FUNC_20(VAR_47[1]));
 FUNC_3(VAR_44, VAR_34, FUNC_20(VAR_47[2]));





 FUNC_4(VAR_44, VAR_26, 0xffffffff);
 FUNC_4(VAR_44, VAR_35,
     (1U << 1) | (1U << 2) | (1U << 3) | (1U << 4) | (1U << 5) |
     (1U << 6) | (1U << 7) | (1U << 8) | (1U << 9) | (1U << 10) |
     (1U << 13) | (1U << 14) | (1U << 15) | (1U << 19) | (1U << 20) |
     (1U << 21));


 FUNC_25(VAR_44);

 FUNC_26(VAR_44);




 FUNC_4(VAR_44, VAR_36,
     FUNC_10(FUNC_15(VAR_44, 0)));
 FUNC_4(VAR_44, VAR_37,
     FUNC_11(FUNC_15(VAR_44, 0)));

 FUNC_4(VAR_44, VAR_24,
     FUNC_10(FUNC_14(VAR_44, 0)));
 FUNC_4(VAR_44, VAR_25,
     FUNC_11(FUNC_14(VAR_44, 0)));






 FUNC_2(VAR_44, VAR_39, 127);


 FUNC_2(VAR_44, VAR_29, 1);


 FUNC_3(VAR_44, VAR_41, VAR_44->sc_txthresh);


 FUNC_2(VAR_44, VAR_27, 0x30);
 FUNC_2(VAR_44, VAR_30, 0x30);


 FUNC_3(VAR_44, VAR_31, 0x7ff);


 FUNC_2(VAR_44, VAR_38, 0x30);
 FUNC_2(VAR_44, VAR_40, 0x04);
 FUNC_4(VAR_44, VAR_28,
     FUNC_9(VAR_44->sc_rxint_nframe) |
     FUNC_8(FUNC_13(VAR_44->sc_rxint_dmawait)));




 VAR_44->sc_IntEnable = VAR_6 | VAR_9 |
     VAR_10 | VAR_8 | VAR_7;






 FUNC_3(VAR_44, VAR_20, VAR_44->sc_IntEnable);





 FUNC_4(VAR_44, VAR_16, VAR_44->sc_DMACtrl | FUNC_5(3));






 FUNC_3(VAR_44, VAR_19, 29696 / 16);
 FUNC_3(VAR_44, VAR_18, 3056 / 16);




 VAR_44->sc_if_framesize = VAR_45->if_mtu + VAR_2 + VAR_1;
 FUNC_3(VAR_44, VAR_22, VAR_44->sc_if_framesize);
 FUNC_4(VAR_44, VAR_21, FUNC_7(VAR_11));

 FUNC_30(VAR_44);

 if (VAR_44->sc_rev >= 6) {

  FUNC_3(VAR_44, VAR_17,
      FUNC_0(VAR_44, VAR_17) | 0x0200);


  FUNC_3(VAR_44, VAR_17,
      FUNC_0(VAR_44, VAR_17) | 0x0010);

  FUNC_3(VAR_44, VAR_17,
      FUNC_0(VAR_44, VAR_17) | 0x0020);
 }

 VAR_48 = FUNC_1(VAR_44, VAR_21) & VAR_12;
 VAR_48 |= VAR_14 | VAR_15 | VAR_13;
 FUNC_4(VAR_44, VAR_21, VAR_48);




 FUNC_28(VAR_44);
 FUNC_27(VAR_44);

 VAR_44->sc_link = 0;



 FUNC_21(VAR_46);




 FUNC_17(&VAR_44->sc_tick_ch, VAR_42, VAR_43, VAR_44);




 VAR_45->if_drv_flags |= VAR_5;
 VAR_45->if_drv_flags &= ~VAR_4;

 out:
 if (VAR_49 != 0)
  FUNC_19(VAR_44->sc_dev, "interface not running\n");
}
