
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int ifq_drv_maxlen; } ;
struct ifnet {int if_flags; void* sc_control_data; scalar_t__ sc_cddma; int sc_rxdptr; int sc_flags; scalar_t__ sc_variant; int if_hdrlen; int * sc_tq; int sc_pdmatag; int sc_rdmatag; int sc_tdmatag; int sc_cdmatag; int sc_cddmamap; struct cas_txsoft* sc_txsoft; TYPE_1__* sc_rxdsoft; int if_capabilities; int if_capenable; int if_hwassist; int sc_enaddr; int sc_dev; int sc_miibus; int sc_mii; int sc_txfreeq; int sc_txdirtyq; int sc_tx_task; int sc_intr_task; int sc_mtx; int sc_rx_ch; int sc_tick_ch; TYPE_2__ if_snd; int if_init; int if_ioctl; int if_start; struct ifnet* if_softc; struct ifnet* sc_ifp; } ;
struct ether_vlan_header {int dummy; } ;
struct cas_txsoft {int * txs_dmamap; scalar_t__ txs_ndescs; int * txs_mbuf; } ;
struct cas_softc {int if_flags; void* sc_control_data; scalar_t__ sc_cddma; int sc_rxdptr; int sc_flags; scalar_t__ sc_variant; int if_hdrlen; int * sc_tq; int sc_pdmatag; int sc_rdmatag; int sc_tdmatag; int sc_cdmatag; int sc_cddmamap; struct cas_txsoft* sc_txsoft; TYPE_1__* sc_rxdsoft; int if_capabilities; int if_capenable; int if_hwassist; int sc_enaddr; int sc_dev; int sc_miibus; int sc_mii; int sc_txfreeq; int sc_txdirtyq; int sc_tx_task; int sc_intr_task; int sc_mtx; int sc_rx_ch; int sc_tick_ch; TYPE_2__ if_snd; int if_init; int if_ioctl; int if_start; struct cas_softc* if_softc; struct cas_softc* sc_ifp; } ;
struct cas_control_data {int dummy; } ;
struct TYPE_4__ {void* rxds_buf; scalar_t__ rxds_paddr; int rxds_dmamap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ifnet*,int ,int,int) ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (struct ifnet*,int ) ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_2 (struct ifnet*,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct cas_txsoft*,int ) ;
 int FUNC_8 (int *,int,int ,struct ifnet*) ;
 int FUNC_9 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int **) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int ,void*,int,int ,struct ifnet*,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,void**,int,int *) ;
 int FUNC_16 (int ,void*,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *,int *,int ) ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int FUNC_19 (struct ifnet*) ;
 int FUNC_20 (struct ifnet*) ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ,char*,...) ;
 int FUNC_26 (struct ifnet*,int ) ;
 struct ifnet* FUNC_27 (int ) ;
 int FUNC_28 (struct ifnet*) ;
 int FUNC_29 (struct ifnet*,int ,int ) ;
 int FUNC_30 (int ,int *,struct ifnet*,int ,int ,int ,int ,int ,int ) ;
 int * FUNC_31 (char*,int ,int ,int **) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int **,int,int ,char*,int ) ;
 int VAR_58 ;
 int VAR_59 ;

