
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct xae_softc {int is_attached; int xchan_rx; int macaddr; int miibus; void* mii_softc; int phy_addr; struct ifnet* ifp; int intr_cookie; int * res; int mtx; int xae_callout; int dev; int bsh; int bst; int * br; } ;
struct TYPE_3__ {scalar_t__ ifq_drv_maxlen; } ;
struct ifnet {int if_flags; TYPE_1__ if_snd; int if_init; int if_ioctl; int if_qflush; int if_transmit; int if_capabilities; int if_capenable; struct xae_softc* if_softc; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
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
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (struct xae_softc*,int ) ;
 scalar_t__ VAR_20 ;
 int FUNC_4 (struct xae_softc*,int ,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int * FUNC_5 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int ,int,int *,int ,struct xae_softc*,int *) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (struct ifnet*,int ) ;
 struct ifnet* FUNC_15 (int ) ;
 int FUNC_16 (struct ifnet*,int ,int ) ;
 scalar_t__ FUNC_17 (struct xae_softc*) ;
 int FUNC_18 (int ,int *,struct ifnet*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_19 (int *,int ,int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (struct xae_softc*) ;
 scalar_t__ FUNC_24 (struct xae_softc*,int ) ;
 scalar_t__ FUNC_25 (int ,int *) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_26 (struct xae_softc*) ;
 int VAR_28 ;
 int FUNC_27 (struct xae_softc*,int ) ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_28 (int ) ;

__attribute__((used)) static int
FUNC_29(device_t VAR_31)
{
 struct xae_softc *VAR_32;
 struct ifnet *VAR_33;
 phandle_t VAR_34;
 uint32_t VAR_35;
 int VAR_36;

 VAR_32 = FUNC_11(VAR_31);
 VAR_32->dev = VAR_31;
 VAR_34 = FUNC_20(VAR_31);

 if (FUNC_23(VAR_32) != 0) {
  FUNC_13(VAR_31, "Could not setup xDMA.\n");
  return (VAR_3);
 }

 FUNC_19(&VAR_32->mtx, FUNC_10(VAR_32->dev),
     VAR_16, VAR_15);

 VAR_32->br = FUNC_5(VAR_1, VAR_17,
     VAR_18, &VAR_32->mtx);
 if (VAR_32->br == ((void*)0))
  return (VAR_2);

 if (FUNC_6(VAR_31, VAR_29, VAR_32->res)) {
  FUNC_13(VAR_31, "could not allocate resources\n");
  return (VAR_3);
 }


 VAR_32->bst = FUNC_22(VAR_32->res[0]);
 VAR_32->bsh = FUNC_21(VAR_32->res[0]);

 FUNC_13(VAR_32->dev, "Identification: %x\n",
     FUNC_3(VAR_32, VAR_21));


 if (FUNC_24(VAR_32, VAR_32->macaddr)) {
  FUNC_13(VAR_32->dev, "can't get mac\n");
  return (VAR_3);
 }


 VAR_35 = (VAR_11 << VAR_12);
 VAR_35 |= VAR_13;
 FUNC_4(VAR_32, VAR_22, VAR_35);
 if (FUNC_17(VAR_32))
  return (VAR_3);

 FUNC_8(&VAR_32->xae_callout, &VAR_32->mtx, 0);


 VAR_36 = FUNC_7(VAR_31, VAR_32->res[1], VAR_10 | VAR_9,
     ((void*)0), VAR_24, VAR_32, &VAR_32->intr_cookie);
 if (VAR_36 != 0) {
  FUNC_13(VAR_31, "could not setup interrupt handler.\n");
  return (VAR_3);
 }


 VAR_32->ifp = VAR_33 = FUNC_15(VAR_8);
 if (VAR_33 == ((void*)0)) {
  FUNC_13(VAR_31, "could not allocate ifp.\n");
  return (VAR_3);
 }

 VAR_33->if_softc = VAR_32;
 FUNC_16(VAR_33, FUNC_9(VAR_31), FUNC_12(VAR_31));
 VAR_33->if_flags = VAR_5 | VAR_7 | VAR_6;
 VAR_33->if_capabilities = VAR_4;
 VAR_33->if_capenable = VAR_33->if_capabilities;
 VAR_33->if_transmit = VAR_30;
 VAR_33->if_qflush = VAR_28;
 VAR_33->if_ioctl = VAR_25;
 VAR_33->if_init = VAR_23;
 FUNC_0(&VAR_33->if_snd, VAR_20 - 1);
 VAR_33->if_snd.ifq_drv_maxlen = VAR_20 - 1;
 FUNC_1(&VAR_33->if_snd);

 if (FUNC_25(VAR_34, &VAR_32->phy_addr) != 0)
  return (VAR_3);


 VAR_36 = FUNC_18(VAR_31, &VAR_32->miibus, VAR_33, VAR_26,
     VAR_27, VAR_0, VAR_32->phy_addr,
     VAR_14, 0);

 if (VAR_36 != 0) {
  FUNC_13(VAR_31, "PHY attach failed\n");
  return (VAR_3);
 }
 VAR_32->mii_softc = FUNC_11(VAR_32->miibus);


 if (FUNC_2(VAR_34, "xlnx,vcu118") >= 0)
  FUNC_26(VAR_32);


 FUNC_14(VAR_33, VAR_32->macaddr);
 VAR_32->is_attached = 1;

 FUNC_27(VAR_32, VAR_19);
 FUNC_28(VAR_32->xchan_rx);

 return (0);
}
