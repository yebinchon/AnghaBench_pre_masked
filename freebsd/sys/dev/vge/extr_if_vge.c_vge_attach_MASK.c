
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct vge_softc {int vge_flags; int vge_expcap; int vge_pmcap; int vge_phyaddr; int vge_intrhand; int * vge_irq; int vge_miibus; struct ifnet* vge_ifp; int * vge_res; int vge_mtx; int vge_watchdog; int vge_dev; } ;
struct TYPE_3__ {scalar_t__ ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_capabilities; int if_capenable; int if_hdrlen; TYPE_1__ if_snd; int if_init; int if_hwassist; int if_start; int if_ioctl; struct vge_softc* if_softc; } ;
struct ether_vlan_header {int dummy; } ;
typedef int device_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct vge_softc*,int ,int ) ;
 int FUNC_1 (struct vge_softc*,int ) ;
 int FUNC_2 (struct vge_softc*,int ,int) ;
 int FUNC_3 (int) ;
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
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (int) ;
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
 scalar_t__ VAR_39 ;
 void* FUNC_7 (int ,int ,int*,int) ;
 int FUNC_8 (int ,int *,int,int *,int ,struct vge_softc*,int *) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 struct vge_softc* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (struct ifnet*,int *) ;
 int FUNC_16 (struct ifnet*) ;
 struct ifnet* FUNC_17 (int ) ;
 int FUNC_18 (struct ifnet*,int ,int ) ;
 int FUNC_19 (int ,int *,struct ifnet*,int ,int ,int ,int,int ,int ) ;
 scalar_t__ VAR_40 ;
 int FUNC_20 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_21 (int ,int*) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ,int ,int*) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (struct vge_softc*) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (struct vge_softc*) ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_29 (struct vge_softc*) ;
 int FUNC_30 (struct vge_softc*,int ,int ,int,int ) ;
 int FUNC_31 (struct vge_softc*) ;
 int VAR_46 ;
 int FUNC_32 (struct vge_softc*) ;

__attribute__((used)) static int
FUNC_33(device_t VAR_47)
{
 u_char VAR_48[VAR_3];
 struct vge_softc *VAR_49;
 struct ifnet *VAR_50;
 int VAR_51 = 0, VAR_52, VAR_53, VAR_54, VAR_55;

 VAR_49 = FUNC_12(VAR_47);
 VAR_49->vge_dev = VAR_47;

 FUNC_20(&VAR_49->vge_mtx, FUNC_11(VAR_47), VAR_19,
     VAR_18);
 FUNC_9(&VAR_49->vge_watchdog, &VAR_49->vge_mtx, 0);




 FUNC_22(VAR_47);

 VAR_55 = FUNC_6(1);
 VAR_49->vge_res = FUNC_7(VAR_47, VAR_25, &VAR_55,
     VAR_22);

 if (VAR_49->vge_res == ((void*)0)) {
  FUNC_14(VAR_47, "couldn't map ports/memory\n");
  VAR_51 = VAR_2;
  goto fail;
 }

 if (FUNC_23(VAR_47, VAR_20, &VAR_52) == 0) {
  VAR_49->vge_flags |= VAR_34;
  VAR_49->vge_expcap = VAR_52;
 } else
  VAR_49->vge_flags |= VAR_32;
 if (FUNC_23(VAR_47, VAR_21, &VAR_52) == 0) {
  VAR_49->vge_flags |= VAR_35;
  VAR_49->vge_pmcap = VAR_52;
 }
 VAR_55 = 0;
 VAR_54 = FUNC_24(VAR_47);
 if (VAR_40 == 0 && VAR_54 > 0) {
  VAR_54 = 1;
  if (FUNC_21(VAR_47, &VAR_54) == 0) {
   if (VAR_54 == 1) {
    VAR_49->vge_flags |= VAR_33;
    FUNC_14(VAR_47, "Using %d MSI message\n",
        VAR_54);
    VAR_55 = 1;
   } else
    FUNC_25(VAR_47);
  }
 }


 VAR_49->vge_irq = FUNC_7(VAR_47, VAR_24, &VAR_55,
     ((VAR_49->vge_flags & VAR_33) ? 0 : VAR_23) | VAR_22);
 if (VAR_49->vge_irq == ((void*)0)) {
  FUNC_14(VAR_47, "couldn't map interrupt\n");
  VAR_51 = VAR_2;
  goto fail;
 }


 FUNC_31(VAR_49);

 FUNC_2(VAR_49, VAR_29, VAR_30);
 for (VAR_53 = 0; VAR_53 < VAR_38; VAR_53++) {
  FUNC_3(5);
  if ((FUNC_1(VAR_49, VAR_29) & VAR_30) == 0)
   break;
 }
 if (VAR_53 == VAR_38)
  FUNC_14(VAR_47, "EEPROM reload timed out\n");





 FUNC_0(VAR_49, VAR_26, VAR_27);




 FUNC_30(VAR_49, (caddr_t)VAR_48, VAR_31, 3, 0);






 if ((VAR_49->vge_flags & VAR_34) != 0)
  VAR_49->vge_phyaddr = 1;
 else
  VAR_49->vge_phyaddr = FUNC_1(VAR_49, VAR_36) &
      VAR_37;

 FUNC_26(VAR_49);
 FUNC_32(VAR_49);
 VAR_51 = FUNC_28(VAR_49);
 if (VAR_51)
  goto fail;

 VAR_50 = VAR_49->vge_ifp = FUNC_17(VAR_13);
 if (VAR_50 == ((void*)0)) {
  FUNC_14(VAR_47, "can not if_alloc()\n");
  VAR_51 = VAR_1;
  goto fail;
 }

 FUNC_29(VAR_49);

 VAR_51 = FUNC_19(VAR_47, &VAR_49->vge_miibus, VAR_50, VAR_42,
     VAR_41, VAR_0, VAR_49->vge_phyaddr, VAR_17,
     VAR_16);
 if (VAR_51 != 0) {
  FUNC_14(VAR_47, "attaching PHYs failed\n");
  goto fail;
 }

 VAR_50->if_softc = VAR_49;
 FUNC_18(VAR_50, FUNC_10(VAR_47), FUNC_13(VAR_47));
 VAR_50->if_flags = VAR_10 | VAR_12 | VAR_11;
 VAR_50->if_ioctl = VAR_45;
 VAR_50->if_capabilities = VAR_8;
 VAR_50->if_start = VAR_46;
 VAR_50->if_hwassist = VAR_28;
 VAR_50->if_capabilities |= VAR_4 | VAR_6 |
     VAR_7;
 if ((VAR_49->vge_flags & VAR_35) != 0)
  VAR_50->if_capabilities |= VAR_9;
 VAR_50->if_capenable = VAR_50->if_capabilities;



 VAR_50->if_init = VAR_43;
 FUNC_4(&VAR_50->if_snd, VAR_39 - 1);
 VAR_50->if_snd.ifq_drv_maxlen = VAR_39 - 1;
 FUNC_5(&VAR_50->if_snd);




 FUNC_15(VAR_50, VAR_48);


 VAR_50->if_hdrlen = sizeof(struct ether_vlan_header);


 VAR_51 = FUNC_8(VAR_47, VAR_49->vge_irq, VAR_15|VAR_14,
     ((void*)0), VAR_44, VAR_49, &VAR_49->vge_intrhand);

 if (VAR_51) {
  FUNC_14(VAR_47, "couldn't set up irq\n");
  FUNC_16(VAR_50);
  goto fail;
 }

fail:
 if (VAR_51)
  FUNC_27(VAR_47);

 return (VAR_51);
}
