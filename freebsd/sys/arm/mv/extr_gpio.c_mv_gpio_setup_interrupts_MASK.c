
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_gpio_softc {int irq_num; int* irq_rid; int offset; int pin_num; int* debounce_counters; struct callout** debounce_callouts; int bsh; int bst; int dev; int * irq_res; int mutex; int * ih_cookie; } ;
struct callout {int dummy; } ;
typedef scalar_t__ phandle_t ;
typedef int pcell_t ;
typedef int irq_cells ;
typedef int driver_filter_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,int*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,int ,int*,int ) ;
 int FUNC_4 (int ,int ,int,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int *,int *,struct mv_gpio_softc*,int *) ;
 int FUNC_6 (int ,int ,scalar_t__,int ) ;
 int FUNC_7 (int ,char*,...) ;
 scalar_t__ FUNC_8 (int,int ,int) ;
 int FUNC_9 (int *) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_10 (scalar_t__) ;

__attribute__((used)) static int
FUNC_11(struct mv_gpio_softc *VAR_12, phandle_t VAR_13)
{
 phandle_t VAR_14;
 pcell_t VAR_15;
 int VAR_16, VAR_17;


 VAR_14 = FUNC_10(VAR_13);
 if (VAR_14 == 0) {
  FUNC_7(VAR_12->dev, "No interrupt-parrent found. "
    "Error in DTB\n");
  return (VAR_1);
 } else {

  if (FUNC_2(FUNC_1(VAR_14),
      "#interrupt-cells", &VAR_15, sizeof(VAR_15)) == -1) {
   FUNC_7(VAR_12->dev, "DTB: Missing #interrupt-cells "
       "property in interrupt parent node\n");
   return (VAR_1);
  }
 }

 VAR_17 = FUNC_0(VAR_13, "interrupts");
 if (VAR_17 != -1) {
  VAR_17 = VAR_17 / sizeof(pcell_t);
  VAR_17 = VAR_17 / VAR_15;
  VAR_12->irq_num = VAR_17;
  FUNC_7(VAR_12->dev, "%d IRQs available\n", VAR_12->irq_num);
 } else {
  FUNC_7(VAR_12->dev, "ERROR: no interrupts entry found!\n");
  return (VAR_1);
 }

 for (VAR_16 = 0; VAR_16 < VAR_12->irq_num; VAR_16++) {
  VAR_12->irq_rid[VAR_16] = VAR_16;
  VAR_12->irq_res[VAR_16] = FUNC_3(VAR_12->dev, VAR_10,
   &VAR_12->irq_rid[VAR_16], VAR_9);
  if (!VAR_12->irq_res[VAR_16]) {
   FUNC_9(&VAR_12->mutex);
   FUNC_7(VAR_12->dev,
       "could not allocate gpio%d interrupt\n", VAR_16+1);
   return (VAR_1);
  }
 }

 FUNC_7(VAR_12->dev, "Disable interrupts (offset = %x + EDGE(0x18)\n", VAR_12->offset);

 FUNC_6(VAR_12->bst, VAR_12->bsh, VAR_12->offset + VAR_3, 0);
 FUNC_7(VAR_12->dev, "Disable interrupts (offset = %x + LEV(0x1C))\n", VAR_12->offset);
 FUNC_6(VAR_12->bst, VAR_12->bsh, VAR_12->offset + VAR_4, 0);

 for (VAR_16 = 0; VAR_16 < VAR_12->irq_num; VAR_16++) {
  FUNC_7(VAR_12->dev, "Setup intr %d\n", VAR_16);
  if (FUNC_5(VAR_12->dev, VAR_12->irq_res[VAR_16],
      VAR_5,
      (driver_filter_t *)VAR_11, ((void*)0),
      VAR_12, &VAR_12->ih_cookie[VAR_16]) != 0) {
   FUNC_9(&VAR_12->mutex);
   FUNC_4(VAR_12->dev, VAR_10,
    VAR_12->irq_rid[VAR_16], VAR_12->irq_res[VAR_16]);
   FUNC_7(VAR_12->dev, "could not set up intr %d\n", VAR_16);
   return (VAR_1);
  }
 }


 FUNC_7(VAR_12->dev, "Clear int status (offset = %x)\n", VAR_12->offset);
 FUNC_6(VAR_12->bst, VAR_12->bsh, VAR_12->offset + VAR_2, 0);

 VAR_12->debounce_callouts = (struct callout **)FUNC_8(VAR_12->pin_num *
     sizeof(struct callout *), VAR_6, VAR_7 | VAR_8);
 if (VAR_12->debounce_callouts == ((void*)0))
  return (VAR_0);

 VAR_12->debounce_counters = (int *)FUNC_8(VAR_12->pin_num * sizeof(int),
     VAR_6, VAR_7);
 if (VAR_12->debounce_counters == ((void*)0))
  return (VAR_0);

 return (0);
}
