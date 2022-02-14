
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ pcie_location; scalar_t__ pcie_type; } ;
struct TYPE_4__ {TYPE_1__ pcie; } ;
struct pci_devinfo {TYPE_2__ cfg; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
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
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (TYPE_2__*,char*,int,int) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int ,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_41, struct pci_devinfo *VAR_42)
{
 int VAR_43;
 uint32_t VAR_44;
 uint16_t VAR_45;

 if (VAR_42->cfg.pcie.pcie_location != 0 &&
     VAR_42->cfg.pcie.pcie_type == VAR_7) {
  VAR_45 = FUNC_2(VAR_41, VAR_42->cfg.pcie.pcie_location +
      VAR_9, 2);
  VAR_45 &= ~(VAR_4 |
      VAR_6 | VAR_5);
  FUNC_3(VAR_41, VAR_42->cfg.pcie.pcie_location +
      VAR_9, VAR_45, 2);
 }
 if (FUNC_0(VAR_41, VAR_39, &VAR_43) == 0) {
  VAR_44 = FUNC_2(VAR_41, VAR_43 + VAR_38, 4);
  FUNC_3(VAR_41, VAR_43 + VAR_38, VAR_44, 4);
  if (VAR_44 != 0 && VAR_40) {
   FUNC_1(&VAR_42->cfg,
       "clearing AER UC 0x%08x -> 0x%08x\n",
       VAR_44, FUNC_2(VAR_41, VAR_43 + VAR_38,
       4));
  }

  VAR_44 = FUNC_2(VAR_41, VAR_43 + VAR_37, 4);
  VAR_44 &= ~(VAR_32 |
      VAR_22 |
      VAR_30 |
      VAR_28 |
      VAR_24 |
      VAR_21 |
      VAR_20 |
      VAR_33 |
      VAR_29 |
      VAR_26 |
      VAR_23 |
      VAR_34 |
      VAR_18 |
      VAR_25 |
      VAR_27 |
      VAR_19 |
      VAR_31);
  FUNC_3(VAR_41, VAR_43 + VAR_37, VAR_44, 4);

  VAR_44 = FUNC_2(VAR_41, VAR_43 + VAR_36, 4);
  FUNC_3(VAR_41, VAR_43 + VAR_36, VAR_44, 4);
  if (VAR_44 != 0 && VAR_40) {
   FUNC_1(&VAR_42->cfg,
       "clearing AER COR 0x%08x -> 0x%08x\n",
       VAR_44, FUNC_2(VAR_41, VAR_43 + VAR_36,
       4));
  }

  VAR_44 = FUNC_2(VAR_41, VAR_43 + VAR_35, 4);
  VAR_44 &= ~(VAR_15 |
      VAR_12 |
      VAR_11 |
      VAR_16 |
      VAR_17 |
      VAR_10 |
      VAR_14 |
      VAR_13);
  FUNC_3(VAR_41, VAR_43 + VAR_35, VAR_44, 4);

  VAR_44 = FUNC_2(VAR_41, VAR_42->cfg.pcie.pcie_location +
      VAR_8, 2);
  VAR_44 |= VAR_0 | VAR_2 |
      VAR_1 | VAR_3;
  FUNC_3(VAR_41, VAR_42->cfg.pcie.pcie_location +
      VAR_8, VAR_44, 2);
 }
}
