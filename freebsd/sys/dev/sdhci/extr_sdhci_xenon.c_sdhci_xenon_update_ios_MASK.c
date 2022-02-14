
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sdhci_xenon_softc {int slot_id; int mem_res; int reg_vqmmc; int dev; } ;
struct mmc_ios {int power_mode; scalar_t__ clock; } ;
struct TYPE_2__ {struct mmc_ios ios; } ;
struct sdhci_slot {TYPE_1__ host; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct sdhci_slot* FUNC_2 (int ) ;
 struct sdhci_xenon_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;



 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,struct mmc_ios*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_4, device_t VAR_5)
{
 int VAR_6;
 struct sdhci_xenon_softc *VAR_7;
 struct mmc_ios *VAR_8;
 struct sdhci_slot *VAR_9;
 uint32_t VAR_10;

 VAR_6 = FUNC_7(VAR_4, VAR_5);
 if (VAR_6 != 0)
  return (VAR_6);

  VAR_7 = FUNC_3(VAR_4);
 VAR_9 = FUNC_2(VAR_5);
  VAR_8 = &VAR_9->host.ios;

 switch (VAR_8->power_mode) {
 case 129:
  break;
 case 130:
  if (VAR_3)
   FUNC_4(VAR_7->dev, "Powering down sd/mmc\n");

  if (VAR_7->reg_vqmmc)
   FUNC_5(VAR_7->reg_vqmmc);
  break;
 case 128:
  if (VAR_3)
   FUNC_4(VAR_7->dev, "Powering up sd/mmc\n");

  if (VAR_7->reg_vqmmc)
   FUNC_6(VAR_7->reg_vqmmc);
  break;
 };


 if (VAR_8->clock != 0)
  FUNC_8(VAR_4, VAR_8);

 if (VAR_8->clock > VAR_0) {

  VAR_10 = FUNC_0(VAR_7->mem_res, VAR_2);
  VAR_10 |= 1 << (VAR_1 + VAR_7->slot_id);
  FUNC_1(VAR_7->mem_res, VAR_2, VAR_10);
 }

 return (0);
}
