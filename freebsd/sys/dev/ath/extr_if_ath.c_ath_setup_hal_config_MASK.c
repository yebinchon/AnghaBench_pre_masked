
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ath_softc {int sc_pci_devinfo; int sc_dev; } ;
struct TYPE_6__ {int no_pll_pwrsave; } ;
struct TYPE_9__ {TYPE_1__ config; } ;
struct TYPE_8__ {int hw_caps; } ;
struct TYPE_7__ {int ath_hal_ext_lna_ctl_gpio; int ath_hal_ant_ctrl_comm2g_switch_enable; int ath_hal_pcie_waen; void* ath_hal_min_gainidx; void* ath_hal_ext_atten_margin_cfg; } ;
typedef TYPE_2__ HAL_OPS_CONFIG ;


 void* VAR_0 ;
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
 TYPE_5__* VAR_16 ;
 int FUNC_0 (int ,char*,...) ;
 TYPE_3__* VAR_17 ;

__attribute__((used)) static void
FUNC_1(struct ath_softc *VAR_18, HAL_OPS_CONFIG *VAR_19)
{


 if (VAR_18->sc_pci_devinfo & (VAR_10 | VAR_12)) {
  VAR_19->ath_hal_ext_lna_ctl_gpio = 0x200;
  VAR_19->ath_hal_ext_atten_margin_cfg = VAR_0;
  VAR_19->ath_hal_min_gainidx = VAR_0;
  VAR_19->ath_hal_ant_ctrl_comm2g_switch_enable = 0x000bbb88;


  FUNC_0(VAR_18->sc_dev, "configuring for %s\n",
      (VAR_18->sc_pci_devinfo & VAR_10) ?
      "CUS198" : "CUS230");
 }

 if (VAR_18->sc_pci_devinfo & VAR_11)
  FUNC_0(VAR_18->sc_dev, "CUS217 card detected\n");

 if (VAR_18->sc_pci_devinfo & VAR_13)
  FUNC_0(VAR_18->sc_dev, "CUS252 card detected\n");

 if (VAR_18->sc_pci_devinfo & VAR_7)
  FUNC_0(VAR_18->sc_dev, "WB335 1-ANT card detected\n");

 if (VAR_18->sc_pci_devinfo & VAR_8)
  FUNC_0(VAR_18->sc_dev, "WB335 2-ANT card detected\n");

 if (VAR_18->sc_pci_devinfo & VAR_9)
  FUNC_0(VAR_18->sc_dev,
      "Bluetooth Antenna Diversity card detected\n");

 if (VAR_18->sc_pci_devinfo & VAR_15)
  FUNC_0(VAR_18->sc_dev, "Killer Wireless card detected\n");
        if (VAR_18->sc_pci_devinfo & VAR_14) {
                VAR_19->ath_hal_pcie_waen = 0x0040473b;
                FUNC_0(VAR_18->sc_dev, "Enable WAR for ASPM D3/L1\n");
        }
}
