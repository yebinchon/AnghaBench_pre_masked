
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct al_msix_softc {int irq_min; int irq_max; scalar_t__ irq_count; int irq_alloc; int msi_mtx; int * gic_dev; int * res; scalar_t__ base_addr; } ;
typedef scalar_t__ phandle_t ;
typedef int icells ;
typedef int * device_t ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (intptr_t,int *) ;
 int FUNC_2 (scalar_t__,char*,int,void**) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*,int*,int) ;
 intptr_t FUNC_5 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_6 (int *,int ,int*,int ) ;
 int FUNC_7 (int *) ;
 struct al_msix_softc* FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,...) ;
 scalar_t__ FUNC_10 (int *,intptr_t) ;
 int FUNC_11 (int *,char*,int *,int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (char*,int ,scalar_t__,int,int ,int) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_10)
{
 struct al_msix_softc *VAR_11;
 device_t VAR_12;
 phandle_t VAR_13;
 phandle_t VAR_14;
 intptr_t VAR_15;
 int VAR_16[VAR_2];
 int VAR_17, VAR_18, VAR_19;
 uint32_t VAR_20, *VAR_21;

 VAR_11 = FUNC_8(VAR_10);

 VAR_14 = FUNC_13(VAR_10);
 VAR_15 = FUNC_5(VAR_14);
 FUNC_1(VAR_15, VAR_10);

 VAR_19 = 0;
 VAR_11->res = FUNC_6(VAR_10, VAR_9, &VAR_19, VAR_8);
 if (VAR_11->res == ((void*)0)) {
  FUNC_9(VAR_10, "Failed to allocate resource\n");
  return (VAR_1);
 }

 VAR_11->base_addr = (bus_addr_t)FUNC_14(VAR_11->res);


 if (FUNC_10(VAR_10, VAR_15) != 0) {
  FUNC_9(VAR_10, "could not register MSI-X controller\n");
  return (VAR_1);
 }
 else
  FUNC_9(VAR_10, "MSI-X controller registered\n");


 VAR_13 = FUNC_12(VAR_14);
 if (VAR_13 == 0) {
  FUNC_9(VAR_10, "No interrupt-parrent found. "
    "Error in DTB\n");
  return (VAR_1);
 } else {

  if (FUNC_4(FUNC_3(VAR_13),
      "#interrupt-cells", &VAR_20, sizeof(VAR_20)) == -1) {
   FUNC_9(VAR_10, "DTB: Missing #interrupt-cells "
       "property in GIC node\n");
   return (VAR_1);
  }
 }

 VAR_12 = FUNC_0(VAR_13);
 if (VAR_12 == ((void*)0)) {
  FUNC_9(VAR_10, "Cannot find GIC device\n");
  return (VAR_1);
 }
 VAR_11->gic_dev = VAR_12;


 VAR_17 = FUNC_2(VAR_14, "interrupts", sizeof(*VAR_21),
     (void **)&VAR_21);
 if (VAR_17 == 0) {
  FUNC_9(VAR_10, "Cannot read interrupts prop from DTB\n");
  return (VAR_1);
 } else if ((VAR_17 / VAR_20) != VAR_2) {

  FUNC_9(VAR_10, "Unexpected count of interrupts "
    "in DTB node\n");
  return (VAR_0);
 }


 for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++)
  VAR_16[VAR_18] = VAR_21[(VAR_18 * VAR_20) + VAR_3];

 VAR_11->irq_min = VAR_16[0];
 VAR_11->irq_max = VAR_16[1];
 VAR_11->irq_count = (VAR_11->irq_max - VAR_11->irq_min + 1);

 if (VAR_11->irq_count > VAR_4) {
  FUNC_9(VAR_10, "Available MSI-X count exceeds buffer size."
    " Capping to %d\n", VAR_4);
  VAR_11->irq_count = VAR_4;
 }

 FUNC_11(&VAR_11->msi_mtx, "msi_mtx", ((void*)0), VAR_5);

 VAR_11->irq_alloc = FUNC_15("Alpine MSI-X IRQs", 0, VAR_11->irq_count,
     1, 0, VAR_6 | VAR_7);

 FUNC_9(VAR_10, "MSI-X SPI IRQ %d-%d\n", VAR_11->irq_min, VAR_11->irq_max);

 return (FUNC_7(VAR_10));
}
