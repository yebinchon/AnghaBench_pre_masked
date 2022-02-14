
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int quirks; int max_clk; int caps; } ;
struct tegra_sdhci_softc {int max_clk; int quirks; int caps; int force_card_present; int * mem_res; int * irq_res; int * reset; int * clk; int * gpio_power; int * intr_cookie; int * gpio; TYPE_1__ slot; int dev; } ;
typedef int prop ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,char*,int*,int) ;
 scalar_t__ FUNC_1 (int,char*) ;
 int FUNC_2 (struct tegra_sdhci_softc*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 void* FUNC_3 (int ,int ,int*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *,int,int *,int ,struct tegra_sdhci_softc*,int **) ;
 int FUNC_8 (int ,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,int ,int **) ;
 int FUNC_11 (int *,int*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int,int ) ;
 struct tegra_sdhci_softc* FUNC_14 (int ) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (int ,int,char*,int **) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int ,char*,int **) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ) ;
 int * FUNC_22 (int ,TYPE_1__*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int ,TYPE_1__*,int ) ;
 int FUNC_25 (TYPE_1__*) ;
 int VAR_15 ;

__attribute__((used)) static int
FUNC_26(device_t VAR_16)
{
 struct tegra_sdhci_softc *VAR_17;
 int VAR_18, VAR_19;
 uint64_t VAR_20;
 phandle_t VAR_21, VAR_22;

 VAR_17 = FUNC_14(VAR_16);
 VAR_17->dev = VAR_16;
 VAR_21 = FUNC_21(VAR_16);

 VAR_18 = 0;
 VAR_17->mem_res = FUNC_3(VAR_16, VAR_13, &VAR_18,
     VAR_6);
 if (!VAR_17->mem_res) {
  FUNC_15(VAR_16, "cannot allocate memory window\n");
  VAR_19 = VAR_1;
  goto fail;
 }

 VAR_18 = 0;
 VAR_17->irq_res = FUNC_3(VAR_16, VAR_12, &VAR_18,
     VAR_6);
 if (!VAR_17->irq_res) {
  FUNC_15(VAR_16, "cannot allocate interrupt\n");
  VAR_19 = VAR_1;
  goto fail;
 }

 if (FUNC_7(VAR_16, VAR_17->irq_res, VAR_3 | VAR_2,
     ((void*)0), VAR_15, VAR_17, &VAR_17->intr_cookie)) {
  FUNC_15(VAR_16, "cannot setup interrupt handler\n");
  VAR_19 = VAR_1;
  goto fail;
 }

 VAR_19 = FUNC_19(VAR_17->dev, 0, "sdhci", &VAR_17->reset);
 if (VAR_19 != 0) {
  FUNC_15(VAR_17->dev, "Cannot get 'sdhci' reset\n");
  goto fail;
 }
 VAR_19 = FUNC_18(VAR_17->reset);
 if (VAR_19 != 0) {
  FUNC_15(VAR_16, "Cannot unreset 'sdhci' reset\n");
  goto fail;
 }

 FUNC_16(VAR_17->dev, VAR_21, "power-gpios", &VAR_17->gpio_power);

 VAR_19 = FUNC_10(VAR_16, 0, 0, &VAR_17->clk);
 if (VAR_19 != 0) {
  FUNC_15(VAR_16, "Cannot get clock\n");
  goto fail;
 }
 VAR_19 = FUNC_9(VAR_17->clk);
 if (VAR_19 != 0) {
  FUNC_15(VAR_16, "Cannot enable clock\n");
  goto fail;
 }
 VAR_19 = FUNC_13(VAR_17->clk, 48000000, VAR_0);
 if (VAR_19 != 0) {
  FUNC_15(VAR_16, "Cannot set clock\n");
 }
 VAR_19 = FUNC_11(VAR_17->clk, &VAR_20);
 if (VAR_19 != 0) {
  FUNC_15(VAR_16, "Cannot get clock frequency\n");
  goto fail;
 }
 if (VAR_14)
  FUNC_15(VAR_16, " Base MMC clock: %lld\n", VAR_20);


 VAR_17->max_clk = (int)VAR_20;
 VAR_17->quirks |= VAR_9 |
     VAR_10 |
     VAR_11;


 VAR_17->caps = FUNC_2(VAR_17, VAR_7);
 if (FUNC_0(VAR_21, "bus-width", &VAR_22, sizeof(VAR_22)) > 0) {
  VAR_17->caps &= ~(VAR_4 | VAR_5);
  switch (VAR_22) {
  case 8:
   VAR_17->caps |= VAR_5;

  case 4:
   VAR_17->caps |= VAR_4;
   break;
  case 1:
   break;
  default:
   FUNC_15(VAR_16, "Bad bus-width value %u\n", VAR_22);
   break;
  }
 }
 if (FUNC_1(VAR_21, "non-removable"))
  VAR_17->force_card_present = 1;




 VAR_17->caps &= ~VAR_8;

 VAR_17->slot.quirks = VAR_17->quirks;
 VAR_17->slot.max_clk = VAR_17->max_clk;
 VAR_17->slot.caps = VAR_17->caps;

 VAR_19 = FUNC_24(VAR_16, &VAR_17->slot, 0);
 if (VAR_19 != 0) {
  goto fail;
 }

 VAR_17->gpio = FUNC_22(VAR_17->dev, &VAR_17->slot);

 FUNC_5(VAR_16);
 FUNC_4(VAR_16);

 FUNC_25(&VAR_17->slot);

 return (0);

fail:
 if (VAR_17->gpio != ((void*)0))
  FUNC_23(VAR_17->gpio);
 if (VAR_17->intr_cookie != ((void*)0))
  FUNC_8(VAR_16, VAR_17->irq_res, VAR_17->intr_cookie);
 if (VAR_17->gpio_power != ((void*)0))
  FUNC_17(VAR_17->gpio_power);
 if (VAR_17->clk != ((void*)0))
  FUNC_12(VAR_17->clk);
 if (VAR_17->reset != ((void*)0))
  FUNC_20(VAR_17->reset);
 if (VAR_17->irq_res != ((void*)0))
  FUNC_6(VAR_16, VAR_12, 0, VAR_17->irq_res);
 if (VAR_17->mem_res != ((void*)0))
  FUNC_6(VAR_16, VAR_13, 0, VAR_17->mem_res);

 return (VAR_19);
}
