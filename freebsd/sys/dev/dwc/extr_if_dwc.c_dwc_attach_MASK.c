
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {void* ifq_drv_maxlen; } ;
struct ifnet {int if_flags; TYPE_1__ if_snd; int if_init; int if_ioctl; int if_start; int if_capabilities; int if_capenable; struct dwc_softc* if_softc; } ;
struct dwc_softc {scalar_t__ mactype; int rxdesc_ring_paddr; int txdesc_ring_paddr; int is_attached; int miibus; void* mii_softc; struct ifnet* ifp; int intr_cookie; int * res; int mtx; int dwc_callout; int dev; int bsh; int bst; int mii_clk; void* txcount; scalar_t__ rx_idx; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (TYPE_1__*,void*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_16 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
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
 int FUNC_6 (struct dwc_softc*,int ) ;
 int VAR_27 ;
 int VAR_28 ;
 void* VAR_29 ;
 int FUNC_7 (struct dwc_softc*,int ,int) ;
 scalar_t__ FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ,int ,int,int *,int ,struct dwc_softc*,int *) ;
 int FUNC_10 (int *,int *,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 void* FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,char*) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (struct dwc_softc*,int *) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ FUNC_18 (int ) ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_19 (struct ifnet*,int *) ;
 struct ifnet* FUNC_20 (int ) ;
 int FUNC_21 (struct ifnet*,int ,int ) ;
 int FUNC_22 (int ,int *,struct ifnet*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_23 (int *,int ,int ,int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 scalar_t__ FUNC_26 (struct dwc_softc*) ;

__attribute__((used)) static int
FUNC_27(device_t VAR_37)
{
 uint8_t VAR_38[VAR_11];
 struct dwc_softc *VAR_39;
 struct ifnet *VAR_40;
 int VAR_41, VAR_42;
 uint32_t VAR_43;

 VAR_39 = FUNC_13(VAR_37);
 VAR_39->dev = VAR_37;
 VAR_39->rx_idx = 0;
 VAR_39->txcount = VAR_29;
 VAR_39->mii_clk = FUNC_5(VAR_37);
 VAR_39->mactype = FUNC_4(VAR_37);

 if (FUNC_3(VAR_37) != 0)
  return (VAR_10);






 if (FUNC_8(VAR_37, VAR_35, VAR_39->res)) {
  FUNC_15(VAR_37, "could not allocate resources\n");
  return (VAR_10);
 }


 VAR_39->bst = FUNC_25(VAR_39->res[0]);
 VAR_39->bsh = FUNC_24(VAR_39->res[0]);


 if (FUNC_17(VAR_39, VAR_38)) {
  FUNC_15(VAR_39->dev, "can't get mac\n");
  return (VAR_10);
 }


 if (FUNC_18(VAR_37) != 0) {
  FUNC_15(VAR_37, "Can't reset the PHY\n");
  return (VAR_10);
 }


 VAR_43 = FUNC_6(VAR_39, VAR_1);
 VAR_43 |= (VAR_8);
 FUNC_7(VAR_39, VAR_1, VAR_43);

 for (VAR_42 = 0; VAR_42 < VAR_19; VAR_42++) {
  if ((FUNC_6(VAR_39, VAR_1) & VAR_8) == 0)
   break;
  FUNC_0(10);
 }
 if (VAR_42 >= VAR_19) {
  FUNC_15(VAR_39->dev, "Can't reset DWC.\n");
  return (VAR_10);
 }

 if (VAR_39->mactype == VAR_9) {
  VAR_43 = VAR_3;
  VAR_43 |= (VAR_6 << VAR_7);
 } else
  VAR_43 = (VAR_2);
 VAR_43 |= (VAR_4 << VAR_5);
 FUNC_7(VAR_39, VAR_1, VAR_43);




 VAR_43 = FUNC_6(VAR_39, VAR_26);
 VAR_43 &= ~(VAR_23 | VAR_22);
 FUNC_7(VAR_39, VAR_26, VAR_43);

 if (FUNC_26(VAR_39))
         return (VAR_10);


 FUNC_7(VAR_39, VAR_27, VAR_39->rxdesc_ring_paddr);
 FUNC_7(VAR_39, VAR_28, VAR_39->txdesc_ring_paddr);

 FUNC_23(&VAR_39->mtx, FUNC_12(VAR_39->dev),
     VAR_25, VAR_24);

 FUNC_10(&VAR_39->dwc_callout, &VAR_39->mtx, 0);


 VAR_41 = FUNC_9(VAR_37, VAR_39->res[1], VAR_18 | VAR_17,
     ((void*)0), VAR_31, VAR_39, &VAR_39->intr_cookie);
 if (VAR_41 != 0) {
  FUNC_15(VAR_37, "could not setup interrupt handler.\n");
  return (VAR_10);
 }


 VAR_39->ifp = VAR_40 = FUNC_20(VAR_16);

 VAR_40->if_softc = VAR_39;
 FUNC_21(VAR_40, FUNC_11(VAR_37), FUNC_14(VAR_37));
 VAR_40->if_flags = VAR_13 | VAR_15 | VAR_14;
 VAR_40->if_capabilities = VAR_12;
 VAR_40->if_capenable = VAR_40->if_capabilities;
 VAR_40->if_start = VAR_36;
 VAR_40->if_ioctl = VAR_32;
 VAR_40->if_init = VAR_30;
 FUNC_1(&VAR_40->if_snd, VAR_29 - 1);
 VAR_40->if_snd.ifq_drv_maxlen = VAR_29 - 1;
 FUNC_2(&VAR_40->if_snd);


 VAR_41 = FUNC_22(VAR_37, &VAR_39->miibus, VAR_40, VAR_33,
     VAR_34, VAR_0, VAR_21,
     VAR_20, 0);

 if (VAR_41 != 0) {
  FUNC_15(VAR_37, "PHY attach failed\n");
  return (VAR_10);
 }
 VAR_39->mii_softc = FUNC_13(VAR_39->miibus);


 FUNC_19(VAR_40, VAR_38);
 VAR_39->is_attached = 1;

 return (0);
}
