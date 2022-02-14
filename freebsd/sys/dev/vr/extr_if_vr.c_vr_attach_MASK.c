
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct vr_type {int vr_quirks; } ;
struct vr_softc {int vr_quirks; scalar_t__ vr_revid; int vr_res_id; int vr_intrhand; int * vr_irq; int vr_miibus; void* vr_txthresh; int vr_inttask; struct ifnet* vr_ifp; int * vr_res; int vr_res_type; int vr_mtx; int vr_stat_callout; int vr_dev; } ;
struct TYPE_3__ {scalar_t__ ifq_maxlen; } ;
struct ifnet {int if_flags; int if_capabilities; int if_capenable; int if_hdrlen; int if_hwassist; TYPE_1__ if_snd; int if_init; int if_start; int if_ioctl; struct vr_softc* if_softc; } ;
struct ether_vlan_header {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct vr_softc*,scalar_t__) ;
 int FUNC_1 (struct vr_softc*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
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
 int VAR_13 ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (int ,char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_6 (int ) ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_7 (int ,int ,int ,char*,int,struct vr_softc*,int ,int ,char*,char*) ;
 int FUNC_8 (int ) ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_9 (int *,int ,int ,struct vr_softc*) ;
 int FUNC_10 (struct vr_softc*,int ,int) ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 scalar_t__ VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 scalar_t__ VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_11 (struct vr_softc*,scalar_t__,int) ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 void* VAR_54 ;
 void* VAR_55 ;
 scalar_t__ VAR_56 ;
 void* FUNC_12 (int ,int ,int*,int) ;
 int FUNC_13 (int ,int *,int,int ,int *,struct vr_softc*,int *) ;
 int FUNC_14 (int *,int *,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 struct vr_softc* FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,char*,...) ;
 int FUNC_22 (struct ifnet*,int*) ;
 int FUNC_23 (struct ifnet*) ;
 struct ifnet* FUNC_24 (int ) ;
 int FUNC_25 (struct ifnet*,int ,int ) ;
 int FUNC_26 (int ,int *,struct ifnet*,int ,int ,int ,int,int ,int ) ;
 int FUNC_27 (int *,int ,int ,int ) ;
 int FUNC_28 (int ) ;
 scalar_t__ FUNC_29 (int ,int ,int*) ;
 scalar_t__ FUNC_30 (int ) ;
 int FUNC_31 (int ,int ,int) ;
 int FUNC_32 (int ,int ,int,int) ;
 int FUNC_33 (int ) ;
 scalar_t__ FUNC_34 (struct vr_softc*) ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 struct vr_type* FUNC_35 (int ) ;
 int FUNC_36 (struct vr_softc*) ;
 int VAR_63 ;
 int VAR_64 ;

__attribute__((used)) static int
FUNC_37(device_t VAR_65)
{
 struct vr_softc *VAR_66;
 struct ifnet *VAR_67;
 const struct vr_type *VAR_68;
 uint8_t VAR_69[VAR_5];
 int VAR_70, VAR_71;
 int VAR_72, VAR_73, VAR_74;

 VAR_66 = FUNC_17(VAR_65);
 VAR_66->vr_dev = VAR_65;
 VAR_68 = FUNC_35(VAR_65);
 FUNC_5(VAR_68 != ((void*)0), ("Lost if_vr device match"));
 VAR_66->vr_quirks = VAR_68->vr_quirks;
 FUNC_21(VAR_65, "Quirks: 0x%x\n", VAR_66->vr_quirks);

 FUNC_27(&VAR_66->vr_mtx, FUNC_16(VAR_65), VAR_20,
     VAR_19);
 FUNC_14(&VAR_66->vr_stat_callout, &VAR_66->vr_mtx, 0);
 FUNC_7(FUNC_18(VAR_65),
     FUNC_8(FUNC_19(VAR_65)),
     VAR_21, "stats", VAR_2 | VAR_1, VAR_66, 0,
     VAR_64, "I", "Statistics");

 VAR_70 = 0;




 FUNC_28(VAR_65);
 VAR_66->vr_revid = FUNC_30(VAR_65);
 FUNC_21(VAR_65, "Revision: 0x%x\n", VAR_66->vr_revid);

 VAR_66->vr_res_id = FUNC_6(0);
 VAR_66->vr_res_type = VAR_30;
 VAR_66->vr_res = FUNC_12(VAR_65, VAR_66->vr_res_type,
     &VAR_66->vr_res_id, VAR_28);
 if (VAR_66->vr_res == ((void*)0)) {
  FUNC_21(VAR_65, "couldn't map ports\n");
  VAR_70 = VAR_4;
  goto fail;
 }


 VAR_71 = 0;
 VAR_66->vr_irq = FUNC_12(VAR_65, VAR_31, &VAR_71,
     VAR_29 | VAR_28);

 if (VAR_66->vr_irq == ((void*)0)) {
  FUNC_21(VAR_65, "couldn't map interrupt\n");
  VAR_70 = VAR_4;
  goto fail;
 }


 VAR_67 = VAR_66->vr_ifp = FUNC_24(VAR_14);
 if (VAR_67 == ((void*)0)) {
  FUNC_21(VAR_65, "couldn't allocate ifnet structure\n");
  VAR_70 = VAR_3;
  goto fail;
 }
 VAR_67->if_softc = VAR_66;
 FUNC_25(VAR_67, FUNC_15(VAR_65), FUNC_20(VAR_65));
 VAR_67->if_flags = VAR_11 | VAR_13 | VAR_12;
 VAR_67->if_ioctl = VAR_62;
 VAR_67->if_start = VAR_63;
 VAR_67->if_init = VAR_59;
 FUNC_3(&VAR_67->if_snd, VAR_56 - 1);
 VAR_67->if_snd.ifq_maxlen = VAR_56 - 1;
 FUNC_4(&VAR_67->if_snd);

 FUNC_9(&VAR_66->vr_inttask, 0, VAR_60, VAR_66);


 VAR_66->vr_txthresh = VAR_55;
 if (VAR_66->vr_revid < VAR_25) {






  VAR_66->vr_txthresh = VAR_54;
 }
 if ((VAR_66->vr_quirks & VAR_49) != 0) {
  VAR_67->if_hwassist = VAR_32;
  VAR_67->if_capabilities |= VAR_6;




  VAR_66->vr_txthresh = VAR_54;
 }

 if (VAR_66->vr_revid >= VAR_23 &&
     FUNC_29(VAR_65, VAR_22, &VAR_74) == 0)
  VAR_67->if_capabilities |= VAR_10 | VAR_9;


 VAR_67->if_capabilities |= VAR_8;
 VAR_67->if_capenable = VAR_67->if_capabilities;
 if (FUNC_29(VAR_65, VAR_22, &VAR_74) == 0)
  FUNC_10(VAR_66, VAR_50, (VAR_51|VAR_52));
 FUNC_11(VAR_66, VAR_33, VAR_34);
 for (VAR_72 = VAR_53; VAR_72 > 0; VAR_72--) {
  FUNC_2(1);
  if ((FUNC_0(VAR_66, VAR_33) & VAR_34) == 0)
   break;
 }
 if (VAR_72 == 0)
  FUNC_21(VAR_65, "Reloading EEPROM timeout!\n");
 for (VAR_72 = 0; VAR_72 < VAR_5; VAR_72++)
  VAR_69[VAR_72] = FUNC_0(VAR_66, VAR_44 + VAR_72);


 FUNC_36(VAR_66);

 FUNC_1(VAR_66, VAR_36, 0xFFFF);
 FUNC_1(VAR_66, VAR_35, 0);
 if (VAR_66->vr_revid >= VAR_23)
  FUNC_1(VAR_66, VAR_39, 0);

 if (VAR_66->vr_revid < VAR_23) {
  FUNC_32(VAR_65, VAR_45,
      FUNC_31(VAR_65, VAR_45, 1) |
      VAR_40, 1);
 } else {

  FUNC_32(VAR_65, VAR_45,
      FUNC_31(VAR_65, VAR_45, 1) |
      VAR_42, 1);

  FUNC_32(VAR_65, VAR_46,
      FUNC_31(VAR_65, VAR_46, 1) |
      VAR_43, 1);
  if (VAR_66->vr_revid >= VAR_26 &&
      VAR_66->vr_revid < VAR_24)
   FUNC_32(VAR_65, VAR_45,
       FUNC_31(VAR_65, VAR_45, 1) |
       VAR_40, 1);

  if (VAR_66->vr_revid >= VAR_27 &&
      VAR_66->vr_revid < VAR_24)
   FUNC_32(VAR_65, VAR_45,
       FUNC_31(VAR_65, VAR_45, 1) |
       VAR_41, 1);
 }

 FUNC_10(VAR_66, VAR_37, VAR_38);

 if (FUNC_34(VAR_66) != 0) {
  VAR_70 = VAR_4;
  goto fail;
 }


 if (VAR_66->vr_revid >= VAR_25)
  VAR_73 = 1;
 else
  VAR_73 = FUNC_0(VAR_66, VAR_47) & VAR_48;
 VAR_70 = FUNC_26(VAR_65, &VAR_66->vr_miibus, VAR_67, VAR_58,
     VAR_57, VAR_0, VAR_73, VAR_18,
     VAR_66->vr_revid >= VAR_23 ? VAR_17 : 0);
 if (VAR_70 != 0) {
  FUNC_21(VAR_65, "attaching PHYs failed\n");
  goto fail;
 }


 FUNC_22(VAR_67, VAR_69);





 VAR_67->if_hdrlen = sizeof(struct ether_vlan_header);


 VAR_70 = FUNC_13(VAR_65, VAR_66->vr_irq, VAR_16 | VAR_15,
     VAR_61, ((void*)0), VAR_66, &VAR_66->vr_intrhand);

 if (VAR_70) {
  FUNC_21(VAR_65, "couldn't set up irq\n");
  FUNC_23(VAR_67);
  goto fail;
 }

fail:
 if (VAR_70)
  FUNC_33(VAR_65);

 return (VAR_70);
}
