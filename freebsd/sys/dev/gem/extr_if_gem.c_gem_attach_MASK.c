
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_hdrlen; int if_capabilities; int if_capenable; int if_hwassist; TYPE_2__ if_snd; int if_init; int if_ioctl; int if_start; struct gem_softc* if_softc; } ;
struct gem_txsoft {int * txs_dmamap; scalar_t__ txs_ndescs; int * txs_mbuf; } ;
struct gem_softc {int sc_flags; scalar_t__ sc_cddma; int sc_variant; int sc_rxfifosize; int sc_pdmatag; int sc_rdmatag; int sc_tdmatag; int sc_cdmatag; int sc_cddmamap; int sc_control_data; struct gem_txsoft* sc_txsoft; TYPE_1__* sc_rxsoft; int sc_csum_features; int sc_enaddr; int sc_dev; int sc_miibus; int sc_mii; int sc_txfreeq; int sc_txdirtyq; int sc_mtx; int sc_rx_ch; int sc_tick_ch; struct ifnet* sc_ifp; } ;
struct gem_control_data {int dummy; } ;
struct ether_vlan_header {int dummy; } ;
struct TYPE_4__ {int * rxs_dmamap; int * rxs_mbuf; } ;


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


 int FUNC_0 (struct gem_softc*,int ,int,int) ;
 int FUNC_1 (struct gem_softc*,int ) ;
 int FUNC_2 (struct gem_softc*,int ,int) ;
 int VAR_13 ;
 scalar_t__ FUNC_3 (struct gem_softc*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
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
 int VAR_30 ;
 int VAR_31 ;

 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct gem_txsoft*,int ) ;
 scalar_t__ VAR_46 ;
 int FUNC_8 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int **) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int ,int ,int,int ,struct gem_softc*,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,void**,int,int *) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *,int *,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,char*,...) ;
 int FUNC_22 (struct ifnet*,int ) ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int FUNC_23 (struct gem_softc*) ;
 int FUNC_24 (struct gem_softc*) ;
 int VAR_52 ;
 struct ifnet* FUNC_25 (int ) ;
 int FUNC_26 (struct ifnet*) ;
 int FUNC_27 (struct ifnet*,int ,int ) ;
 int FUNC_28 (int ,int *,struct ifnet*,int ,int ,int ,int,int ,int ) ;
 int VAR_53 ;

