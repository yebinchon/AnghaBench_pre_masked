
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct nfe_softc {scalar_t__ nfe_msix; int nfe_msi; int nfe_devid; int nfe_flags; int * nfe_tq; int * nfe_intrhand; int ** nfe_irq; int nfe_dev; int nfe_int_task; int eaddr; int nfe_miibus; scalar_t__ nfe_framesize; int jrxq; int rxq; int txq; int * nfe_ifp; int nfe_parent_tag; int nfe_revid; void* nfe_intrs; int nfe_irq_mask; void* nfe_nointrs; int nfe_irq_status; int nfe_mtx; int ** nfe_res; int nfe_stat_ch; } ;
struct ether_vlan_header {int dummy; } ;
typedef int ifm_stat_cb_t ;
typedef int ifm_change_cb_t ;
typedef int * if_t ;
typedef int device_t ;
typedef int bus_addr_t ;


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
 int VAR_33 ;
 int VAR_34 ;
 void* VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 void* VAR_48 ;
 int VAR_49 ;
 int FUNC_0 (struct nfe_softc*,int ) ;
 scalar_t__ VAR_50 ;
 int VAR_51 ;
 scalar_t__ VAR_52 ;
 int VAR_53 ;
 int FUNC_1 (struct nfe_softc*,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int FUNC_3 (int *,int ,int ,struct nfe_softc*) ;
 scalar_t__ VAR_61 ;
 void* FUNC_4 (int ,int ,int*,int) ;
 int FUNC_5 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int,int ,int *,struct nfe_softc*,int *) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 struct nfe_softc* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int *) ;
 int FUNC_19 (int *,int ,int ) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *,int,int ) ;
 int FUNC_22 (int *,int) ;
 int FUNC_23 (int *,int) ;
 int FUNC_24 (int *,int ) ;
 int FUNC_25 (int *,int,int ) ;
 int FUNC_26 (int *,int) ;
 int FUNC_27 (int *,int ) ;
 int FUNC_28 (int *,int ) ;
 int FUNC_29 (int *,scalar_t__) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *,struct nfe_softc*) ;
 int FUNC_32 (int *,int ) ;
 int FUNC_33 (int ,int *,int *,int ,int ,int ,int,int ,int ) ;
 int VAR_62 ;
 int VAR_63 ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int *,int ,int ,int ) ;
 int FUNC_36 (struct nfe_softc*,int *) ;
 int FUNC_37 (struct nfe_softc*,int) ;
 int FUNC_38 (struct nfe_softc*,int *) ;
 int FUNC_39 (struct nfe_softc*,int *) ;
 scalar_t__ FUNC_40 (struct nfe_softc*) ;
 int FUNC_41 (int ) ;
 scalar_t__ FUNC_42 (struct nfe_softc*) ;
 int FUNC_43 (struct nfe_softc*,int ) ;
 scalar_t__ VAR_64 ;
 scalar_t__ VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int FUNC_44 (struct nfe_softc*) ;
 int VAR_70 ;
 int FUNC_45 (struct nfe_softc*) ;
 scalar_t__ FUNC_46 (int ,int*) ;
 int FUNC_47 (int ) ;
 scalar_t__ FUNC_48 (int ,int ,int*) ;
 int FUNC_49 (int ) ;
 int FUNC_50 (int ) ;
 int FUNC_51 (int ) ;
 int FUNC_52 (int ) ;
 int FUNC_53 (int ,int,int) ;
 int FUNC_54 (int ) ;
 int FUNC_55 (int ,int,int,int) ;
 int * FUNC_56 (char*,int ,int ,int **) ;
 int FUNC_57 (int *) ;
 int FUNC_58 (int **,int,int ,char*,int ) ;
 int VAR_71 ;

