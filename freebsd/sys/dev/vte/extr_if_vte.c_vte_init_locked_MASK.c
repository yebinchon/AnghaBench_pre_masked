
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int vte_tx_ring_paddr; int vte_rx_ring_paddr; } ;
struct vte_softc {int vte_tick_ch; int vte_flags; TYPE_1__ vte_cdata; struct ifnet* vte_ifp; int vte_dev; } ;
struct ifnet {int if_drv_flags; } ;
typedef int bus_addr_t ;


 int FUNC_0 (struct vte_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_1 (struct ifnet*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct vte_softc*) ;
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
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_3 (int *,int ,int ,struct vte_softc*) ;
 int FUNC_4 (int ,char*) ;
 int VAR_33 ;
 scalar_t__ FUNC_5 (struct vte_softc*) ;
 scalar_t__ FUNC_6 (struct vte_softc*) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (struct vte_softc*) ;
 int FUNC_9 (struct vte_softc*) ;
 int FUNC_10 (struct vte_softc*) ;
 int FUNC_11 (struct vte_softc*) ;
 int VAR_34 ;

__attribute__((used)) static void
FUNC_12(struct vte_softc *VAR_35)
{
 struct ifnet *VAR_36;
 bus_addr_t VAR_37;
 uint8_t *VAR_38;

 FUNC_2(VAR_35);

 VAR_36 = VAR_35->vte_ifp;

 if ((VAR_36->if_drv_flags & VAR_1) != 0)
  return;



 FUNC_11(VAR_35);



 FUNC_8(VAR_35);


 if (FUNC_5(VAR_35) != 0) {
  FUNC_4(VAR_35->vte_dev, "no memory for RX buffers.\n");
  FUNC_11(VAR_35);
  return;
 }
 if (FUNC_6(VAR_35) != 0) {
  FUNC_4(VAR_35->vte_dev, "no memory for TX buffers.\n");
  FUNC_11(VAR_35);
  return;
 }
 VAR_38 = FUNC_1(VAR_35->vte_ifp);
 FUNC_0(VAR_35, VAR_17, VAR_38[1] << 8 | VAR_38[0]);
 FUNC_0(VAR_35, VAR_18, VAR_38[3] << 8 | VAR_38[2]);
 FUNC_0(VAR_35, VAR_16, VAR_38[5] << 8 | VAR_38[4]);


 VAR_37 = VAR_35->vte_cdata.vte_tx_ring_paddr;
 FUNC_0(VAR_35, VAR_29, VAR_37 >> 16);
 FUNC_0(VAR_35, VAR_28, VAR_37 & 0xFFFF);

 VAR_37 = VAR_35->vte_cdata.vte_rx_ring_paddr;
 FUNC_0(VAR_35, VAR_26, VAR_37 >> 16);
 FUNC_0(VAR_35, VAR_25, VAR_37 & 0xFFFF);






 FUNC_0(VAR_35, VAR_22, (VAR_32 & VAR_23) |
     (((VAR_32 * 2) / 10) << VAR_24));
 FUNC_0(VAR_35, VAR_21, VAR_31);


 FUNC_0(VAR_35, VAR_11, VAR_2 |
     VAR_5 | VAR_3 |
     VAR_4);
 FUNC_0(VAR_35, VAR_12, VAR_6);






 FUNC_0(VAR_35, VAR_13, VAR_8 |
     VAR_7);


 FUNC_9(VAR_35);


 FUNC_0(VAR_35, VAR_27, 0);
 FUNC_0(VAR_35, VAR_30, 0);


 FUNC_0(VAR_35, VAR_14, VAR_15);

 FUNC_10(VAR_35);


 FUNC_0(VAR_35, VAR_19, VAR_10);
 FUNC_0(VAR_35, VAR_20, 0);

 VAR_35->vte_flags &= ~VAR_9;

 FUNC_7(VAR_36);

 FUNC_3(&VAR_35->vte_tick_ch, VAR_33, VAR_34, VAR_35);

 VAR_36->if_drv_flags |= VAR_1;
 VAR_36->if_drv_flags &= ~VAR_0;
}