int
FUNC_29(struct gem_softc *VAR_54)
{
 struct gem_txsoft *VAR_55;
 struct ifnet *VAR_56;
 int VAR_57, VAR_58, VAR_59;
 uint32_t VAR_60;

 if (VAR_46)
  FUNC_21(VAR_54->sc_dev, "flags=0x%x\n", VAR_54->sc_flags);


 VAR_56 = VAR_54->sc_ifp = FUNC_25(VAR_40);
 if (VAR_56 == ((void*)0))
  return (VAR_11);
 VAR_54->sc_csum_features = VAR_13;
 VAR_56->if_softc = VAR_54;
 FUNC_27(VAR_56, FUNC_18(VAR_54->sc_dev),
     FUNC_20(VAR_54->sc_dev));
 VAR_56->if_flags = VAR_37 | VAR_39 | VAR_38;
 VAR_56->if_start = VAR_52;
 VAR_56->if_ioctl = VAR_49;
 VAR_56->if_init = VAR_48;
 FUNC_4(&VAR_56->if_snd, VAR_33);
 VAR_56->if_snd.ifq_drv_maxlen = VAR_33;
 FUNC_5(&VAR_56->if_snd);

 FUNC_17(&VAR_54->sc_tick_ch, &VAR_54->sc_mtx, 0);





 FUNC_24(VAR_54);

 VAR_57 = FUNC_8(FUNC_16(VAR_54->sc_dev), 1, 0,
     VAR_8, VAR_7, ((void*)0), ((void*)0),
     VAR_9, 0, VAR_9, 0, ((void*)0),
     ((void*)0), &VAR_54->sc_pdmatag);
 if (VAR_57 != 0)
  goto fail_ifnet;

 VAR_57 = FUNC_8(VAR_54->sc_pdmatag, 1, 0,
     VAR_7, VAR_7, ((void*)0), ((void*)0), VAR_41,
     1, VAR_41, VAR_1, ((void*)0), ((void*)0), &VAR_54->sc_rdmatag);
 if (VAR_57 != 0)
  goto fail_ptag;

 VAR_57 = FUNC_8(VAR_54->sc_pdmatag, 1, 0,
     VAR_7, VAR_7, ((void*)0), ((void*)0),
     VAR_41 * VAR_27, VAR_27, VAR_41,
     VAR_1, ((void*)0), ((void*)0), &VAR_54->sc_tdmatag);
 if (VAR_57 != 0)
  goto fail_rtag;

 VAR_57 = FUNC_8(VAR_54->sc_pdmatag, VAR_45, 0,
     VAR_7, VAR_7, ((void*)0), ((void*)0),
     sizeof(struct gem_control_data), 1,
     sizeof(struct gem_control_data), 0,
     ((void*)0), ((void*)0), &VAR_54->sc_cdmatag);
 if (VAR_57 != 0)
  goto fail_ttag;





 if ((VAR_57 = FUNC_14(VAR_54->sc_cdmatag,
     (void **)&VAR_54->sc_control_data,
     VAR_3 | VAR_2 | VAR_4,
     &VAR_54->sc_cddmamap)) != 0) {
  FUNC_21(VAR_54->sc_dev,
      "unable to allocate control data, error = %d\n", VAR_57);
  goto fail_ctag;
 }

 VAR_54->sc_cddma = 0;
 if ((VAR_57 = FUNC_12(VAR_54->sc_cdmatag, VAR_54->sc_cddmamap,
     VAR_54->sc_control_data, sizeof(struct gem_control_data),
     VAR_47, VAR_54, 0)) != 0 || VAR_54->sc_cddma == 0) {
  FUNC_21(VAR_54->sc_dev,
      "unable to load control data DMA map, error = %d\n",
      VAR_57);
  goto fail_cmem;
 }




 FUNC_6(&VAR_54->sc_txfreeq);
 FUNC_6(&VAR_54->sc_txdirtyq);




 VAR_57 = VAR_10;
 for (VAR_58 = 0; VAR_58 < VAR_33; VAR_58++) {
  VAR_55 = &VAR_54->sc_txsoft[VAR_58];
  VAR_55->txs_mbuf = ((void*)0);
  VAR_55->txs_ndescs = 0;
  if ((VAR_57 = FUNC_10(VAR_54->sc_tdmatag, 0,
      &VAR_55->txs_dmamap)) != 0) {
   FUNC_21(VAR_54->sc_dev,
       "unable to create TX DMA map %d, error = %d\n",
       VAR_58, VAR_57);
   goto fail_txd;
  }
  FUNC_7(&VAR_54->sc_txfreeq, VAR_55, VAR_53);
 }




 for (VAR_58 = 0; VAR_58 < VAR_26; VAR_58++) {
  if ((VAR_57 = FUNC_10(VAR_54->sc_rdmatag, 0,
      &VAR_54->sc_rxsoft[VAR_58].rxs_dmamap)) != 0) {
   FUNC_21(VAR_54->sc_dev,
       "unable to create RX DMA map %d, error = %d\n",
       VAR_58, VAR_57);
   goto fail_rxd;
  }
  VAR_54->sc_rxsoft[VAR_58].rxs_mbuf = ((void*)0);
 }


 if ((VAR_54->sc_flags & VAR_31) != 0)
  goto serdes;


 if (VAR_54->sc_variant != 128) {
  FUNC_2(VAR_54, VAR_21,
      VAR_20);
  FUNC_0(VAR_54, VAR_21, 4,
      VAR_5 | VAR_6);
 }

 FUNC_23(VAR_54);




 VAR_57 = VAR_12;
 VAR_60 = FUNC_1(VAR_54, VAR_14);
 if ((VAR_60 & VAR_16) != 0) {
  VAR_60 |= VAR_17;
  FUNC_2(VAR_54, VAR_14, VAR_60);
  FUNC_0(VAR_54, VAR_14, 4,
      VAR_5 | VAR_6);
  switch (VAR_54->sc_variant) {
  case 128:
   VAR_59 = VAR_28;
   break;
  default:
   VAR_59 = VAR_44;
   break;
  }
  VAR_57 = FUNC_28(VAR_54->sc_dev, &VAR_54->sc_miibus, VAR_56,
      VAR_50, VAR_51, VAR_0, VAR_59,
      VAR_43, VAR_42);
 }






 if (VAR_57 != 0 &&
     ((VAR_60 & VAR_15) != 0 || FUNC_3(VAR_54))) {
  VAR_60 &= ~VAR_17;
  FUNC_2(VAR_54, VAR_14, VAR_60);
  FUNC_0(VAR_54, VAR_14, 4,
      VAR_5 | VAR_6);
  switch (VAR_54->sc_variant) {
  case 128:
  case 129:
   VAR_59 = VAR_29;
   break;
  case 130:
   VAR_59 = VAR_28;
   break;
  default:
   VAR_59 = VAR_44;
   break;
  }
  VAR_57 = FUNC_28(VAR_54->sc_dev, &VAR_54->sc_miibus, VAR_56,
      VAR_50, VAR_51, VAR_0, VAR_59,
      VAR_43, VAR_42);
 }




 if (VAR_57 != 0 && VAR_54->sc_variant == VAR_32) {
 serdes:
  FUNC_2(VAR_54, VAR_21,
      VAR_22);
  FUNC_0(VAR_54, VAR_21, 4,
      VAR_6);
  FUNC_2(VAR_54, VAR_23,
      VAR_25 | VAR_24);
  FUNC_0(VAR_54, VAR_23, 4,
      VAR_6);
  FUNC_2(VAR_54, VAR_18, VAR_19);
  FUNC_0(VAR_54, VAR_18, 4,
      VAR_6);
  VAR_54->sc_flags |= VAR_31;
  VAR_57 = FUNC_28(VAR_54->sc_dev, &VAR_54->sc_miibus, VAR_56,
      VAR_50, VAR_51, VAR_0,
      VAR_28, VAR_43, VAR_42);
 }
 if (VAR_57 != 0) {
  FUNC_21(VAR_54->sc_dev, "attaching PHYs failed\n");
  goto fail_rxd;
 }
 VAR_54->sc_mii = FUNC_19(VAR_54->sc_miibus);
 VAR_54->sc_rxfifosize = 64 *
     FUNC_1(VAR_54, VAR_30);


 VAR_60 = FUNC_1(VAR_54, VAR_34);
 FUNC_21(VAR_54->sc_dev, "%ukB RX FIFO, %ukB TX FIFO\n",
     VAR_54->sc_rxfifosize / 1024, VAR_60 / 16);


 FUNC_22(VAR_56, VAR_54->sc_enaddr);




 VAR_56->if_hdrlen = sizeof(struct ether_vlan_header);
 VAR_56->if_capabilities |= VAR_36 | VAR_35;
 VAR_56->if_hwassist |= VAR_54->sc_csum_features;
 VAR_56->if_capenable |= VAR_36 | VAR_35;

 return (0);





 fail_rxd:
 for (VAR_58 = 0; VAR_58 < VAR_26; VAR_58++)
  if (VAR_54->sc_rxsoft[VAR_58].rxs_dmamap != ((void*)0))
   FUNC_11(VAR_54->sc_rdmatag,
       VAR_54->sc_rxsoft[VAR_58].rxs_dmamap);
 fail_txd:
 for (VAR_58 = 0; VAR_58 < VAR_33; VAR_58++)
  if (VAR_54->sc_txsoft[VAR_58].txs_dmamap != ((void*)0))
   FUNC_11(VAR_54->sc_tdmatag,
       VAR_54->sc_txsoft[VAR_58].txs_dmamap);
 FUNC_13(VAR_54->sc_cdmatag, VAR_54->sc_cddmamap);
 fail_cmem:
 FUNC_15(VAR_54->sc_cdmatag, VAR_54->sc_control_data,
     VAR_54->sc_cddmamap);
 fail_ctag:
 FUNC_9(VAR_54->sc_cdmatag);
 fail_ttag:
 FUNC_9(VAR_54->sc_tdmatag);
 fail_rtag:
 FUNC_9(VAR_54->sc_rdmatag);
 fail_ptag:
 FUNC_9(VAR_54->sc_pdmatag);
 fail_ifnet:
 FUNC_26(VAR_56);
 return (VAR_57);
}