__attribute__((used)) static int
FUNC_59(device_t VAR_72)
{
 struct nfe_softc *VAR_73;
 if_t VAR_74;
 bus_addr_t VAR_75;
 int VAR_76 = 0, VAR_77, VAR_78, VAR_79, VAR_80, VAR_81;

 VAR_73 = FUNC_11(VAR_72);
 VAR_73->nfe_dev = VAR_72;

 FUNC_35(&VAR_73->nfe_mtx, FUNC_10(VAR_72), VAR_25,
     VAR_24);
 FUNC_8(&VAR_73->nfe_stat_ch, &VAR_73->nfe_mtx, 0);

 FUNC_47(VAR_72);

 VAR_81 = FUNC_2(0);
 VAR_73->nfe_res[0] = FUNC_4(VAR_72, VAR_60, &VAR_81,
     VAR_57);
 if (VAR_73->nfe_res[0] == ((void*)0)) {
  FUNC_13(VAR_72, "couldn't map memory resources\n");
  FUNC_34(&VAR_73->nfe_mtx);
  return (VAR_6);
 }

 if (FUNC_48(VAR_72, VAR_54, &VAR_80) == 0) {
  uint16_t VAR_82, VAR_83;

  VAR_82 = FUNC_53(VAR_72, VAR_80 + 0x08, 2);

  VAR_82 &= ~(7 << 12);
  VAR_82 |= (5 << 12);
  FUNC_55(VAR_72, VAR_80 + 0x08, VAR_82, 2);

  VAR_82 = FUNC_53(VAR_72, VAR_80 + 0x0c, 2);

  VAR_82 = (VAR_82 >> 4) & 0x0f;
  VAR_83 = FUNC_53(VAR_72, VAR_80 + 0x12, 2);

  VAR_83 = (VAR_83 >> 4) & 0x3f;
  if (VAR_82 != VAR_83)
   FUNC_13(VAR_73->nfe_dev,
       "warning, negotiated width of link(x%d) != "
       "max. width of link(x%d)\n", VAR_83, VAR_82);
 }

 if (FUNC_40(VAR_73) == 0) {
  FUNC_13(VAR_73->nfe_dev,
      "MSI/MSI-X capability black-listed, will use INTx\n");
  VAR_63 = 1;
  VAR_62 = 1;
 }


 if (VAR_63 == 0 || VAR_62 == 0) {
  if (VAR_63 == 0 &&
      (VAR_78 = FUNC_52(VAR_72)) == VAR_47)
   FUNC_37(VAR_73, VAR_78);
  if (VAR_62 == 0 && VAR_73->nfe_msix == 0 &&
      (VAR_78 = FUNC_51(VAR_72)) == VAR_47 &&
      FUNC_46(VAR_72, &VAR_78) == 0) {
   if (VAR_78 == VAR_47) {
    if (VAR_61)
     FUNC_13(VAR_72,
         "Using %d MSI messages\n", VAR_78);
    VAR_73->nfe_msi = 1;
   } else
    FUNC_54(VAR_72);
  }
 }

 if (VAR_73->nfe_msix == 0 && VAR_73->nfe_msi == 0) {
  VAR_81 = 0;
  VAR_73->nfe_irq[0] = FUNC_4(VAR_72, VAR_59, &VAR_81,
      VAR_58 | VAR_57);
  if (VAR_73->nfe_irq[0] == ((void*)0)) {
   FUNC_13(VAR_72, "couldn't allocate IRQ resources\n");
   VAR_76 = VAR_6;
   goto fail;
  }
 } else {
  for (VAR_77 = 0, VAR_81 = 1; VAR_77 < VAR_47; VAR_77++, VAR_81++) {
   VAR_73->nfe_irq[VAR_77] = FUNC_4(VAR_72,
       VAR_59, &VAR_81, VAR_57);
   if (VAR_73->nfe_irq[VAR_77] == ((void*)0)) {
    FUNC_13(VAR_72,
        "couldn't allocate IRQ resources for "
        "message %d\n", VAR_81);
    VAR_76 = VAR_6;
    goto fail;
   }
  }

  if (VAR_73->nfe_msix != 0) {
   FUNC_1(VAR_73, VAR_42, 0);
   FUNC_1(VAR_73, VAR_43, 0);
  } else if (VAR_73->nfe_msi != 0) {
   FUNC_1(VAR_73, VAR_45, 0);
   FUNC_1(VAR_73, VAR_46, 0);
  }
 }


 VAR_73->nfe_irq_status = VAR_34;
 VAR_73->nfe_irq_mask = VAR_33;
 VAR_73->nfe_intrs = VAR_35;
 VAR_73->nfe_nointrs = 0;
 if (VAR_73->nfe_msix != 0) {
  VAR_73->nfe_irq_status = VAR_41;
  VAR_73->nfe_nointrs = VAR_35;
 } else if (VAR_73->nfe_msi != 0) {
  VAR_73->nfe_irq_mask = VAR_44;
  VAR_73->nfe_intrs = VAR_48;
 }

 VAR_73->nfe_devid = FUNC_49(VAR_72);
 VAR_73->nfe_revid = FUNC_50(VAR_72);
 VAR_73->nfe_flags = 0;

 switch (VAR_73->nfe_devid) {
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_73->nfe_flags |= VAR_36 | VAR_31;
  break;
 case 160:
 case 159:
  VAR_73->nfe_flags |= VAR_27 | VAR_49 | VAR_38;
  break;
 case 164:
 case 163:
 case 162:
 case 161:
  VAR_73->nfe_flags |= VAR_36 | VAR_27 | VAR_31 |
      VAR_38;
  break;
 case 158:
 case 157:
  VAR_73->nfe_flags |= VAR_36 | VAR_27 | VAR_31 |
      VAR_32 | VAR_49 | VAR_51 | VAR_39;
  break;

 case 156:
 case 155:
 case 154:
 case 153:
 case 148:
 case 147:
 case 146:
 case 145:
 case 144:
 case 143:
 case 142:
 case 141:
  VAR_73->nfe_flags |= VAR_27 | VAR_49 |
      VAR_28 | VAR_51 | VAR_39;
  break;
 case 140:
 case 139:
 case 138:
 case 137:

  VAR_73->nfe_flags |= VAR_27 | VAR_31 | VAR_49 |
      VAR_28 | VAR_40;
  break;
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:

  VAR_73->nfe_flags |= VAR_36 | VAR_27 | VAR_31 |
      VAR_49 | VAR_28 | VAR_40;
  break;
 case 152:
 case 151:
 case 150:
 case 149:
  VAR_73->nfe_flags |= VAR_36 | VAR_27 |
      VAR_49 | VAR_28 | VAR_51 |
      VAR_39;
  break;
 }

 FUNC_44(VAR_73);

 if ((FUNC_0(VAR_73, VAR_53) & VAR_37) != 0)
  VAR_73->nfe_flags |= VAR_28;
 FUNC_43(VAR_73, VAR_73->eaddr);



 VAR_75 = VAR_2;
 if ((VAR_73->nfe_flags & VAR_27) != 0)
  VAR_75 = VAR_30;
 VAR_76 = FUNC_5(
     FUNC_6(VAR_73->nfe_dev),
     1, 0,
     VAR_75,
     VAR_1,
     ((void*)0), ((void*)0),
     VAR_3, 0,
     VAR_3,
     0,
     ((void*)0), ((void*)0),
     &VAR_73->nfe_parent_tag);
 if (VAR_76)
  goto fail;

 VAR_74 = VAR_73->nfe_ifp = FUNC_17(VAR_18);
 if (VAR_74 == ((void*)0)) {
  FUNC_13(VAR_72, "can not if_gethandle()\n");
  VAR_76 = VAR_5;
  goto fail;
 }




 if ((VAR_76 = FUNC_39(VAR_73, &VAR_73->txq)) != 0)
  goto fail;

 if ((VAR_76 = FUNC_38(VAR_73, &VAR_73->rxq)) != 0)
  goto fail;

 FUNC_36(VAR_73, &VAR_73->jrxq);

 FUNC_45(VAR_73);

 FUNC_31(VAR_74, VAR_73);
 FUNC_19(VAR_74, FUNC_9(VAR_72), FUNC_12(VAR_72));
 FUNC_23(VAR_74, VAR_15 | VAR_17 | VAR_16);
 FUNC_28(VAR_74, VAR_69);
 FUNC_32(VAR_74, VAR_70);
 FUNC_24(VAR_74, 0);
 FUNC_20(VAR_74, 0);
 FUNC_27(VAR_74, VAR_66);
 FUNC_29(VAR_74, VAR_52 - 1);
 FUNC_30(VAR_74);


 if (VAR_73->nfe_flags & VAR_31) {
  FUNC_21(VAR_74, VAR_7 | VAR_9, 0);
  FUNC_25(VAR_74, VAR_29 | VAR_4, 0);
 }
 FUNC_22(VAR_74, FUNC_16(VAR_74));

 VAR_73->nfe_framesize = FUNC_18(VAR_74) + VAR_50;

 FUNC_21(VAR_74, VAR_13, 0);
 if ((VAR_73->nfe_flags & VAR_32) != 0) {
  FUNC_21(VAR_74, VAR_11, 0);
  if ((FUNC_16(VAR_74) & VAR_7) != 0)
   FUNC_21(VAR_74,
       (VAR_10 | VAR_12), 0);
 }

 if (FUNC_48(VAR_72, VAR_55, &VAR_80) == 0)
  FUNC_21(VAR_74, VAR_14, 0);
 FUNC_22(VAR_74, FUNC_16(VAR_74));






 FUNC_26(VAR_74, sizeof(struct ether_vlan_header));






 VAR_79 = VAR_23;
 if (VAR_73->nfe_devid == 156 ||
     VAR_73->nfe_devid == 155 ||
     VAR_73->nfe_devid == 154 ||
     VAR_73->nfe_devid == 153) {
  if (FUNC_42(VAR_73) != 0)
   VAR_79 = 0;
 }
 VAR_76 = FUNC_33(VAR_72, &VAR_73->nfe_miibus, VAR_74,
     (ifm_change_cb_t)VAR_65, (ifm_stat_cb_t)VAR_64,
     VAR_0, VAR_79, VAR_22, VAR_21);
 if (VAR_76 != 0) {
  FUNC_13(VAR_72, "attaching PHYs failed\n");
  goto fail;
 }
 FUNC_14(VAR_74, VAR_73->eaddr);

 FUNC_3(&VAR_73->nfe_int_task, 0, VAR_67, VAR_73);
 VAR_73->nfe_tq = FUNC_56("nfe_taskq", VAR_26,
     VAR_71, &VAR_73->nfe_tq);
 FUNC_58(&VAR_73->nfe_tq, 1, VAR_56, "%s taskq",
     FUNC_10(VAR_73->nfe_dev));
 VAR_76 = 0;
 if (VAR_73->nfe_msi == 0 && VAR_73->nfe_msix == 0) {
  VAR_76 = FUNC_7(VAR_72, VAR_73->nfe_irq[0],
      VAR_20 | VAR_19, VAR_68, ((void*)0), VAR_73,
      &VAR_73->nfe_intrhand[0]);
 } else {
  for (VAR_77 = 0; VAR_77 < VAR_47; VAR_77++) {
   VAR_76 = FUNC_7(VAR_72, VAR_73->nfe_irq[VAR_77],
       VAR_20 | VAR_19, VAR_68, ((void*)0), VAR_73,
       &VAR_73->nfe_intrhand[VAR_77]);
   if (VAR_76 != 0)
    break;
  }
 }
 if (VAR_76) {
  FUNC_13(VAR_72, "couldn't set up irq\n");
  FUNC_57(VAR_73->nfe_tq);
  VAR_73->nfe_tq = ((void*)0);
  FUNC_15(VAR_74);
  goto fail;
 }

fail:
 if (VAR_76)
  FUNC_41(VAR_72);

 return (VAR_76);
}
