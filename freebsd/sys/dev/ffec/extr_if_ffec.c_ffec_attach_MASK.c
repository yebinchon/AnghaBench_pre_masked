
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
struct mbuf {int dummy; } ;
struct TYPE_9__ {size_t ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_hdrlen; int if_linkmiblen; int * if_linkmib; TYPE_4__ if_snd; int if_init; int if_ioctl; int if_start; int if_capabilities; int if_capenable; struct ffec_softc* if_softc; } ;
struct ffec_softc {size_t fecflags; int rxbuf_align; int txbuf_align; scalar_t__ phy_conn_type; int is_attached; int miibus; void* mii_softc; int mibdata; struct ifnet* ifp; int * intr_cookie; int ** irq_res; int dev; TYPE_2__* rxbuf_map; int rxbuf_tag; int rxdesc_ring_paddr; int rxdesc_ring; int rxdesc_map; int rxdesc_tag; TYPE_1__* txbuf_map; int txbuf_tag; int txdesc_ring_paddr; int txdesc_ring; int txdesc_map; int txdesc_tag; int * mem_res; int mtx; int ffec_callout; scalar_t__ fectype; } ;
struct ether_vlan_header {int dummy; } ;
typedef int phandle_t ;
typedef int device_t ;
struct TYPE_8__ {uintptr_t ocd_data; } ;
struct TYPE_7__ {int map; } ;
struct TYPE_6__ {int map; } ;


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
 uintptr_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct ffec_softc*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (TYPE_4__*,size_t) ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ FUNC_3 (int,char*) ;
 int VAR_32 ;
 size_t VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 size_t VAR_36 ;
 int VAR_37 ;
 int FUNC_4 (struct ffec_softc*,int ,size_t) ;
 scalar_t__ VAR_38 ;
 int * FUNC_5 (int ,int ,int*,int ) ;
 int FUNC_6 (int ,int ,int **) ;
 int FUNC_7 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_10 (int ,void**,int,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int *,int,int *,int ,struct ffec_softc*,int *) ;
 int FUNC_13 (int *,int *,int ) ;
 int VAR_39 ;
 int FUNC_14 (int ) ;
 void* FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (struct ifnet*,scalar_t__*) ;
 scalar_t__ FUNC_19 (int,int ,int*,void**) ;
 struct mbuf* FUNC_20 (struct ffec_softc*) ;
 int FUNC_21 (int ) ;
 int VAR_40 ;
 int FUNC_22 (struct ffec_softc*,scalar_t__*) ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_23 (struct ffec_softc*) ;
 int FUNC_24 (struct ffec_softc*,size_t,struct mbuf*) ;
 int FUNC_25 (struct ffec_softc*,size_t,int ,int ) ;
 int VAR_46 ;
 struct ifnet* FUNC_26 (int ) ;
 int FUNC_27 (struct ifnet*,int ,int ) ;
 int VAR_47 ;
 int FUNC_28 (int ,int *,struct ifnet*,int ,int ,int ,int,int ,int ) ;
 scalar_t__ FUNC_29 (int) ;
 int FUNC_30 (int ) ;
 TYPE_3__* FUNC_31 (int ,int ) ;

