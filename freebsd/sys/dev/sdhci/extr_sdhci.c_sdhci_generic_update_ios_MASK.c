
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_ios {scalar_t__ power_mode; scalar_t__ clock; scalar_t__ bus_width; int vdd; } ;
struct TYPE_2__ {struct mmc_ios ios; } ;
struct sdhci_slot {int quirks; int hostctrl; TYPE_1__ host; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sdhci_slot*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,struct sdhci_slot*) ;
 int VAR_8 ;
 int FUNC_2 (struct sdhci_slot*) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (struct sdhci_slot*,int ,int ) ;
 int FUNC_4 (struct sdhci_slot*,int ,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 struct sdhci_slot* FUNC_5 (int ) ;
 int FUNC_6 (char*,scalar_t__) ;
 scalar_t__ VAR_13 ;
 int FUNC_7 (struct sdhci_slot*) ;
 int FUNC_8 (struct sdhci_slot*,int) ;
 int FUNC_9 (struct sdhci_slot*,scalar_t__) ;
 int FUNC_10 (struct sdhci_slot*,int ) ;

int
FUNC_11(device_t VAR_14, device_t VAR_15)
{
 struct sdhci_slot *VAR_16 = FUNC_5(VAR_15);
 struct mmc_ios *VAR_17 = &VAR_16->host.ios;

 FUNC_0(VAR_16);

 if (VAR_17->power_mode == VAR_13) {
  FUNC_4(VAR_16, VAR_8, 0);
  FUNC_7(VAR_16);
 }

 FUNC_9(VAR_16, VAR_17->clock);
 FUNC_10(VAR_16, (VAR_17->power_mode == VAR_13) ? 0 : VAR_17->vdd);
 if (VAR_17->bus_width == VAR_12) {
  VAR_16->hostctrl |= VAR_1;
  VAR_16->hostctrl &= ~VAR_0;
 } else if (VAR_17->bus_width == VAR_11) {
  VAR_16->hostctrl &= ~VAR_1;
  VAR_16->hostctrl |= VAR_0;
 } else if (VAR_17->bus_width == VAR_10) {
  VAR_16->hostctrl &= ~VAR_1;
  VAR_16->hostctrl &= ~VAR_0;
 } else {
  FUNC_6("Invalid bus width: %d", VAR_17->bus_width);
 }
 if (VAR_17->clock > VAR_9 &&
     !(VAR_16->quirks & VAR_4))
  VAR_16->hostctrl |= VAR_2;
 else
  VAR_16->hostctrl &= ~VAR_2;
 FUNC_3(VAR_16, VAR_3, VAR_16->hostctrl);
 FUNC_1(VAR_14, VAR_16);

 if (VAR_16->quirks & VAR_5)
  FUNC_8(VAR_16, VAR_6 | VAR_7);

 FUNC_2(VAR_16);
 return (0);
}
