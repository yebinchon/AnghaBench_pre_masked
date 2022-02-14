
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int ;
struct ip {int dummy; } ;
struct ifnet {int if_drv_flags; } ;
struct TYPE_2__ {int rb_txddma; int rb_rxddma; } ;
struct hme_softc {int sc_burst; int sc_tick_ch; scalar_t__ sc_wdog_timer; TYPE_1__ sc_rb; int sc_dev; struct ifnet* sc_ifp; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,char*,int ,int,int) ;
 int FUNC_3 (int ,char*,int,int,int,int) ;
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
 int VAR_12 ;
 int FUNC_4 (struct hme_softc*,int ) ;
 int FUNC_5 (struct hme_softc*,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (struct hme_softc*,int ) ;
 int FUNC_7 (struct hme_softc*,int ,int) ;
 int FUNC_8 (struct hme_softc*,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
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
 int FUNC_9 (struct hme_softc*,int ) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_10 (struct hme_softc*,int ,int) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_11 (struct hme_softc*,int ,int) ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_12 (struct hme_softc*,int ) ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int FUNC_13 (struct hme_softc*,int ,int) ;
 int VAR_51 ;
 int VAR_52 ;
 int* FUNC_14 (struct ifnet*) ;
 int VAR_53 ;
 int VAR_54 ;
 int FUNC_15 (int *,int ,int ,struct hme_softc*) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (struct hme_softc*) ;
 scalar_t__ FUNC_18 (struct hme_softc*) ;
 int FUNC_19 (struct hme_softc*) ;
 int FUNC_20 (struct hme_softc*,int ) ;
 int FUNC_21 (struct hme_softc*) ;
 int VAR_55 ;
 int VAR_56 ;
 int FUNC_22 (char*) ;

__attribute__((used)) static void
FUNC_23(struct hme_softc *VAR_57)
{
 struct ifnet *VAR_58 = VAR_57->sc_ifp;
 u_int8_t *VAR_59;
 u_int32_t VAR_60, VAR_61;

 FUNC_8(VAR_57, VAR_54);

 if ((VAR_58->if_drv_flags & VAR_52) != 0)
  return;
 FUNC_21(VAR_57);


 FUNC_19(VAR_57);







 if (FUNC_18(VAR_57) != 0) {
  FUNC_16(VAR_57->sc_dev, "out of buffers; init aborted.");
  return;
 }


 FUNC_10(VAR_57, VAR_23, 0);
 FUNC_10(VAR_57, VAR_18, 0);
 FUNC_10(VAR_57, VAR_17, 0);
 FUNC_10(VAR_57, VAR_19, 0);
 FUNC_10(VAR_57, VAR_28, VAR_35);


 VAR_59 = FUNC_14(VAR_58);
 FUNC_10(VAR_57, VAR_20, (VAR_59[0] << 8) | VAR_59[1]);
 FUNC_10(VAR_57, VAR_21, (VAR_59[2] << 8) | VAR_59[3]);
 FUNC_10(VAR_57, VAR_22, (VAR_59[4] << 8) | VAR_59[5]);





 VAR_61 = ((VAR_59[4] << 8) | VAR_59[5]) & 0x3fff;
 FUNC_10(VAR_57, VAR_24, VAR_61);




 FUNC_20(VAR_57, 0);


 FUNC_7(VAR_57, VAR_14, VAR_57->sc_rb.rb_txddma);

 FUNC_7(VAR_57, VAR_15, VAR_38 / 16 - 1);

 FUNC_5(VAR_57, VAR_2, VAR_57->sc_rb.rb_rxddma);
 FUNC_10(VAR_57, VAR_26, VAR_35);


 FUNC_13(VAR_57, VAR_41,
     ~(
  VAR_46 |
  VAR_48 |
  VAR_49 |
  VAR_50 |
  VAR_47 |
  VAR_45 ));

 switch (VAR_57->sc_burst) {
 default:
  VAR_61 = 0;
  break;
 case 16:
  VAR_61 = VAR_42;
  break;
 case 32:
  VAR_61 = VAR_43;
  break;
 case 64:
  VAR_61 = VAR_44;
  break;
 }
 FUNC_13(VAR_57, VAR_40, VAR_61);




 VAR_61 = FUNC_6(VAR_57, VAR_13);
 VAR_61 |= VAR_16;
 FUNC_7(VAR_57, VAR_13, VAR_61);


 VAR_61 = FUNC_4(VAR_57, VAR_1);


 VAR_61 &= ~VAR_12;
 switch (VAR_37) {
 case 32:
  VAR_61 |= VAR_10;
  break;
 case 64:
  VAR_61 |= VAR_11;
  break;
 case 128:
  VAR_61 |= VAR_8;
  break;
 case 256:
  VAR_61 |= VAR_9;
  break;
 default:
  FUNC_22("hme: invalid Receive Descriptor ring size\n");
  break;
 }


 VAR_61 &= ~VAR_6;
 VAR_61 |= VAR_5 | (VAR_39 << VAR_7);

 VAR_60 = (VAR_0 + sizeof(struct ip)) / 2;
 VAR_60 = (VAR_60 << VAR_4) & VAR_3;
 VAR_61 |= VAR_60;
 FUNC_0(VAR_53, "hme_init: programming ERX_CFG to %x", (u_int)VAR_61);
 FUNC_5(VAR_57, VAR_1, VAR_61);


 VAR_61 = FUNC_9(VAR_57, VAR_29);
 VAR_61 |= VAR_34;
 FUNC_0(VAR_53, "hme_init: programming XIF to %x", (u_int)VAR_61);
 FUNC_10(VAR_57, VAR_29, VAR_61);


 VAR_61 = FUNC_9(VAR_57, VAR_25);
 VAR_61 |= VAR_31;
 VAR_61 &= ~(VAR_30);
 FUNC_0(VAR_53, "hme_init: programming RX_MAC to %x", (u_int)VAR_61);
 FUNC_10(VAR_57, VAR_25, VAR_61);


 VAR_61 = FUNC_9(VAR_57, VAR_27);
 VAR_61 |= (VAR_33 | VAR_32);
 FUNC_0(VAR_53, "hme_init: programming TX_MAC to %x", (u_int)VAR_61);
 FUNC_10(VAR_57, VAR_27, VAR_61);
 VAR_58->if_drv_flags |= VAR_52;
 VAR_58->if_drv_flags &= ~VAR_51;


 FUNC_17(VAR_57);


 VAR_57->sc_wdog_timer = 0;
 FUNC_15(&VAR_57->sc_tick_ch, VAR_56, VAR_55, VAR_57);
}