__attribute__((used)) static int
FUNC_32(device_t VAR_48)
{
 struct ffec_softc *VAR_49;
 struct ifnet *VAR_50 = ((void*)0);
 struct mbuf *VAR_51;
 void *VAR_52;
 uintptr_t VAR_53;
 phandle_t VAR_54;
 uint32_t VAR_55, VAR_56;
 int VAR_57, VAR_58, VAR_59, VAR_60;
 uint8_t VAR_61[VAR_9];

 VAR_49 = FUNC_15(VAR_48);
 VAR_49->dev = VAR_48;

 FUNC_0(VAR_49);





 VAR_53 = FUNC_31(VAR_48, VAR_39)->ocd_data;
 VAR_49->fectype = (uint8_t)(VAR_53 & VAR_11);
 VAR_49->fecflags = (uint32_t)(VAR_53 & ~VAR_11);

 if (VAR_49->fecflags & VAR_10) {
  VAR_49->rxbuf_align = 64;
  VAR_49->txbuf_align = 1;
 } else {
  VAR_49->rxbuf_align = 16;
  VAR_49->txbuf_align = 16;
 }





 if ((VAR_54 = FUNC_30(VAR_48)) == -1) {
  FUNC_17(VAR_48, "Impossible: Can't find ofw bus node\n");
  VAR_57 = VAR_8;
  goto out;
 }
 VAR_49->phy_conn_type = FUNC_29(VAR_54);
 if (VAR_49->phy_conn_type == VAR_29) {
  FUNC_17(VAR_49->dev, "No valid 'phy-mode' "
      "property found in FDT data for device.\n");
  VAR_57 = VAR_6;
  goto out;
 }

 FUNC_13(&VAR_49->ffec_callout, &VAR_49->mtx, 0);


 VAR_59 = 0;
 VAR_49->mem_res = FUNC_5(VAR_48, VAR_35, &VAR_59,
     VAR_32);
 if (VAR_49->mem_res == ((void*)0)) {
  FUNC_17(VAR_48, "could not allocate memory resources.\n");
  VAR_57 = VAR_7;
  goto out;
 }

 VAR_57 = FUNC_6(VAR_48, VAR_47, VAR_49->irq_res);
 if (VAR_57 != 0) {
  FUNC_17(VAR_48, "could not allocate interrupt resources\n");
  goto out;
 }




 VAR_57 = FUNC_7(
     FUNC_11(VAR_48),
     VAR_13, 0,
     VAR_5,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_37, 1,
     VAR_37,
     0,
     ((void*)0), ((void*)0),
     &VAR_49->txdesc_tag);
 if (VAR_57 != 0) {
  FUNC_17(VAR_49->dev,
      "could not create TX ring DMA tag.\n");
  goto out;
 }

 VAR_57 = FUNC_10(VAR_49->txdesc_tag, (void**)&VAR_49->txdesc_ring,
     VAR_1 | VAR_2 | VAR_3, &VAR_49->txdesc_map);
 if (VAR_57 != 0) {
  FUNC_17(VAR_49->dev,
      "could not allocate TX descriptor ring.\n");
  goto out;
 }

 VAR_57 = FUNC_9(VAR_49->txdesc_tag, VAR_49->txdesc_map, VAR_49->txdesc_ring,
     VAR_37, VAR_40, &VAR_49->txdesc_ring_paddr, 0);
 if (VAR_57 != 0) {
  FUNC_17(VAR_49->dev,
      "could not load TX descriptor ring map.\n");
  goto out;
 }

 VAR_57 = FUNC_7(
     FUNC_11(VAR_48),
     VAR_49->txbuf_align, 0,
     VAR_5,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_27, 1,
     VAR_27,
     0,
     ((void*)0), ((void*)0),
     &VAR_49->txbuf_tag);
 if (VAR_57 != 0) {
  FUNC_17(VAR_49->dev,
      "could not create TX ring DMA tag.\n");
  goto out;
 }

 for (VAR_55 = 0; VAR_55 < VAR_36; ++VAR_55) {
  VAR_57 = FUNC_8(VAR_49->txbuf_tag, 0,
      &VAR_49->txbuf_map[VAR_55].map);
  if (VAR_57 != 0) {
   FUNC_17(VAR_49->dev,
       "could not create TX buffer DMA map.\n");
   goto out;
  }
  FUNC_25(VAR_49, VAR_55, 0, 0);
 }




 VAR_57 = FUNC_7(
     FUNC_11(VAR_48),
     VAR_13, 0,
     VAR_5,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_34, 1,
     VAR_34,
     0,
     ((void*)0), ((void*)0),
     &VAR_49->rxdesc_tag);
 if (VAR_57 != 0) {
  FUNC_17(VAR_49->dev,
      "could not create RX ring DMA tag.\n");
  goto out;
 }

 VAR_57 = FUNC_10(VAR_49->rxdesc_tag, (void **)&VAR_49->rxdesc_ring,
     VAR_1 | VAR_2 | VAR_3, &VAR_49->rxdesc_map);
 if (VAR_57 != 0) {
  FUNC_17(VAR_49->dev,
      "could not allocate RX descriptor ring.\n");
  goto out;
 }

 VAR_57 = FUNC_9(VAR_49->rxdesc_tag, VAR_49->rxdesc_map, VAR_49->rxdesc_ring,
     VAR_34, VAR_40, &VAR_49->rxdesc_ring_paddr, 0);
 if (VAR_57 != 0) {
  FUNC_17(VAR_49->dev,
      "could not load RX descriptor ring map.\n");
  goto out;
 }

 VAR_57 = FUNC_7(
     FUNC_11(VAR_48),
     1, 0,
     VAR_5,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_27, 1,
     VAR_27,
     0,
     ((void*)0), ((void*)0),
     &VAR_49->rxbuf_tag);
 if (VAR_57 != 0) {
  FUNC_17(VAR_49->dev,
      "could not create RX buf DMA tag.\n");
  goto out;
 }

 for (VAR_55 = 0; VAR_55 < VAR_33; ++VAR_55) {
  VAR_57 = FUNC_8(VAR_49->rxbuf_tag, 0,
      &VAR_49->rxbuf_map[VAR_55].map);
  if (VAR_57 != 0) {
   FUNC_17(VAR_49->dev,
       "could not create RX buffer DMA map.\n");
   goto out;
  }
  if ((VAR_51 = FUNC_20(VAR_49)) == ((void*)0)) {
   FUNC_17(VAR_48, "Could not alloc mbuf\n");
   VAR_57 = VAR_7;
   goto out;
  }
  if ((VAR_57 = FUNC_24(VAR_49, VAR_55, VAR_51)) != 0) {
   FUNC_17(VAR_49->dev,
       "could not create new RX buffer.\n");
   goto out;
  }
 }


 FUNC_22(VAR_49, VAR_61);
 if (VAR_49->fecflags & VAR_10)
  FUNC_4(VAR_49, VAR_14, 0);
 else
  FUNC_4(VAR_49, VAR_14, VAR_15);


 for (VAR_60 = 0; VAR_60 < VAR_26; ++VAR_60) {
  if (VAR_49->irq_res[VAR_60] != ((void*)0)) {
   VAR_57 = FUNC_12(VAR_48, VAR_49->irq_res[VAR_60],
       VAR_25 | VAR_24, ((void*)0), VAR_42, VAR_49,
       &VAR_49->intr_cookie[VAR_60]);
   if (VAR_57 != 0) {
    FUNC_17(VAR_48,
        "could not setup interrupt handler.\n");
    goto out;
   }
  }
 }
 VAR_56 = 13 << VAR_17;
 if (FUNC_3(VAR_54, "phy-disable-preamble")) {
  VAR_56 |= VAR_16;
  if (VAR_38)
   FUNC_17(VAR_48, "PHY preamble disabled\n");
 }
 FUNC_4(VAR_49, VAR_18, VAR_56);


 VAR_49->ifp = VAR_50 = FUNC_26(VAR_23);

 VAR_50->if_softc = VAR_49;
 FUNC_27(VAR_50, FUNC_14(VAR_48), FUNC_16(VAR_48));
 VAR_50->if_flags = VAR_20 | VAR_22 | VAR_21;
 VAR_50->if_capabilities = VAR_19;
 VAR_50->if_capenable = VAR_50->if_capabilities;
 VAR_50->if_start = VAR_46;
 VAR_50->if_ioctl = VAR_43;
 VAR_50->if_init = VAR_41;
 FUNC_1(&VAR_50->if_snd, VAR_36 - 1);
 VAR_50->if_snd.ifq_drv_maxlen = VAR_36 - 1;
 FUNC_2(&VAR_50->if_snd);
 VAR_50->if_hdrlen = sizeof(struct ether_vlan_header);







 FUNC_23(VAR_49);


 if (FUNC_19(VAR_54, VAR_48, &VAR_58, &VAR_52) != 0) {
  VAR_58 = VAR_31;
 }
 VAR_57 = FUNC_28(VAR_48, &VAR_49->miibus, VAR_50, VAR_44,
     VAR_45, VAR_0, VAR_58, VAR_30,
     (VAR_49->fecflags & VAR_12) ? VAR_28 : 0);
 if (VAR_57 != 0) {
  FUNC_17(VAR_48, "PHY attach failed\n");
  goto out;
 }
 VAR_49->mii_softc = FUNC_15(VAR_49->miibus);


 FUNC_18(VAR_50, VAR_61);
 VAR_49->is_attached = 1;

 VAR_57 = 0;
out:

 if (VAR_57 != 0)
  FUNC_21(VAR_48);

 return (VAR_57);
}
