
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ti_sdhci_softc {int dummy; } ;
struct mmc_ios {scalar_t__ bus_width; scalar_t__ bus_mode; } ;
struct TYPE_2__ {struct mmc_ios ios; } ;
struct sdhci_slot {TYPE_1__ host; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sdhci_slot* FUNC_0 (int ) ;
 struct ti_sdhci_softc* FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ti_sdhci_softc*,int ) ;
 int FUNC_4 (struct ti_sdhci_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5, device_t VAR_6)
{
 struct ti_sdhci_softc *VAR_7 = FUNC_1(VAR_5);
 struct sdhci_slot *VAR_8;
 struct mmc_ios *VAR_9;
 uint32_t VAR_10, VAR_11;

 VAR_8 = FUNC_0(VAR_6);
 VAR_9 = &VAR_8->host.ios;







 VAR_10 = FUNC_3(VAR_7, VAR_0);
 VAR_11 = VAR_10;

 if (VAR_9->bus_width == VAR_3)
  VAR_11 |= VAR_1;
 else
  VAR_11 &= ~VAR_1;

 if (VAR_9->bus_mode == VAR_4)
  VAR_11 |= VAR_2;
 else
  VAR_11 &= ~VAR_2;

 if (VAR_11 != VAR_10)
  FUNC_4(VAR_7, VAR_0, VAR_11);

 return (FUNC_2(VAR_5, VAR_6));
}
