
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct vte_softc {int vte_res_id; scalar_t__ vte_res_type; int vte_intrhand; int * vte_irq; int vte_eaddr; int vte_miibus; struct ifnet* vte_ifp; int vte_mtx; int * vte_res; int vte_ident; int vte_tick_ch; int vte_dev; } ;
struct TYPE_3__ {scalar_t__ ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_hdrlen; int if_capabilities; int if_capenable; TYPE_1__ if_snd; int if_get_counter; int if_init; int if_start; int if_ioctl; struct vte_softc* if_softc; } ;
struct ether_vlan_header {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct vte_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_3 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 void* FUNC_4 (int ,scalar_t__,int*,int) ;
 int FUNC_5 (int ,int *,int,int *,int ,struct vte_softc*,int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct vte_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (struct ifnet*,int ) ;
 int FUNC_13 (struct ifnet*) ;
 struct ifnet* FUNC_14 (int ) ;
 int FUNC_15 (struct ifnet*,int ,int ) ;
 int FUNC_16 (int ,int *,struct ifnet*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ,int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct vte_softc*) ;
 int FUNC_22 (int ) ;
 int VAR_26 ;
 int FUNC_23 (struct vte_softc*) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_24 (struct vte_softc*) ;
 int VAR_32 ;
 int FUNC_25 (struct vte_softc*) ;

__attribute__((used)) static int
FUNC_26(device_t VAR_33)
{
 struct vte_softc *VAR_34;
 struct ifnet *VAR_35;
 uint16_t VAR_36;
 int VAR_37, VAR_38;

 VAR_37 = 0;
 VAR_34 = FUNC_9(VAR_33);
 VAR_34->vte_dev = VAR_33;

 FUNC_18(&VAR_34->vte_mtx, FUNC_8(VAR_33), VAR_12,
     VAR_11);
 FUNC_6(&VAR_34->vte_tick_ch, &VAR_34->vte_mtx, 0);
 VAR_34->vte_ident = FUNC_22(VAR_33);


 FUNC_19(VAR_33);
 VAR_34->vte_res_id = FUNC_3(1);
 VAR_34->vte_res_type = VAR_17;
 VAR_34->vte_res = FUNC_4(VAR_33, VAR_34->vte_res_type,
     &VAR_34->vte_res_id, VAR_13);
 if (VAR_34->vte_res == ((void*)0)) {
  VAR_34->vte_res_id = FUNC_3(0);
  VAR_34->vte_res_type = VAR_15;
  VAR_34->vte_res = FUNC_4(VAR_33, VAR_34->vte_res_type,
      &VAR_34->vte_res_id, VAR_13);
  if (VAR_34->vte_res == ((void*)0)) {
   FUNC_11(VAR_33, "cannot map memory/ports.\n");
   FUNC_17(&VAR_34->vte_mtx);
   return (VAR_1);
  }
 }
 if (VAR_25) {
  FUNC_11(VAR_33, "using %s space register mapping\n",
      VAR_34->vte_res_type == VAR_17 ? "memory" : "I/O");
  FUNC_11(VAR_33, "MAC Identifier : 0x%04x\n",
      FUNC_0(VAR_34, VAR_18));
  VAR_36 = FUNC_0(VAR_34, VAR_20);
  FUNC_11(VAR_33, "MAC Id. 0x%02x, Rev. 0x%02x\n",
      (VAR_36 & VAR_19) >> VAR_23,
      (VAR_36 & VAR_21) >> VAR_22);
 }

 VAR_38 = 0;
 VAR_34->vte_irq = FUNC_4(VAR_33, VAR_16, &VAR_38,
     VAR_14 | VAR_13);
 if (VAR_34->vte_irq == ((void*)0)) {
  FUNC_11(VAR_33, "cannot allocate IRQ resources.\n");
  VAR_37 = VAR_1;
  goto fail;
 }


 FUNC_24(VAR_34);

 if ((VAR_37 = FUNC_21(VAR_34)) != 0)
  goto fail;


 FUNC_25(VAR_34);


 FUNC_23(VAR_34);

 VAR_35 = VAR_34->vte_ifp = FUNC_14(VAR_6);
 if (VAR_35 == ((void*)0)) {
  FUNC_11(VAR_33, "cannot allocate ifnet structure.\n");
  VAR_37 = VAR_1;
  goto fail;
 }

 VAR_35->if_softc = VAR_34;
 FUNC_15(VAR_35, FUNC_7(VAR_33), FUNC_10(VAR_33));
 VAR_35->if_flags = VAR_3 | VAR_5 | VAR_4;
 VAR_35->if_ioctl = VAR_29;
 VAR_35->if_start = VAR_32;
 VAR_35->if_init = VAR_27;
 VAR_35->if_get_counter = VAR_26;
 VAR_35->if_snd.ifq_drv_maxlen = VAR_24 - 1;
 FUNC_1(&VAR_35->if_snd, VAR_35->if_snd.ifq_drv_maxlen);
 FUNC_2(&VAR_35->if_snd);
 VAR_37 = FUNC_16(VAR_33, &VAR_34->vte_miibus, VAR_35, VAR_30,
     VAR_31, VAR_0, VAR_10, VAR_9, 0);
 if (VAR_37 != 0) {
  FUNC_11(VAR_33, "attaching PHYs failed\n");
  goto fail;
 }

 FUNC_12(VAR_35, VAR_34->vte_eaddr);


 VAR_35->if_capabilities |= VAR_2;
 VAR_35->if_capenable = VAR_35->if_capabilities;

 VAR_35->if_hdrlen = sizeof(struct ether_vlan_header);

 VAR_37 = FUNC_5(VAR_33, VAR_34->vte_irq, VAR_8 | VAR_7,
     ((void*)0), VAR_28, VAR_34, &VAR_34->vte_intrhand);
 if (VAR_37 != 0) {
  FUNC_11(VAR_33, "could not set up interrupt handler.\n");
  FUNC_13(VAR_35);
  goto fail;
 }

fail:
 if (VAR_37 != 0)
  FUNC_20(VAR_33);

 return (VAR_37);
}
