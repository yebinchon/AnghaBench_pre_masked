
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int max_clk; int quirks; } ;
struct fsl_sdhci_softc {scalar_t__ hwtype; int slot_init_done; TYPE_1__ slot; int gpio; int baseclk_hz; int intr_cookie; void* irq_res; void* mem_res; int r1bfix_callout; int dev; } ;
typedef int phandle_t ;
typedef int device_t ;
struct TYPE_6__ {scalar_t__ ocd_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (struct fsl_sdhci_softc*,int ) ;
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
 int FUNC_2 (struct fsl_sdhci_softc*,int ,int) ;
 void* FUNC_3 (int ,int ,int*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,void*,int,int *,int ,struct fsl_sdhci_softc*,int *) ;
 int FUNC_7 (int *,int) ;
 int VAR_14 ;
 struct fsl_sdhci_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_15 ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ,char*) ;
 TYPE_4__* FUNC_15 (int ,int ) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int ,TYPE_1__*) ;
 int FUNC_18 (int ,TYPE_1__*,int ) ;
 int FUNC_19 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_20(device_t VAR_16)
{
 struct fsl_sdhci_softc *VAR_17 = FUNC_8(VAR_16);
 int VAR_18, VAR_19;





 VAR_17->dev = VAR_16;

 FUNC_7(&VAR_17->r1bfix_callout, 1);

 VAR_17->hwtype = FUNC_15(VAR_16, VAR_14)->ocd_data;
 if (VAR_17->hwtype == VAR_1)
  FUNC_16("Impossible: not compatible in fsl_sdhci_attach()");

 VAR_18 = 0;
 VAR_17->mem_res = FUNC_3(VAR_16, VAR_13, &VAR_18,
     VAR_4);
 if (!VAR_17->mem_res) {
  FUNC_9(VAR_16, "cannot allocate memory window\n");
  VAR_19 = VAR_0;
  goto fail;
 }

 VAR_18 = 0;
 VAR_17->irq_res = FUNC_3(VAR_16, VAR_12, &VAR_18,
     VAR_4);
 if (!VAR_17->irq_res) {
  FUNC_9(VAR_16, "cannot allocate interrupt\n");
  VAR_19 = VAR_0;
  goto fail;
 }

 if (FUNC_6(VAR_16, VAR_17->irq_res, VAR_3 | VAR_2,
     ((void*)0), VAR_15, VAR_17, &VAR_17->intr_cookie)) {
  FUNC_9(VAR_16, "cannot setup interrupt handler\n");
  VAR_19 = VAR_0;
  goto fail;
 }

 VAR_17->slot.quirks |= VAR_6;




 VAR_17->slot.quirks |= VAR_5;
 if (FUNC_14(VAR_16, "fsl,p1022-esdhc"))
  FUNC_2(VAR_17, VAR_11, 0x10801080);
 else
  FUNC_2(VAR_17, VAR_11, 0x08800880);
 VAR_17->baseclk_hz = FUNC_12();

 VAR_17->slot.max_clk = VAR_17->baseclk_hz;





 VAR_17->gpio = FUNC_17(VAR_16, &VAR_17->slot);
 FUNC_18(VAR_16, &VAR_17->slot, 0);
 VAR_17->slot_init_done = 1;

 FUNC_5(VAR_16);
 FUNC_4(VAR_16);

 FUNC_19(&VAR_17->slot);

 return (0);

fail:
 FUNC_10(VAR_16);
 return (VAR_19);
}
