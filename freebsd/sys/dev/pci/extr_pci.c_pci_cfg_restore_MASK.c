
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ msix_location; } ;
struct TYPE_10__ {scalar_t__ msi_location; } ;
struct TYPE_9__ {scalar_t__ pcix_location; } ;
struct TYPE_8__ {scalar_t__ pcie_location; } ;
struct TYPE_7__ {int br_control; int br_pribus; int br_secbus; int br_subbus; int br_seclat; } ;
struct TYPE_12__ {int hdrtype; int * iov; TYPE_5__ msix; TYPE_4__ msi; TYPE_3__ pcix; TYPE_2__ pcie; TYPE_1__ bridge; int maxlat; int mingnt; int revid; int progif; int lattimer; int cachelnsz; int intpin; int intline; int cmdreg; } ;
struct pci_devinfo {TYPE_6__ cfg; } ;
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
 scalar_t__ VAR_20 ;
 int FUNC_0 (int ,struct pci_devinfo*) ;
 int FUNC_1 (int ,struct pci_devinfo*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,struct pci_devinfo*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,int ,int ,int) ;

void
FUNC_9(device_t VAR_21, struct pci_devinfo *VAR_22)
{
 if (FUNC_2(VAR_21) != VAR_20)
  FUNC_7(VAR_21, VAR_20);
 FUNC_8(VAR_21, VAR_4, VAR_22->cfg.cmdreg, 2);
 FUNC_8(VAR_21, VAR_5, VAR_22->cfg.intline, 1);
 FUNC_8(VAR_21, VAR_6, VAR_22->cfg.intpin, 1);
 FUNC_8(VAR_21, VAR_3, VAR_22->cfg.cachelnsz, 1);
 FUNC_8(VAR_21, VAR_7, VAR_22->cfg.lattimer, 1);
 FUNC_8(VAR_21, VAR_12, VAR_22->cfg.progif, 1);
 FUNC_8(VAR_21, VAR_13, VAR_22->cfg.revid, 1);
 switch (VAR_22->cfg.hdrtype & VAR_0) {
 case 128:
  FUNC_8(VAR_21, VAR_9, VAR_22->cfg.mingnt, 1);
  FUNC_8(VAR_21, VAR_8, VAR_22->cfg.maxlat, 1);
  break;
 case 130:
  FUNC_8(VAR_21, VAR_16,
      VAR_22->cfg.bridge.br_seclat, 1);
  FUNC_8(VAR_21, VAR_18,
      VAR_22->cfg.bridge.br_subbus, 1);
  FUNC_8(VAR_21, VAR_14,
      VAR_22->cfg.bridge.br_secbus, 1);
  FUNC_8(VAR_21, VAR_10,
      VAR_22->cfg.bridge.br_pribus, 1);
  FUNC_8(VAR_21, VAR_1,
      VAR_22->cfg.bridge.br_control, 2);
  break;
 case 129:
  FUNC_8(VAR_21, VAR_17,
      VAR_22->cfg.bridge.br_seclat, 1);
  FUNC_8(VAR_21, VAR_19,
      VAR_22->cfg.bridge.br_subbus, 1);
  FUNC_8(VAR_21, VAR_15,
      VAR_22->cfg.bridge.br_secbus, 1);
  FUNC_8(VAR_21, VAR_11,
      VAR_22->cfg.bridge.br_pribus, 1);
  FUNC_8(VAR_21, VAR_2,
      VAR_22->cfg.bridge.br_control, 2);
  break;
 }
 FUNC_4(VAR_21);




 if (VAR_22->cfg.pcie.pcie_location != 0)
  FUNC_0(VAR_21, VAR_22);
 if (VAR_22->cfg.pcix.pcix_location != 0)
  FUNC_1(VAR_21, VAR_22);


 if (VAR_22->cfg.msi.msi_location != 0)
  FUNC_5(VAR_21);
 if (VAR_22->cfg.msix.msix_location != 0)
  FUNC_6(VAR_21);





}
