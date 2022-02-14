
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int pcie_pm_cap_reg; int pcie_link_speed; int pcie_link_width; int pcie_pcie_cap_reg; int pcie_msi_cap_reg; int pcie_msix_cap_reg; int pcie_cap_flags; } ;
struct bxe_softc {TYPE_1__ devinfo; int dev; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct bxe_softc*,int) ;
 int FUNC_3 (struct bxe_softc*,int ,int) ;
 scalar_t__ FUNC_4 (int ,int ,int*) ;

__attribute__((used)) static void
FUNC_5(struct bxe_softc *VAR_11)
{
    uint16_t VAR_12;
    int VAR_13;


    if (FUNC_4(VAR_11->dev, VAR_10, &VAR_13) == 0) {
        if (VAR_13 != 0) {
            FUNC_0(VAR_11, VAR_4, "Found PM capability at 0x%04x\n", VAR_13);

            VAR_11->devinfo.pcie_cap_flags |= VAR_3;
            VAR_11->devinfo.pcie_pm_cap_reg = (uint16_t)VAR_13;
        }
    }

    VAR_12 = FUNC_3(VAR_11, VAR_7, 2);


    if (FUNC_1(VAR_11)) {

        VAR_11->devinfo.pcie_link_speed =
            (FUNC_2(VAR_11, 0x3d04) & (1 << 24)) ? 2 : 1;


        VAR_11->devinfo.pcie_link_width =
            ((VAR_12 & VAR_6) >> 4);
        if (VAR_11->devinfo.pcie_link_speed > 1) {
            VAR_11->devinfo.pcie_link_width =
                ((VAR_12 & VAR_6) >> 4) >> 1;
        }
    } else {
        VAR_11->devinfo.pcie_link_speed =
            (VAR_12 & VAR_5);
        VAR_11->devinfo.pcie_link_width =
            ((VAR_12 & VAR_6) >> 4);
    }

    FUNC_0(VAR_11, VAR_4, "PCIe link speed=%d width=%d\n",
          VAR_11->devinfo.pcie_link_speed, VAR_11->devinfo.pcie_link_width);

    VAR_11->devinfo.pcie_cap_flags |= VAR_2;
    VAR_11->devinfo.pcie_pcie_cap_reg = (uint16_t)VAR_13;


    if (FUNC_4(VAR_11->dev, VAR_8, &VAR_13) == 0) {
        if (VAR_13 != 0) {
            FUNC_0(VAR_11, VAR_4, "Found MSI capability at 0x%04x\n", VAR_13);

            VAR_11->devinfo.pcie_cap_flags |= VAR_1;
            VAR_11->devinfo.pcie_msi_cap_reg = (uint16_t)VAR_13;
        }
    }


    if (FUNC_4(VAR_11->dev, VAR_9, &VAR_13) == 0) {
        if (VAR_13 != 0) {
            FUNC_0(VAR_11, VAR_4, "Found MSI-X capability at 0x%04x\n", VAR_13);

            VAR_11->devinfo.pcie_cap_flags |= VAR_0;
            VAR_11->devinfo.pcie_msix_cap_reg = (uint16_t)VAR_13;
        }
    }
}
