
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ pcix_location; } ;
struct TYPE_6__ {scalar_t__ pcie_location; } ;
struct TYPE_5__ {void* br_control; void* br_pribus; void* br_secbus; void* br_subbus; void* br_seclat; } ;
struct TYPE_8__ {int hdrtype; int * iov; TYPE_3__ pcix; TYPE_2__ pcie; void* subdevice; void* subvendor; TYPE_1__ bridge; void* maxlat; void* mingnt; void* revid; void* progif; void* subclass; void* baseclass; void* lattimer; void* cachelnsz; void* intpin; void* intline; void* cmdreg; void* device; void* vendor; } ;
struct pci_devinfo {TYPE_4__ cfg; } ;
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
 int FUNC_0 (int ,struct pci_devinfo*) ;
 int FUNC_1 (int ,struct pci_devinfo*) ;
 int VAR_34 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct pci_devinfo*) ;
 void* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int) ;

void
FUNC_7(device_t VAR_35, struct pci_devinfo *VAR_36, int VAR_37)
{
 uint32_t VAR_38;
 int VAR_39;
 VAR_36->cfg.vendor = FUNC_5(VAR_35, VAR_31, 2);
 VAR_36->cfg.device = FUNC_5(VAR_35, VAR_10, 2);
 VAR_36->cfg.cmdreg = FUNC_5(VAR_35, VAR_9, 2);
 VAR_36->cfg.intline = FUNC_5(VAR_35, VAR_11, 1);
 VAR_36->cfg.intpin = FUNC_5(VAR_35, VAR_12, 1);
 VAR_36->cfg.cachelnsz = FUNC_5(VAR_35, VAR_7, 1);
 VAR_36->cfg.lattimer = FUNC_5(VAR_35, VAR_13, 1);
 VAR_36->cfg.baseclass = FUNC_5(VAR_35, VAR_8, 1);
 VAR_36->cfg.subclass = FUNC_5(VAR_35, VAR_26, 1);
 VAR_36->cfg.progif = FUNC_5(VAR_35, VAR_18, 1);
 VAR_36->cfg.revid = FUNC_5(VAR_35, VAR_19, 1);
 switch (VAR_36->cfg.hdrtype & VAR_4) {
 case 128:
  VAR_36->cfg.subvendor = FUNC_5(VAR_35, VAR_29, 2);
  VAR_36->cfg.subdevice = FUNC_5(VAR_35, VAR_27, 2);
  VAR_36->cfg.mingnt = FUNC_5(VAR_35, VAR_15, 1);
  VAR_36->cfg.maxlat = FUNC_5(VAR_35, VAR_14, 1);
  break;
 case 130:
  VAR_36->cfg.bridge.br_seclat = FUNC_5(VAR_35,
      VAR_22, 1);
  VAR_36->cfg.bridge.br_subbus = FUNC_5(VAR_35,
      VAR_24, 1);
  VAR_36->cfg.bridge.br_secbus = FUNC_5(VAR_35,
      VAR_20, 1);
  VAR_36->cfg.bridge.br_pribus = FUNC_5(VAR_35,
      VAR_16, 1);
  VAR_36->cfg.bridge.br_control = FUNC_5(VAR_35,
      VAR_5, 2);
  break;
 case 129:
  VAR_36->cfg.bridge.br_seclat = FUNC_5(VAR_35,
      VAR_23, 1);
  VAR_36->cfg.bridge.br_subbus = FUNC_5(VAR_35,
      VAR_25, 1);
  VAR_36->cfg.bridge.br_secbus = FUNC_5(VAR_35,
      VAR_21, 1);
  VAR_36->cfg.bridge.br_pribus = FUNC_5(VAR_35,
      VAR_17, 1);
  VAR_36->cfg.bridge.br_control = FUNC_5(VAR_35,
      VAR_6, 2);
  VAR_36->cfg.subvendor = FUNC_5(VAR_35, VAR_30, 2);
  VAR_36->cfg.subdevice = FUNC_5(VAR_35, VAR_28, 2);
  break;
 }

 if (VAR_36->cfg.pcie.pcie_location != 0)
  FUNC_0(VAR_35, VAR_36);

 if (VAR_36->cfg.pcix.pcix_location != 0)
  FUNC_1(VAR_35, VAR_36);
 VAR_38 = FUNC_2(VAR_35);
 if (!VAR_37)
  return;
 switch (VAR_34)
 {
  case 0:
   return;
  case 1:
   if (VAR_38 == VAR_3)
    return;

  case 2:
   if (VAR_38 == VAR_1 || VAR_38 == VAR_2 ||
       VAR_38 == VAR_0)
    return;

  case 3:
   break;
 }




 VAR_39 = FUNC_3(VAR_35);
 if (VAR_39 != VAR_32 && VAR_39 != VAR_33)
  FUNC_6(VAR_35, VAR_32);
 if (FUNC_3(VAR_35) != VAR_33)
  FUNC_6(VAR_35, VAR_33);
}
