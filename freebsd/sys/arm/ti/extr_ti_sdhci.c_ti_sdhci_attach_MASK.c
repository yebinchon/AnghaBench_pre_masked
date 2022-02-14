
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int caps; } ;
struct TYPE_6__ {TYPE_1__ host; int quirks; int max_clk; } ;
struct ti_sdhci_softc {scalar_t__ mmchs_clk_id; int disable_highspeed; int disable_readonly; int force_card_present; void* mem_res; void* irq_res; scalar_t__ intr_cookie; TYPE_2__ slot; int baseclk_hz; int dev; int gpio; scalar_t__ mmchs_reg_off; scalar_t__ sdhci_reg_off; } ;
typedef int prop ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ,char*,int*,int) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* FUNC_2 (int ,int ,int*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,void*) ;
 scalar_t__ FUNC_6 (int ,void*,int,int *,int ,struct ti_sdhci_softc*,scalar_t__*) ;
 int FUNC_7 (int ,void*,scalar_t__) ;
 struct ti_sdhci_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ,TYPE_2__*) ;
 int FUNC_13 (int ,TYPE_2__*,int ) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int VAR_21 ;

__attribute__((used)) static int
FUNC_18(device_t VAR_22)
{
 struct ti_sdhci_softc *VAR_23 = FUNC_8(VAR_22);
 int VAR_24, VAR_25;
 pcell_t VAR_26;
 phandle_t VAR_27;

 VAR_23->dev = VAR_22;







 VAR_27 = FUNC_10(VAR_22);
 VAR_23->mmchs_clk_id = FUNC_16(VAR_22);
 if (VAR_23->mmchs_clk_id == VAR_4) {
  FUNC_9(VAR_22, "failed to get clock based on hwmods property\n");
 }
 VAR_23->slot.host.caps |= VAR_10;
 if (VAR_23->mmchs_clk_id == VAR_5 || FUNC_1(VAR_27, "ti,dual-volt")) {
  VAR_23->slot.host.caps |= VAR_8 | VAR_9;
 }





 switch (FUNC_15()) {
 default:
  FUNC_11("Unknown OMAP device\n");
 }





 VAR_23->sdhci_reg_off = VAR_23->mmchs_reg_off + VAR_18;


 VAR_24 = 0;
 VAR_23->mem_res = FUNC_2(VAR_22, VAR_20, &VAR_24,
     VAR_12);
 if (!VAR_23->mem_res) {
  FUNC_9(VAR_22, "cannot allocate memory window\n");
  VAR_25 = VAR_1;
  goto fail;
 }

 VAR_24 = 0;
 VAR_23->irq_res = FUNC_2(VAR_22, VAR_19, &VAR_24,
     VAR_12);
 if (!VAR_23->irq_res) {
  FUNC_9(VAR_22, "cannot allocate interrupt\n");
  VAR_25 = VAR_1;
  goto fail;
 }

 if (FUNC_6(VAR_22, VAR_23->irq_res, VAR_3 | VAR_2,
     ((void*)0), VAR_21, VAR_23, &VAR_23->intr_cookie)) {
  FUNC_9(VAR_22, "cannot setup interrupt handler\n");
  VAR_25 = VAR_1;
  goto fail;
 }
 VAR_23->gpio = FUNC_12(VAR_23->dev, &VAR_23->slot);

 if (!FUNC_1(VAR_27, "wp-gpios") && !FUNC_1(VAR_27, "wp-disable"))
  VAR_23->disable_readonly = 1;


 FUNC_17(VAR_22);
 VAR_23->slot.max_clk = VAR_23->baseclk_hz;






 VAR_23->slot.quirks |= VAR_14;





 VAR_23->slot.quirks |= VAR_15;





 VAR_23->slot.quirks |= VAR_16;




 VAR_23->slot.quirks |= VAR_17;




 VAR_23->slot.quirks |= VAR_13;






 FUNC_13(VAR_22, &VAR_23->slot, 0);






 if (FUNC_0(VAR_27, "bus-width", &VAR_26, sizeof(VAR_26)) > 0) {
  VAR_23->slot.host.caps &= ~(VAR_6 |
      VAR_7);
  switch (VAR_26) {
  case 8:
   VAR_23->slot.host.caps |= VAR_7;

  case 4:
   VAR_23->slot.host.caps |= VAR_6;
   break;
  case 1:
   break;
  default:
   FUNC_9(VAR_22, "Bad bus-width value %u\n", VAR_26);
   break;
  }
 }





 VAR_27 = FUNC_10(VAR_22);
 if (FUNC_1(VAR_27, "non-removable"))
  VAR_23->force_card_present = 1;

 FUNC_4(VAR_22);
 FUNC_3(VAR_22);

 FUNC_14(&VAR_23->slot);
 return (0);

fail:
 if (VAR_23->intr_cookie)
  FUNC_7(VAR_22, VAR_23->irq_res, VAR_23->intr_cookie);
 if (VAR_23->irq_res)
  FUNC_5(VAR_22, VAR_19, 0, VAR_23->irq_res);
 if (VAR_23->mem_res)
  FUNC_5(VAR_22, VAR_20, 0, VAR_23->mem_res);

 return (VAR_25);
}
