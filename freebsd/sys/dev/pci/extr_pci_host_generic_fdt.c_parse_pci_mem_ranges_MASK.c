
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct generic_pcie_core_softc {int nranges; TYPE_1__* ranges; } ;
typedef int size_cells ;
typedef int phandle_t ;
typedef int pci_addr_cells ;
typedef int pcell_t ;
typedef int parent_addr_cells ;
typedef int device_t ;
typedef int cell_t ;
struct TYPE_2__ {int pci_base; int phys_base; int size; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int*,int ) ;
 int* FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_10, struct generic_pcie_core_softc *VAR_11)
{
 pcell_t VAR_12, VAR_13;
 pcell_t VAR_14, VAR_15;
 cell_t *VAR_16;
 int VAR_17;
 phandle_t VAR_18;
 int VAR_19, VAR_20, VAR_21;
 int VAR_22;

 VAR_18 = FUNC_6(VAR_10);

 FUNC_0(VAR_18, "#address-cells", &VAR_12,
     sizeof(VAR_12));
 FUNC_0(VAR_18, "#size-cells", &VAR_15,
     sizeof(VAR_15));
 FUNC_0(FUNC_2(VAR_18), "#address-cells", &VAR_13,
     sizeof(VAR_13));

 if (VAR_13 > 2 || VAR_12 != 3 || VAR_15 > 2) {
  FUNC_3(VAR_10,
      "Unexpected number of address or size cells in FDT\n");
  return (VAR_0);
 }

 VAR_17 = FUNC_1(VAR_18, "ranges");
 VAR_11->nranges = VAR_17 / sizeof(cell_t) /
     (VAR_13 + VAR_12 + VAR_15);
 VAR_16 = FUNC_5(VAR_17, VAR_4, VAR_5);
 FUNC_0(VAR_18, "ranges", VAR_16, VAR_17);

 for (VAR_19 = 0, VAR_20 = 0; VAR_19 < VAR_11->nranges; VAR_19++) {
  VAR_14 = (VAR_16[VAR_20++] >> VAR_8) & VAR_7;

  if (VAR_14 == VAR_6) {
   VAR_11->ranges[VAR_19].flags |= VAR_1;
  } else {
   VAR_11->ranges[VAR_19].flags |= VAR_2;
  }

  VAR_11->ranges[VAR_19].pci_base = 0;
  for (VAR_21 = 0; VAR_21 < (VAR_12 - 1); VAR_21++) {
   VAR_11->ranges[VAR_19].pci_base <<= 32;
   VAR_11->ranges[VAR_19].pci_base |= VAR_16[VAR_20++];
  }
  VAR_11->ranges[VAR_19].phys_base = 0;
  for (VAR_21 = 0; VAR_21 < VAR_13; VAR_21++) {
   VAR_11->ranges[VAR_19].phys_base <<= 32;
   VAR_11->ranges[VAR_19].phys_base |= VAR_16[VAR_20++];
  }
  VAR_11->ranges[VAR_19].size = 0;
  for (VAR_21 = 0; VAR_21 < VAR_15; VAR_21++) {
   VAR_11->ranges[VAR_19].size <<= 32;
   VAR_11->ranges[VAR_19].size |= VAR_16[VAR_20++];
  }
 }

 for (; VAR_19 < VAR_3; VAR_19++) {

  VAR_11->ranges[VAR_19].pci_base = 0;
  VAR_11->ranges[VAR_19].phys_base = 0;
  VAR_11->ranges[VAR_19].size = 0;
 }

 if (VAR_9) {
  for (VAR_22 = 0; VAR_22 < VAR_3; VAR_22++) {
   FUNC_3(VAR_10,
       "\tPCI addr: 0x%jx, CPU addr: 0x%jx, Size: 0x%jx\n",
       VAR_11->ranges[VAR_22].pci_base,
       VAR_11->ranges[VAR_22].phys_base,
       VAR_11->ranges[VAR_22].size);
  }
 }

 FUNC_4(VAR_16, VAR_4);
 return (0);
}
