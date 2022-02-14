
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int ecam; scalar_t__ coherent; int bus_end; int mem_rman; int io_rman; TYPE_1__* ranges; scalar_t__ bus_start; } ;
struct generic_pcie_fdt_softc {int pci_iinfo; TYPE_2__ base; } ;
typedef int phandle_t ;
typedef int device_t ;
typedef int cell_t ;
struct TYPE_3__ {scalar_t__ phys_base; scalar_t__ pci_base; scalar_t__ size; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 struct generic_pcie_fdt_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int) ;
 scalar_t__ FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,scalar_t__,scalar_t__) ;

int
FUNC_12(device_t VAR_6)
{
 struct generic_pcie_fdt_softc *VAR_7;
 uint64_t VAR_8;
 uint64_t VAR_9;
 uint64_t VAR_10;
 phandle_t VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_7 = FUNC_3(VAR_6);


 if (VAR_5)
  FUNC_4(VAR_6, "parsing FDT for ECAM%d:\n", VAR_7->base.ecam);
 if (FUNC_8(VAR_6, &VAR_7->base))
  return (VAR_0);


 if (FUNC_5(VAR_6) != 0)
  return (VAR_0);

 VAR_11 = FUNC_6(VAR_6);
 if (VAR_7->base.coherent == 0) {
  VAR_7->base.coherent = FUNC_0(VAR_11, "dma-coherent");
 }
 if (VAR_5)
  FUNC_4(VAR_6, "Bus is%s cache-coherent\n",
      VAR_7->base.coherent ? "" : " not");


 VAR_7->base.bus_start = 0;
 VAR_7->base.bus_end = 0xFF;
 VAR_12 = FUNC_9(VAR_6);
 if (VAR_12 != 0)
  return (VAR_12);

 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  VAR_8 = VAR_7->base.ranges[VAR_13].phys_base;
  VAR_9 = VAR_7->base.ranges[VAR_13].pci_base;
  VAR_10 = VAR_7->base.ranges[VAR_13].size;
  if (VAR_8 == 0 || VAR_10 == 0)
   continue;
  if (VAR_7->base.ranges[VAR_13].flags & VAR_2) {
   VAR_12 = FUNC_11(&VAR_7->base.mem_rman,
       VAR_9, VAR_9 + VAR_10 - 1);
  } else if (VAR_7->base.ranges[VAR_13].flags & VAR_1) {
   VAR_12 = FUNC_11(&VAR_7->base.io_rman,
       VAR_9 + VAR_4,
       VAR_9 + VAR_4 + VAR_10 - 1);
  } else
   continue;
  if (VAR_12) {
   FUNC_4(VAR_6, "rman_manage_region() failed."
      "error = %d\n", VAR_12);
   FUNC_10(&VAR_7->base.mem_rman);
   return (VAR_12);
  }
 }

 FUNC_7(VAR_11, &VAR_7->pci_iinfo, sizeof(cell_t));

 FUNC_2(VAR_6, "pci", -1);
 return (FUNC_1(VAR_6));
}
