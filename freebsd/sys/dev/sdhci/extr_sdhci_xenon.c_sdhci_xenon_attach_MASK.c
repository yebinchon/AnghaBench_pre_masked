
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sdhci_xenon_softc {int slot_id; struct sdhci_slot* slot; int * mem_res; int * irq_res; int intrhand; int gpio; int max_clk; int caps; int quirks; int node; int dev; } ;
struct sdhci_slot {int max_clk; int caps; int quirks; int opt; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 void* FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ,int *,int,int *,int ,struct sdhci_xenon_softc*,int *) ;
 int FUNC_5 (int *,int ,int) ;
 struct sdhci_xenon_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct sdhci_slot*,int ) ;
 struct sdhci_slot* FUNC_9 (int,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,struct sdhci_slot*) ;
 scalar_t__ FUNC_12 (int ,struct sdhci_slot*,int ) ;
 int FUNC_13 (struct sdhci_slot*) ;
 int VAR_17 ;

__attribute__((used)) static int
FUNC_14(device_t VAR_18)
{
 struct sdhci_xenon_softc *VAR_19 = FUNC_6(VAR_18);
 struct sdhci_slot *VAR_20;
 int VAR_21, VAR_22;
 uint32_t VAR_23;

 VAR_19->dev = VAR_18;


 VAR_22 = 0;
 VAR_19->irq_res = FUNC_1(VAR_18, VAR_9, &VAR_22,
     VAR_7);
 if (VAR_19->irq_res == ((void*)0)) {
  FUNC_7(VAR_18, "Can't allocate IRQ\n");
  return (VAR_0);
 }


 VAR_22 = 0;
 VAR_19->mem_res = FUNC_1(VAR_18, VAR_10,
     &VAR_22, VAR_7);
 if (VAR_19->mem_res == ((void*)0)) {
  FUNC_3(VAR_18, VAR_9,
      FUNC_10(VAR_19->irq_res), VAR_19->irq_res);
  FUNC_7(VAR_18, "Can't allocate memory for slot\n");
  return (VAR_0);
 }

 VAR_20 = FUNC_9(sizeof(*VAR_20), VAR_4, VAR_6 | VAR_5);


 if (FUNC_0(VAR_19->node, "non-removable")) {
  VAR_20->opt |= VAR_8;
  if (VAR_16)
   FUNC_7(VAR_18, "Non-removable media\n");
 }

 VAR_20->quirks = VAR_19->quirks;
 VAR_20->caps = VAR_19->caps;
 VAR_20->max_clk = VAR_19->max_clk;
 VAR_19->slot = VAR_20;





 VAR_19->gpio = FUNC_11(VAR_18, VAR_20);

 if (FUNC_12(VAR_18, VAR_19->slot, 0))
  goto fail;


 VAR_21 = FUNC_4(VAR_18, VAR_19->irq_res, VAR_3 | VAR_2,
     ((void*)0), VAR_17, VAR_19, &VAR_19->intrhand);
 if (VAR_21) {
  FUNC_7(VAR_18, "Cannot setup IRQ\n");
  goto fail;
 }


 VAR_23 = FUNC_2(VAR_19->mem_res, VAR_15);
 VAR_23 |= VAR_11;
 FUNC_5(VAR_19->mem_res, VAR_15, VAR_23);


 VAR_23 |= (1 << VAR_19->slot_id);
 FUNC_5(VAR_19->mem_res, VAR_15, VAR_23);


 VAR_23 = FUNC_2(VAR_19->mem_res, VAR_14);
 VAR_23 |= (1 << VAR_19->slot_id);
 FUNC_5(VAR_19->mem_res, VAR_14, VAR_23);


 VAR_23 &= ~VAR_11;
 FUNC_5(VAR_19->mem_res, VAR_15, VAR_23);


 VAR_23 = FUNC_2(VAR_19->mem_res, VAR_15);
 VAR_23 &= ~(1 << (VAR_13 + VAR_19->slot_id));
 FUNC_5(VAR_19->mem_res, VAR_15, VAR_23);


 VAR_23 = FUNC_2(VAR_19->mem_res, VAR_14);
 VAR_23 |= VAR_12;
 FUNC_5(VAR_19->mem_res, VAR_14, VAR_23);


 FUNC_13(VAR_19->slot);

 return (0);

fail:
 FUNC_3(VAR_18, VAR_9, FUNC_10(VAR_19->irq_res),
     VAR_19->irq_res);
 FUNC_3(VAR_18, VAR_10, FUNC_10(VAR_19->mem_res),
     VAR_19->mem_res);
 FUNC_8(VAR_19->slot, VAR_4);
 VAR_19->slot = ((void*)0);

 return (VAR_1);
}
