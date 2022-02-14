
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nf10bmac_softc {int * nf10bmac_rx_irq_res; int nf10bmac_rx_intrhand; int nf10bmac_media; int nf10bmac_eth_addr; struct ifnet* nf10bmac_ifp; int nf10bmac_tx_buf; int nf10bmac_mtx; int nf10bmac_tick; } ;
struct TYPE_3__ {scalar_t__ ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_hdrlen; int if_capabilities; int if_capenable; TYPE_1__ if_snd; int if_init; int if_start; int if_ioctl; struct nf10bmac_softc* if_softc; } ;
struct ether_vlan_header {int dummy; } ;
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
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (struct nf10bmac_softc*) ;
 int FUNC_3 (int ,int *,int,int *,int ,struct nf10bmac_softc*,int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct nf10bmac_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct ifnet*,int ) ;
 int FUNC_11 (struct ifnet*) ;
 int FUNC_12 (int ,struct ifnet*) ;
 struct ifnet* FUNC_13 (int ) ;
 int FUNC_14 (struct ifnet*,int ,int ) ;
 int FUNC_15 (int *,int,int ,int *) ;
 int FUNC_16 (int *,int ,int ,int ) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (int *,int ,int ,int ) ;
 int FUNC_20 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_21 (struct nf10bmac_softc*) ;
 int VAR_23 ;

int
FUNC_22(device_t VAR_24)
{
 struct nf10bmac_softc *VAR_25;
 struct ifnet *VAR_26;
 int VAR_27;

 VAR_25 = FUNC_7(VAR_24);

 FUNC_19(&VAR_25->nf10bmac_mtx, FUNC_6(VAR_24), VAR_13,
     VAR_12);





 VAR_25->nf10bmac_tx_buf = FUNC_18(VAR_2, VAR_14, VAR_15);


 FUNC_21(VAR_25);


 VAR_26 = VAR_25->nf10bmac_ifp = FUNC_13(VAR_9);
 if (VAR_26 == ((void*)0)) {
  FUNC_9(VAR_24, "if_alloc() failed\n");
  VAR_27 = VAR_0;
  goto err;
 }
 VAR_26->if_softc = VAR_25;
 FUNC_14(VAR_26, FUNC_5(VAR_24), FUNC_8(VAR_24));
 VAR_26->if_flags = VAR_5 | VAR_6;
 VAR_26->if_ioctl = VAR_19;
 VAR_26->if_start = VAR_23;
 VAR_26->if_init = VAR_17;
 FUNC_0(&VAR_26->if_snd, VAR_16 - 1);
 VAR_26->if_snd.ifq_drv_maxlen = VAR_16 - 1;
 FUNC_1(&VAR_26->if_snd);


 FUNC_10(VAR_26, VAR_25->nf10bmac_eth_addr);


 VAR_26->if_hdrlen = sizeof(struct ether_vlan_header);
 VAR_26->if_capabilities |= VAR_4;
 VAR_26->if_capenable = VAR_26->if_capabilities;






        FUNC_16(&VAR_25->nf10bmac_media, 0, VAR_20,
     VAR_21);
        FUNC_15(&VAR_25->nf10bmac_media, VAR_8 | VAR_7, 0, ((void*)0));
        FUNC_17(&VAR_25->nf10bmac_media, VAR_8 | VAR_7);


 VAR_27 = 0;


 if (VAR_25->nf10bmac_rx_irq_res != ((void*)0)) {
  VAR_27 = FUNC_3(VAR_24, VAR_25->nf10bmac_rx_irq_res,
      VAR_11 | VAR_10, ((void*)0), VAR_18,
      VAR_25, &VAR_25->nf10bmac_rx_intrhand);
  if (VAR_27 != 0) {
   FUNC_9(VAR_24, "enabling RX IRQ failed\n");
   FUNC_11(VAR_26);
   goto err;
  }
 }

 if ((VAR_26->if_capenable & VAR_3) != 0 ||
     VAR_25->nf10bmac_rx_irq_res == ((void*)0)) {
  FUNC_9(VAR_24, "no DEVICE_POLLING in kernel and no IRQs\n");
  VAR_27 = VAR_1;

 } else {
  FUNC_2(VAR_25);
 }

err:
 if (VAR_27 != 0)
  FUNC_20(VAR_24);

 return (VAR_27);
}
