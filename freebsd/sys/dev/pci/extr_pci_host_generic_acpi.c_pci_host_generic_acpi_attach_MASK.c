
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int mem_rman; int io_rman; TYPE_1__* ranges; scalar_t__ coherent; scalar_t__ ecam; scalar_t__ bus_start; } ;
struct generic_pcie_acpi_softc {TYPE_2__ base; int ap_prt; } ;
typedef scalar_t__ device_t ;
struct TYPE_3__ {scalar_t__ phys_base; scalar_t__ pci_base; scalar_t__ size; int flags; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,char*,scalar_t__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,char*,int) ;
 struct generic_pcie_acpi_softc* FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,char*,...) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_7)
{
 struct generic_pcie_acpi_softc *VAR_8;
 ACPI_HANDLE VAR_9;
 uint64_t VAR_10;
 uint64_t VAR_11;
 uint64_t VAR_12;
 ACPI_STATUS VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_8 = FUNC_7(VAR_7);
 VAR_9 = FUNC_3(VAR_7);


 VAR_13 = FUNC_2(VAR_9, "_BBN", &VAR_8->base.bus_start);
 if (FUNC_0(VAR_13)) {
  FUNC_8(VAR_7, "No _BBN, using start bus 0\n");
  VAR_8->base.bus_start = 0;
 }


 VAR_13 = FUNC_2(VAR_9, "_SEG", &VAR_8->base.ecam);
 if (FUNC_0(VAR_13)) {
  FUNC_8(VAR_7, "No _SEG for PCI Bus, using segment 0\n");
  VAR_8->base.ecam = 0;
 }


 VAR_13 = FUNC_1(VAR_9, "_CRS",
     VAR_6, (void *)VAR_7);
 if (FUNC_0(VAR_13))
  return (VAR_0);


 if (FUNC_0(FUNC_2(VAR_9, "_CCA", &VAR_8->base.coherent)))
  VAR_8->base.coherent = 0;
 if (VAR_5)
  FUNC_8(VAR_7, "Bus is%s cache-coherent\n",
      VAR_8->base.coherent ? "" : " not");


 FUNC_9(VAR_7);
 FUNC_4(VAR_7, &VAR_8->ap_prt);

 VAR_14 = FUNC_10(VAR_7);
 if (VAR_14 != 0)
  return (VAR_14);

 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
  VAR_10 = VAR_8->base.ranges[VAR_15].phys_base;
  VAR_11 = VAR_8->base.ranges[VAR_15].pci_base;
  VAR_12 = VAR_8->base.ranges[VAR_15].size;
  if (VAR_10 == 0 || VAR_12 == 0)
   continue;
  if (VAR_8->base.ranges[VAR_15].flags & VAR_2) {
   VAR_14 = FUNC_12(&VAR_8->base.mem_rman,
      VAR_11, VAR_11 + VAR_12 - 1);
  } else if (VAR_8->base.ranges[VAR_15].flags & VAR_1) {
   VAR_14 = FUNC_12(&VAR_8->base.io_rman,
      VAR_11 + VAR_4,
      VAR_11 + VAR_4 + VAR_12 - 1);
  } else
   continue;
  if (VAR_14) {
   FUNC_8(VAR_7, "rman_manage_region() failed."
      "error = %d\n", VAR_14);
   FUNC_11(&VAR_8->base.mem_rman);
   return (VAR_14);
  }
 }

 FUNC_6(VAR_7, "pci", -1);
 return (FUNC_5(VAR_7));
}
