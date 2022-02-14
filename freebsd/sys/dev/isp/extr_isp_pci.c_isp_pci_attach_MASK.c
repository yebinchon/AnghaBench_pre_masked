
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_21__ ;
typedef struct TYPE_30__ TYPE_1__ ;


typedef int uint32_t ;
struct isp_spi {int dummy; } ;
struct TYPE_32__ {int * ptr; } ;
struct TYPE_33__ {TYPE_2__ pc; TYPE_21__* fw; } ;
struct TYPE_34__ {int isp_nchan; int isp_revision; int isp_nirq; int isp_lock; TYPE_3__ isp_osinfo; int * isp_param; int isp_port; TYPE_5__* isp_mdvec; int * isp_regs2; int * isp_regs; void* isp_type; void* isp_dev; } ;
struct isp_pcisoftc {scalar_t__ rgd; scalar_t__ rtp; scalar_t__ rtp1; scalar_t__ rgd1; scalar_t__ rtp2; scalar_t__ rgd2; TYPE_4__ pci_isp; int * regs2; int * regs1; int * regs; scalar_t__ msicount; TYPE_1__* irq; void** pci_poff; void* pci_dev; } ;
struct isp_fc {int dummy; } ;
typedef int sdparam ;
typedef TYPE_4__ ispsoftc_t ;
typedef int fwname ;
typedef int fcparam ;
typedef void* device_t ;
struct TYPE_35__ {int dv_ispfw; } ;
struct TYPE_31__ {int data; } ;
struct TYPE_30__ {scalar_t__ iqd; int * irq; int ih; } ;


 size_t VAR_0 ;
 void* VAR_1 ;
 size_t VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 size_t VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 void* FUNC_8 (int) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 void* VAR_40 ;
 void* VAR_41 ;
 void* VAR_42 ;
 void* VAR_43 ;
 void* VAR_44 ;
 void* VAR_45 ;
 int VAR_46 ;
 size_t VAR_47 ;
 size_t VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 void* VAR_51 ;
 size_t VAR_52 ;
 scalar_t__ VAR_53 ;
 void* FUNC_9 (void*,scalar_t__,scalar_t__*,int ) ;
 int FUNC_10 (void*,scalar_t__,scalar_t__,int *) ;
 int FUNC_11 (void*,int *,int ) ;
 struct isp_pcisoftc* FUNC_12 (void*) ;
 int FUNC_13 (void*,char*,...) ;
 TYPE_21__* FUNC_14 (char*) ;
 int FUNC_15 (int *,int ) ;
 scalar_t__ FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (void*,TYPE_4__*) ;
 int FUNC_18 (void*,int,TYPE_4__*) ;
 scalar_t__ VAR_54 ;
 int FUNC_19 (TYPE_4__*,int ,char*,...) ;
 scalar_t__ FUNC_20 (TYPE_4__*,int) ;
 int FUNC_21 (TYPE_4__*) ;
 void* FUNC_22 (size_t,int ,int) ;
 TYPE_5__ VAR_55 ;
 TYPE_5__ VAR_56 ;
 TYPE_5__ VAR_57 ;
 TYPE_5__ VAR_58 ;
 TYPE_5__ VAR_59 ;
 TYPE_5__ VAR_60 ;
 TYPE_5__ VAR_61 ;
 TYPE_5__ VAR_62 ;
 TYPE_5__ VAR_63 ;
 TYPE_5__ VAR_64 ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,char*,int *,int ) ;
 int const FUNC_25 (void*) ;
 int FUNC_26 (void*) ;
 int FUNC_27 (void*) ;
 int FUNC_28 (void*,int ,int) ;
 int FUNC_29 (void*) ;
 int FUNC_30 (void*,int ,int,int) ;
 int FUNC_31 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_32(device_t VAR_65)
{
 struct isp_pcisoftc *VAR_66 = FUNC_12(VAR_65);
 ispsoftc_t *VAR_67 = &VAR_66->pci_isp;
 int VAR_68;
 uint32_t VAR_69, VAR_70, VAR_71, VAR_72;
 size_t VAR_73, VAR_74;
 char VAR_75[32];

 VAR_66->pci_dev = VAR_65;
 VAR_67->isp_dev = VAR_65;
 VAR_67->isp_nchan = 1;
 FUNC_24(&VAR_67->isp_lock, "isp", ((void*)0), VAR_25);




 VAR_54 = 0;
 FUNC_17(VAR_65, VAR_67);

 VAR_71 = VAR_38;
 VAR_66->regs = VAR_66->regs2 = ((void*)0);
 VAR_66->rgd = VAR_66->rtp = 0;

 VAR_66->pci_dev = VAR_65;
 VAR_66->pci_poff[VAR_0 >> VAR_52] = VAR_1;
 VAR_66->pci_poff[VAR_24 >> VAR_52] = VAR_43;
 VAR_66->pci_poff[VAR_48 >> VAR_52] = VAR_45;
 VAR_66->pci_poff[VAR_47 >> VAR_52] = VAR_44;
 VAR_66->pci_poff[VAR_2 >> VAR_52] = VAR_3;

 switch (FUNC_25(VAR_65)) {
 case 149:
  VAR_72 = 0x1040;
  VAR_67->isp_mdvec = &VAR_55;
  VAR_67->isp_type = VAR_20;
  break;
 case 148:
  VAR_72 = 0x1080;
  VAR_67->isp_mdvec = &VAR_56;
  VAR_67->isp_type = VAR_16;
  VAR_66->pci_poff[VAR_2 >> VAR_52] = VAR_5;
  break;
 case 146:
  VAR_72 = 0x1080;
  VAR_67->isp_mdvec = &VAR_56;
  VAR_67->isp_type = VAR_18;
  VAR_67->isp_nchan = 2;
  VAR_66->pci_poff[VAR_2 >> VAR_52] = VAR_5;
  break;
 case 145:
  VAR_72 = 0x1080;
  VAR_67->isp_mdvec = &VAR_56;
  VAR_67->isp_type = VAR_19;
  VAR_66->pci_poff[VAR_2 >> VAR_52] = VAR_5;
  break;
 case 150:
  VAR_72 = 0x12160;
  VAR_67->isp_mdvec = &VAR_57;
  VAR_67->isp_type = VAR_15;
  VAR_66->pci_poff[VAR_2 >> VAR_52] = VAR_5;
  break;
 case 147:
  VAR_72 = 0x12160;
  VAR_67->isp_nchan = 2;
  VAR_67->isp_mdvec = &VAR_57;
  VAR_67->isp_type = VAR_17;
  VAR_66->pci_poff[VAR_2 >> VAR_52] = VAR_5;
  break;
 case 143:
  VAR_72 = 0x2100;
  VAR_67->isp_mdvec = &VAR_58;
  VAR_67->isp_type = VAR_6;
  VAR_66->pci_poff[VAR_24 >> VAR_52] = VAR_40;
  if (FUNC_27(VAR_65) < 3) {






   VAR_71 = 1;
  }
  break;
 case 142:
  VAR_72 = 0x2200;
  VAR_67->isp_mdvec = &VAR_59;
  VAR_67->isp_type = VAR_7;
  VAR_66->pci_poff[VAR_24 >> VAR_52] = VAR_40;
  break;
 case 141:
  VAR_72 = 0x2300;
  VAR_67->isp_mdvec = &VAR_60;
  VAR_67->isp_type = VAR_8;
  VAR_66->pci_poff[VAR_24 >> VAR_52] = VAR_41;
  break;
 case 140:
 case 130:
  VAR_72 = 0x2300;
  VAR_67->isp_mdvec = &VAR_60;
  VAR_67->isp_type = VAR_9;
  VAR_66->pci_poff[VAR_24 >> VAR_52] = VAR_41;
  break;
 case 139:
 case 129:
  VAR_72 = 0x2322;
  VAR_67->isp_mdvec = &VAR_60;
  VAR_67->isp_type = VAR_10;
  VAR_66->pci_poff[VAR_24 >> VAR_52] = VAR_41;
  break;
 case 138:
 case 137:
  VAR_72 = 0x2400;
  VAR_67->isp_nchan += VAR_54;
  VAR_67->isp_mdvec = &VAR_61;
  VAR_67->isp_type = VAR_11;
  VAR_66->pci_poff[VAR_24 >> VAR_52] = VAR_42;
  break;
 case 136:
  VAR_72 = 0x2500;
  VAR_67->isp_nchan += VAR_54;
  VAR_67->isp_mdvec = &VAR_62;
  VAR_67->isp_type = VAR_12;
  VAR_66->pci_poff[VAR_24 >> VAR_52] = VAR_42;
  break;
 case 131:
  VAR_72 = 0x2500;
  VAR_67->isp_mdvec = &VAR_62;
  VAR_67->isp_type = VAR_12;
  VAR_66->pci_poff[VAR_24 >> VAR_52] = VAR_42;
  break;
 case 144:
 case 128:
  VAR_72 = 0x2600;
  VAR_67->isp_nchan += VAR_54;
  VAR_67->isp_mdvec = &VAR_63;
  VAR_67->isp_type = VAR_13;
  VAR_66->pci_poff[VAR_24 >> VAR_52] = VAR_42;
  break;
 case 135:
 case 134:
 case 133:
 case 132:
  VAR_72 = 0x2700;
  VAR_67->isp_nchan += VAR_54;
  VAR_67->isp_mdvec = &VAR_64;
  VAR_67->isp_type = VAR_14;
  VAR_66->pci_poff[VAR_24 >> VAR_52] = VAR_42;
  break;
 default:
  FUNC_13(VAR_65, "unknown device type\n");
  goto bad;
  break;
 }
 VAR_67->isp_revision = FUNC_27(VAR_65);

 if (FUNC_6(VAR_67)) {
  VAR_66->rtp = VAR_51;
  VAR_66->rgd = FUNC_8(0);
  VAR_66->regs = FUNC_9(VAR_65, VAR_66->rtp, &VAR_66->rgd,
      VAR_46);
  VAR_66->rtp1 = VAR_51;
  VAR_66->rgd1 = FUNC_8(2);
  VAR_66->regs1 = FUNC_9(VAR_65, VAR_66->rtp1, &VAR_66->rgd1,
      VAR_46);
  VAR_66->rtp2 = VAR_51;
  VAR_66->rgd2 = FUNC_8(4);
  VAR_66->regs2 = FUNC_9(VAR_65, VAR_66->rtp2, &VAR_66->rgd2,
      VAR_46);
 } else {
  VAR_66->rtp = VAR_51;
  VAR_66->rgd = FUNC_8(1);
  VAR_66->regs = FUNC_9(VAR_65, VAR_66->rtp, &VAR_66->rgd,
      VAR_46);
  if (VAR_66->regs == ((void*)0)) {
   VAR_66->rtp = VAR_49;
   VAR_66->rgd = FUNC_8(0);
   VAR_66->regs = FUNC_9(VAR_65, VAR_66->rtp,
       &VAR_66->rgd, VAR_46);
  }
 }
 if (VAR_66->regs == ((void*)0)) {
  FUNC_13(VAR_65, "Unable to map any ports\n");
  goto bad;
 }
 if (VAR_53) {
  FUNC_13(VAR_65, "Using %s space register mapping\n",
      (VAR_66->rtp == VAR_49)? "I/O" : "Memory");
 }
 VAR_67->isp_regs = VAR_66->regs;
 VAR_67->isp_regs2 = VAR_66->regs2;

 if (FUNC_7(VAR_67)) {
  VAR_73 = sizeof (fcparam);
  VAR_74 = sizeof (struct isp_fc);
 } else {
  VAR_73 = sizeof (sdparam);
  VAR_74 = sizeof (struct isp_spi);
 }
 VAR_73 *= VAR_67->isp_nchan;
 VAR_74 *= VAR_67->isp_nchan;
 VAR_67->isp_param = FUNC_22(VAR_73, VAR_26, VAR_27 | VAR_28);
 if (VAR_67->isp_param == ((void*)0)) {
  FUNC_13(VAR_65, "cannot allocate parameter data\n");
  goto bad;
 }
 VAR_67->isp_osinfo.pc.ptr = FUNC_22(VAR_74, VAR_26, VAR_27 | VAR_28);
 if (VAR_67->isp_osinfo.pc.ptr == ((void*)0)) {
  FUNC_13(VAR_65, "cannot allocate parameter data\n");
  goto bad;
 }




 for (VAR_68 = 0; VAR_68 < VAR_67->isp_nchan; VAR_68++) {
  FUNC_18(VAR_65, VAR_68, VAR_67);
 }

 VAR_67->isp_osinfo.fw = ((void*)0);
 if (VAR_67->isp_osinfo.fw == ((void*)0)) {
  FUNC_31(VAR_75, sizeof (VAR_75), "isp_%04x", VAR_72);
  VAR_67->isp_osinfo.fw = FUNC_14(VAR_75);
 }
 if (VAR_67->isp_osinfo.fw != ((void*)0)) {
  FUNC_19(VAR_67, VAR_21, "loaded firmware %s", VAR_75);
  VAR_67->isp_mdvec->dv_ispfw = VAR_67->isp_osinfo.fw->data;
 }




 VAR_70 = FUNC_28(VAR_65, VAR_35, 2);
 VAR_70 |= VAR_33 | VAR_32 | VAR_29 | VAR_31;
 if (FUNC_2(VAR_67)) {
  VAR_70 &= ~VAR_31;
 }
 if (FUNC_3(VAR_67) || FUNC_25(VAR_65) == 130) {
  VAR_70 &= ~VAR_30;
 }
 if (FUNC_5(VAR_67)) {
  VAR_70 &= ~VAR_30;
 }
 FUNC_30(VAR_65, VAR_35, VAR_70, 2);




 VAR_69 = FUNC_28(VAR_65, VAR_34, 1);
 if (VAR_69 == 0 || (VAR_71 != VAR_38 && VAR_69 != VAR_71)) {
  FUNC_19(VAR_67, VAR_22, "set PCI line size to %d from %d", VAR_71, VAR_69);
  VAR_69 = VAR_71;
  FUNC_30(VAR_65, VAR_34, VAR_69, 1);
 }




 VAR_69 = FUNC_28(VAR_65, VAR_36, 1);
 if (VAR_69 < VAR_39) {
  VAR_69 = VAR_39;
  FUNC_19(VAR_67, VAR_22, "set PCI latency to %d", VAR_69);
  FUNC_30(VAR_65, VAR_36, VAR_69, 1);
 }




 VAR_69 = FUNC_28(VAR_65, VAR_37, 4);
 VAR_69 &= ~1;
 FUNC_30(VAR_65, VAR_37, VAR_69, 4);




 if (FUNC_4(VAR_67) || FUNC_5(VAR_67)) {
  VAR_67->isp_port = FUNC_26(VAR_65);
 }




 FUNC_0(VAR_67);
 if (FUNC_20(VAR_67, 1) != 0) {
  FUNC_1(VAR_67);
  goto bad;
 }
 FUNC_1(VAR_67);
 if (FUNC_16(VAR_67)) {
  FUNC_0(VAR_67);
  FUNC_21(VAR_67);
  FUNC_1(VAR_67);
  goto bad;
 }
 return (0);

bad:
 if (VAR_67->isp_osinfo.fw == ((void*)0) && !FUNC_6(VAR_67)) {





  FUNC_19(VAR_67, VAR_23, "See the ispfw(4) man page on "
      "how to load known good firmware at boot time");
 }
 for (VAR_68 = 0; VAR_68 < VAR_67->isp_nirq; VAR_68++) {
  (void) FUNC_11(VAR_65, VAR_66->irq[VAR_68].irq, VAR_66->irq[VAR_68].ih);
  (void) FUNC_10(VAR_65, VAR_50, VAR_66->irq[VAR_68].iqd,
      VAR_66->irq[0].irq);
 }
 if (VAR_66->msicount) {
  FUNC_29(VAR_65);
 }
 if (VAR_66->regs)
  (void) FUNC_10(VAR_65, VAR_66->rtp, VAR_66->rgd, VAR_66->regs);
 if (VAR_66->regs1)
  (void) FUNC_10(VAR_65, VAR_66->rtp1, VAR_66->rgd1, VAR_66->regs1);
 if (VAR_66->regs2)
  (void) FUNC_10(VAR_65, VAR_66->rtp2, VAR_66->rgd2, VAR_66->regs2);
 if (VAR_66->pci_isp.isp_param) {
  FUNC_15(VAR_66->pci_isp.isp_param, VAR_26);
  VAR_66->pci_isp.isp_param = ((void*)0);
 }
 if (VAR_66->pci_isp.isp_osinfo.pc.ptr) {
  FUNC_15(VAR_66->pci_isp.isp_osinfo.pc.ptr, VAR_26);
  VAR_66->pci_isp.isp_osinfo.pc.ptr = ((void*)0);
 }
 FUNC_23(&VAR_67->isp_lock);
 return (VAR_4);
}
