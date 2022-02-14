
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ifq_drv_maxlen; int ifq_maxlen; } ;
struct ifnet {int if_flags; int if_capabilities; int if_capenable; TYPE_1__ if_snd; int if_ioctl; int if_start; int if_init; int if_mtu; struct dtsec_softc* if_softc; } ;
struct dtsec_softc {scalar_t__ sc_mode; int (* sc_port_tx_init ) (struct dtsec_softc*,int ) ;int (* sc_port_rx_init ) (struct dtsec_softc*,int ) ;scalar_t__ sc_phy_addr; int sc_mac_addr; int sc_mii_dev; void* sc_mii; int sc_dev; struct ifnet* sc_ifnet; int sc_fm_base; int sc_muramh; int sc_fmh; int sc_tick_callout; int sc_mii_lock; int sc_lock; int sc_mac_mdio_irq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (struct dtsec_softc*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct dtsec_softc*,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_13 (struct dtsec_softc*) ;
 int FUNC_14 (struct dtsec_softc*) ;
 int FUNC_15 (struct dtsec_softc*) ;
 int FUNC_16 (struct dtsec_softc*) ;
 int FUNC_17 (struct ifnet*,int ) ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (int ,int *) ;
 struct ifnet* FUNC_21 (int ) ;
 int FUNC_22 (struct ifnet*,char*,int ) ;
 int FUNC_23 (int ,int *,struct ifnet*,int ,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_24 (int *,int ,char*,int ) ;
 int FUNC_25 (struct dtsec_softc*,int ) ;
 int FUNC_26 (struct dtsec_softc*,int ) ;

int
FUNC_27(device_t VAR_22)
{
 struct dtsec_softc *VAR_23;
 device_t VAR_24;
 int VAR_25;
 struct ifnet *VAR_26;

 VAR_23 = FUNC_7(VAR_22);

 VAR_24 = FUNC_6(VAR_22);
 VAR_23->sc_dev = VAR_22;
 VAR_23->sc_mac_mdio_irq = VAR_15;


 if (FUNC_2() != VAR_7)
  return (VAR_5);


 FUNC_24(&VAR_23->sc_lock, FUNC_5(VAR_22),
     "DTSEC Global Lock", VAR_14);

 FUNC_24(&VAR_23->sc_mii_lock, FUNC_5(VAR_22),
     "DTSEC MII Lock", VAR_14);


 FUNC_3(&VAR_23->sc_tick_callout, VAR_1);


 if ((VAR_25 = FUNC_19(VAR_24, &VAR_23->sc_fmh)) != 0)
  return (VAR_25);

 if ((VAR_25 = FUNC_20(VAR_24, &VAR_23->sc_muramh)) != 0)
  return (VAR_25);

 if ((VAR_25 = FUNC_18(VAR_24, &VAR_23->sc_fm_base)) != 0)
  return (VAR_25);


 FUNC_10(VAR_23);


 if (VAR_23->sc_mode == VAR_2) {

  VAR_25 = FUNC_16(VAR_23);
  if (VAR_25 != 0)
   return (VAR_3);


  VAR_25 = FUNC_14(VAR_23);
  if (VAR_25 != 0)
   return (VAR_3);


  VAR_25 = FUNC_13(VAR_23);
  if (VAR_25 != 0)
   return (VAR_3);


  VAR_25 = FUNC_15(VAR_23);
  if (VAR_25 != 0)
   return (VAR_3);
 }


 VAR_25 = FUNC_12(VAR_23, VAR_23->sc_mac_addr);
 if (VAR_25 != 0) {
  FUNC_11(VAR_22);
  return (VAR_5);
 }


 VAR_25 = VAR_23->sc_port_tx_init(VAR_23, FUNC_8(VAR_23->sc_dev));
 if (VAR_25 != 0) {
  FUNC_11(VAR_22);
  return (VAR_5);
 }


 VAR_25 = VAR_23->sc_port_rx_init(VAR_23, FUNC_8(VAR_23->sc_dev));
 if (VAR_25 != 0) {
  FUNC_11(VAR_22);
  return (VAR_5);
 }


 VAR_26 = VAR_23->sc_ifnet = FUNC_21(VAR_12);
 if (VAR_26 == ((void*)0)) {
  FUNC_9(VAR_23->sc_dev, "if_alloc() failed.\n");
  FUNC_11(VAR_22);
  return (VAR_4);
 }

 VAR_26->if_softc = VAR_23;
 VAR_26->if_mtu = VAR_6;
 VAR_26->if_flags = VAR_10 | VAR_9;
 VAR_26->if_init = VAR_17;
 VAR_26->if_start = VAR_19;
 VAR_26->if_ioctl = VAR_18;
 VAR_26->if_snd.ifq_maxlen = VAR_11;

 if (VAR_23->sc_phy_addr >= 0)
  FUNC_22(VAR_26, FUNC_4(VAR_23->sc_dev),
      FUNC_8(VAR_23->sc_dev));
 else
  FUNC_22(VAR_26, "dtsec_phy", FUNC_8(VAR_23->sc_dev));







 VAR_26->if_capabilities = VAR_8;
 VAR_26->if_capenable = VAR_26->if_capabilities;


 VAR_25 = FUNC_23(VAR_23->sc_dev, &VAR_23->sc_mii_dev, VAR_26, VAR_21,
     VAR_20, VAR_0, VAR_23->sc_phy_addr,
     VAR_13, 0);
 if (VAR_25) {
  FUNC_9(VAR_23->sc_dev, "attaching PHYs failed: %d\n", VAR_25);
  FUNC_11(VAR_23->sc_dev);
  return (VAR_25);
 }
 VAR_23->sc_mii = FUNC_7(VAR_23->sc_mii_dev);


 FUNC_17(VAR_26, VAR_23->sc_mac_addr);

 return (0);
}