__attribute__((used)) static int
FUNC_34(struct cas_softc *VAR_60)
{
 struct cas_txsoft *VAR_61;
 struct ifnet *VAR_62;
 int VAR_63, VAR_64;
 uint32_t VAR_65;


 VAR_62 = VAR_60->sc_ifp = FUNC_27(VAR_42);
 if (VAR_62 == ((void*)0))
  return (VAR_35);
 VAR_62->if_softc = VAR_60;
 FUNC_29(VAR_62, FUNC_21(VAR_60->sc_dev),
     FUNC_24(VAR_60->sc_dev));
 VAR_62->if_flags = VAR_39 | VAR_41 | VAR_40;
 VAR_62->if_start = VAR_56;
 VAR_62->if_ioctl = VAR_52;
 VAR_62->if_init = VAR_50;
 FUNC_4(&VAR_62->if_snd, VAR_31);
 VAR_62->if_snd.ifq_drv_maxlen = VAR_31;
 FUNC_5(&VAR_62->if_snd);

 FUNC_18(&VAR_60->sc_tick_ch, &VAR_60->sc_mtx, 0);
 FUNC_18(&VAR_60->sc_rx_ch, &VAR_60->sc_mtx, 0);

 FUNC_8(&VAR_60->sc_intr_task, 0, VAR_51, VAR_60);
 FUNC_8(&VAR_60->sc_tx_task, 1, VAR_57, VAR_62);
 VAR_60->sc_tq = FUNC_31("cas_taskq", VAR_47,
     VAR_58, &VAR_60->sc_tq);
 if (VAR_60->sc_tq == ((void*)0)) {
  FUNC_25(VAR_60->sc_dev, "could not create taskqueue\n");
  VAR_63 = VAR_36;
  goto fail_ifnet;
 }
 VAR_63 = FUNC_33(&VAR_60->sc_tq, 1, VAR_48, "%s taskq",
     FUNC_22(VAR_60->sc_dev));
 if (VAR_63 != 0) {
  FUNC_25(VAR_60->sc_dev, "could not start threads\n");
  goto fail_taskq;
 }


 FUNC_20(VAR_60);

 VAR_63 = FUNC_9(FUNC_17(VAR_60->sc_dev), 1, 0,
     VAR_7, VAR_7, ((void*)0), ((void*)0),
     VAR_8, 0, VAR_8, 0, ((void*)0), ((void*)0),
     &VAR_60->sc_pdmatag);
 if (VAR_63 != 0)
  goto fail_taskq;

 VAR_63 = FUNC_9(VAR_60->sc_pdmatag, 1, 0,
     VAR_7, VAR_7, ((void*)0), ((void*)0),
     VAR_17, 1, VAR_17, 0, ((void*)0), ((void*)0), &VAR_60->sc_rdmatag);
 if (VAR_63 != 0)
  goto fail_ptag;

 VAR_63 = FUNC_9(VAR_60->sc_pdmatag, 1, 0,
     VAR_7, VAR_7, ((void*)0), ((void*)0),
     VAR_43 * VAR_16, VAR_16, VAR_43,
     VAR_1, ((void*)0), ((void*)0), &VAR_60->sc_tdmatag);
 if (VAR_63 != 0)
  goto fail_rtag;

 VAR_63 = FUNC_9(VAR_60->sc_pdmatag, VAR_32, 0,
     VAR_7, VAR_7, ((void*)0), ((void*)0),
     sizeof(struct cas_control_data), 1,
     sizeof(struct cas_control_data), 0,
     ((void*)0), ((void*)0), &VAR_60->sc_cdmatag);
 if (VAR_63 != 0)
  goto fail_ttag;





 if ((VAR_63 = FUNC_15(VAR_60->sc_cdmatag,
     (void **)&VAR_60->sc_control_data,
     VAR_3 | VAR_2 | VAR_4,
     &VAR_60->sc_cddmamap)) != 0) {
  FUNC_25(VAR_60->sc_dev,
      "unable to allocate control data, error = %d\n", VAR_63);
  goto fail_ctag;
 }

 VAR_60->sc_cddma = 0;
 if ((VAR_63 = FUNC_13(VAR_60->sc_cdmatag, VAR_60->sc_cddmamap,
     VAR_60->sc_control_data, sizeof(struct cas_control_data),
     VAR_49, VAR_60, 0)) != 0 || VAR_60->sc_cddma == 0) {
  FUNC_25(VAR_60->sc_dev,
      "unable to load control data DMA map, error = %d\n",
      VAR_63);
  goto fail_cmem;
 }




 FUNC_6(&VAR_60->sc_txfreeq);
 FUNC_6(&VAR_60->sc_txdirtyq);




 VAR_63 = VAR_34;
 for (VAR_64 = 0; VAR_64 < VAR_31; VAR_64++) {
  VAR_61 = &VAR_60->sc_txsoft[VAR_64];
  VAR_61->txs_mbuf = ((void*)0);
  VAR_61->txs_ndescs = 0;
  if ((VAR_63 = FUNC_11(VAR_60->sc_tdmatag, 0,
      &VAR_61->txs_dmamap)) != 0) {
   FUNC_25(VAR_60->sc_dev,
       "unable to create TX DMA map %d, error = %d\n",
       VAR_64, VAR_63);
   goto fail_txd;
  }
  FUNC_7(&VAR_60->sc_txfreeq, VAR_61, VAR_59);
 }





 for (VAR_64 = 0; VAR_64 < VAR_15; VAR_64++) {
  if ((VAR_63 = FUNC_15(VAR_60->sc_rdmatag,
      &VAR_60->sc_rxdsoft[VAR_64].rxds_buf, VAR_3,
      &VAR_60->sc_rxdsoft[VAR_64].rxds_dmamap)) != 0) {
   FUNC_25(VAR_60->sc_dev,
       "unable to allocate RX buffer %d, error = %d\n",
       VAR_64, VAR_63);
   goto fail_rxmem;
  }

  VAR_60->sc_rxdptr = VAR_64;
  VAR_60->sc_rxdsoft[VAR_64].rxds_paddr = 0;
  if ((VAR_63 = FUNC_13(VAR_60->sc_rdmatag,
      VAR_60->sc_rxdsoft[VAR_64].rxds_dmamap, VAR_60->sc_rxdsoft[VAR_64].rxds_buf,
      VAR_17, VAR_55, VAR_60, 0)) != 0 ||
      VAR_60->sc_rxdsoft[VAR_64].rxds_paddr == 0) {
   FUNC_25(VAR_60->sc_dev,
       "unable to load RX DMA map %d, error = %d\n",
       VAR_64, VAR_63);
   goto fail_rxmap;
  }
 }

 if ((VAR_60->sc_flags & VAR_30) == 0) {
  FUNC_2(VAR_60, VAR_20, VAR_21);
  FUNC_0(VAR_60, VAR_20, 4,
      VAR_5 | VAR_6);
  FUNC_19(VAR_60);



  VAR_63 = VAR_36;
  VAR_65 = FUNC_1(VAR_60, VAR_10);
  if ((VAR_65 & VAR_12) != 0) {
   VAR_65 |= VAR_13;
   FUNC_2(VAR_60, VAR_10, VAR_65);
   FUNC_0(VAR_60, VAR_10, 4,
       VAR_5 | VAR_6);

   if (VAR_60->sc_variant == VAR_27) {
    FUNC_2(VAR_60, VAR_28,
        FUNC_1(VAR_60, VAR_28) &
        ~VAR_29);
    FUNC_0(VAR_60, VAR_28, 4,
        VAR_5 |
        VAR_6);
    FUNC_3(10000);
   }
   VAR_63 = FUNC_30(VAR_60->sc_dev, &VAR_60->sc_miibus, VAR_62,
       VAR_53, VAR_54, VAR_0,
       VAR_46, VAR_45, VAR_44);
  }



  if (VAR_63 != 0 && (VAR_65 & VAR_11) != 0) {
   VAR_65 &= ~VAR_13;
   FUNC_2(VAR_60, VAR_10, VAR_65);
   FUNC_0(VAR_60, VAR_10, 4,
       VAR_5 | VAR_6);

   if (VAR_60->sc_variant == VAR_27) {
    FUNC_2(VAR_60, VAR_28,
        FUNC_1(VAR_60, VAR_28) |
        VAR_29);
    FUNC_0(VAR_60, VAR_28, 4,
        VAR_5 |
        VAR_6);
    FUNC_3(10000);
   }
   VAR_63 = FUNC_30(VAR_60->sc_dev, &VAR_60->sc_miibus, VAR_62,
       VAR_53, VAR_54, VAR_0,
       VAR_46, VAR_45, VAR_44);
  }
 } else {



  FUNC_2(VAR_60, VAR_20, VAR_22);
  FUNC_0(VAR_60, VAR_20, 4, VAR_6);

  if (VAR_60->sc_variant == VAR_27) {
   FUNC_2(VAR_60, VAR_28, 0);
   FUNC_0(VAR_60, VAR_28, 4,
       VAR_6);
  }
  FUNC_2(VAR_60, VAR_23, VAR_24);
  FUNC_0(VAR_60, VAR_23, 4,
      VAR_6);
  FUNC_2(VAR_60, VAR_18, VAR_19);
  FUNC_0(VAR_60, VAR_18, 4,
      VAR_5 | VAR_6);
  VAR_63 = FUNC_30(VAR_60->sc_dev, &VAR_60->sc_miibus, VAR_62,
      VAR_53, VAR_54, VAR_0,
      VAR_25, VAR_45, VAR_44);
 }
 if (VAR_63 != 0) {
  FUNC_25(VAR_60->sc_dev, "attaching PHYs failed\n");
  goto fail_rxmap;
 }
 VAR_60->sc_mii = FUNC_23(VAR_60->sc_miibus);
 VAR_65 = FUNC_1(VAR_60, VAR_33);
 FUNC_25(VAR_60->sc_dev, "%ukB RX FIFO, %ukB TX FIFO\n",
     VAR_26 / 1024, VAR_65 / 16);


 FUNC_26(VAR_62, VAR_60->sc_enaddr);




 VAR_62->if_hdrlen = sizeof(struct ether_vlan_header);
 VAR_62->if_capabilities = VAR_38;
 if ((VAR_60->sc_flags & VAR_14) == 0) {
  VAR_62->if_capabilities |= VAR_37;
  VAR_62->if_hwassist = VAR_9;
 }
 VAR_62->if_capenable = VAR_62->if_capabilities;

 return (0);





 fail_rxmap:
 for (VAR_64 = 0; VAR_64 < VAR_15; VAR_64++)
  if (VAR_60->sc_rxdsoft[VAR_64].rxds_paddr != 0)
   FUNC_14(VAR_60->sc_rdmatag,
       VAR_60->sc_rxdsoft[VAR_64].rxds_dmamap);
 fail_rxmem:
 for (VAR_64 = 0; VAR_64 < VAR_15; VAR_64++)
  if (VAR_60->sc_rxdsoft[VAR_64].rxds_buf != ((void*)0))
   FUNC_16(VAR_60->sc_rdmatag,
       VAR_60->sc_rxdsoft[VAR_64].rxds_buf,
       VAR_60->sc_rxdsoft[VAR_64].rxds_dmamap);
 fail_txd:
 for (VAR_64 = 0; VAR_64 < VAR_31; VAR_64++)
  if (VAR_60->sc_txsoft[VAR_64].txs_dmamap != ((void*)0))
   FUNC_12(VAR_60->sc_tdmatag,
       VAR_60->sc_txsoft[VAR_64].txs_dmamap);
 FUNC_14(VAR_60->sc_cdmatag, VAR_60->sc_cddmamap);
 fail_cmem:
 FUNC_16(VAR_60->sc_cdmatag, VAR_60->sc_control_data,
     VAR_60->sc_cddmamap);
 fail_ctag:
 FUNC_10(VAR_60->sc_cdmatag);
 fail_ttag:
 FUNC_10(VAR_60->sc_tdmatag);
 fail_rtag:
 FUNC_10(VAR_60->sc_rdmatag);
 fail_ptag:
 FUNC_10(VAR_60->sc_pdmatag);
 fail_taskq:
 FUNC_32(VAR_60->sc_tq);
 fail_ifnet:
 FUNC_28(VAR_62);
 return (VAR_63);
}
