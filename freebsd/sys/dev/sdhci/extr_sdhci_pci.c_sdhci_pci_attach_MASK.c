
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct sdhci_slot {int quirks; } ;
struct sdhci_pci_softc {int quirks; size_t num_slots; struct sdhci_slot* slots; int intrhand; int * irq_res; int ** mem_res; } ;
typedef int device_t ;
struct TYPE_2__ {int model; int subvendor; int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_3 (int ,int ,int*,int) ;
 int FUNC_4 (int ,int *,int,int *,int ,struct sdhci_pci_softc*,int *) ;
 struct sdhci_pci_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__ FUNC_7 (int ,int*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int ) ;
 TYPE_1__* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_14 (int ,struct sdhci_slot*,int) ;
 int FUNC_15 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_16 (struct sdhci_slot*) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_15)
{
 struct sdhci_pci_softc *VAR_16 = FUNC_5(VAR_15);
 struct sdhci_slot *VAR_17;
 uint32_t VAR_18;
 uint16_t VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;

 VAR_18 = (uint32_t)FUNC_9(VAR_15) << 16;
 VAR_18 |= (uint32_t)FUNC_11(VAR_15) & 0x0000ffff;
 VAR_19 = FUNC_10(VAR_15);

 for (VAR_24 = 0; VAR_10[VAR_24].model != 0; VAR_24++) {
  if (VAR_10[VAR_24].model == VAR_18 &&
      (VAR_10[VAR_24].subvendor == 0xffff ||
      VAR_10[VAR_24].subvendor == VAR_19)) {
   VAR_16->quirks = VAR_10[VAR_24].quirks;
   break;
  }
 }
 VAR_16->quirks &= ~VAR_13;
 VAR_16->quirks |= VAR_14;


 if (VAR_16->quirks & VAR_7)
  FUNC_15(VAR_15);

 VAR_23 = FUNC_12(VAR_15, VAR_4, 1);
 VAR_20 = FUNC_1(VAR_23);
 VAR_23 = FUNC_2(VAR_23);
 if (VAR_23 > 6 || VAR_20 > 5) {
  FUNC_6(VAR_15, "Incorrect slots information (%d, %d).\n",
      VAR_23, VAR_20);
  return (VAR_0);
 }

 VAR_24 = 1;
 VAR_22 = 0;
 if (VAR_11 != 0 && FUNC_7(VAR_15, &VAR_24) == 0)
  VAR_22 = 1;
 VAR_16->irq_res = FUNC_3(VAR_15, VAR_8, &VAR_22,
  VAR_5 | (VAR_22 != 0 ? 0 : VAR_6));
 if (VAR_16->irq_res == ((void*)0)) {
  FUNC_6(VAR_15, "Can't allocate IRQ\n");
  FUNC_13(VAR_15);
  return (VAR_1);
 }

 for (VAR_24 = 0; VAR_24 < VAR_23; VAR_24++) {
  VAR_17 = &VAR_16->slots[VAR_16->num_slots];


  VAR_22 = FUNC_0(VAR_20 + VAR_24);
  VAR_16->mem_res[VAR_24] = FUNC_3(VAR_15, VAR_9,
      &VAR_22, VAR_5);
  if (VAR_16->mem_res[VAR_24] == ((void*)0)) {
   FUNC_6(VAR_15,
       "Can't allocate memory for slot %d\n", VAR_24);
   continue;
  }

  VAR_17->quirks = VAR_16->quirks;

  if (FUNC_14(VAR_15, VAR_17, VAR_24) != 0)
   continue;

  VAR_16->num_slots++;
 }
 FUNC_6(VAR_15, "%d slot(s) allocated\n", VAR_16->num_slots);

 VAR_21 = FUNC_4(VAR_15, VAR_16->irq_res, VAR_3 | VAR_2,
     ((void*)0), VAR_12, VAR_16, &VAR_16->intrhand);
 if (VAR_21)
  FUNC_6(VAR_15, "Can't setup IRQ\n");
 FUNC_8(VAR_15);

 for (VAR_24 = 0; VAR_24 < VAR_16->num_slots; VAR_24++) {
  FUNC_16(&VAR_16->slots[VAR_24]);
 }

 return (0);
}
