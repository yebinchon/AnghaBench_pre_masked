
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_slot {int sdma_boundary; int max_clk; int caps; int quirks; } ;
struct sdhci_fdt_softc {int num_slots; struct sdhci_slot* slots; int intrhand; int * irq_res; int sdma_boundary; int max_clk; int caps; int quirks; int ** mem_res; int dev; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ ocd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,int *,int,int *,int ,struct sdhci_fdt_softc*,int *) ;
 int VAR_7 ;
 struct sdhci_fdt_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 TYPE_1__* FUNC_4 (int ,int ) ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,struct sdhci_slot*,int) ;
 int FUNC_7 (struct sdhci_slot*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_9)
{
 struct sdhci_fdt_softc *VAR_10 = FUNC_2(VAR_9);
 struct sdhci_slot *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_10->dev = VAR_9;


 VAR_14 = 0;
 VAR_10->irq_res = FUNC_0(VAR_9, VAR_5, &VAR_14,
     VAR_3);
 if (VAR_10->irq_res == ((void*)0)) {
  FUNC_3(VAR_9, "Can't allocate IRQ\n");
  return (VAR_0);
 }
 VAR_13 = VAR_10->num_slots;
 VAR_10->num_slots = 0;
 for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {
  VAR_11 = &VAR_10->slots[VAR_10->num_slots];


  VAR_14 = 0;
  VAR_10->mem_res[VAR_15] = FUNC_0(VAR_9, VAR_6,
       &VAR_14, VAR_3);
  if (VAR_10->mem_res[VAR_15] == ((void*)0)) {
   FUNC_3(VAR_9,
       "Can't allocate memory for slot %d\n", VAR_15);
   continue;
  }

  VAR_11->quirks = VAR_10->quirks;
  VAR_11->caps = VAR_10->caps;
  VAR_11->max_clk = VAR_10->max_clk;
  VAR_11->sdma_boundary = VAR_10->sdma_boundary;

  if (FUNC_6(VAR_9, VAR_11, VAR_15) != 0)
   continue;

  VAR_10->num_slots++;
 }
 FUNC_3(VAR_9, "%d slot(s) allocated\n", VAR_10->num_slots);


 VAR_12 = FUNC_1(VAR_9, VAR_10->irq_res, VAR_2 | VAR_1,
     ((void*)0), VAR_8, VAR_10, &VAR_10->intrhand);
 if (VAR_12) {
  FUNC_3(VAR_9, "Cannot setup IRQ\n");
  return (VAR_12);
 }


 for (VAR_15 = 0; VAR_15 < VAR_10->num_slots; VAR_15++)
  FUNC_7(&VAR_10->slots[VAR_15]);

 return (0);
}
