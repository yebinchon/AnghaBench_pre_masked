
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ u_int32_t ;
struct TYPE_4__ {char* rm_descr; void* rm_type; } ;
struct ofw_pci_softc {int sc_initialized; int sc_quirks; int sc_nrange; int sc_range_mask; int sc_have_pmem; TYPE_1__ sc_pmem_rman; TYPE_1__ sc_mem_rman; TYPE_1__ sc_io_rman; struct ofw_pci_range* sc_range; int sc_pci_iinfo; scalar_t__ sc_bus; scalar_t__ sc_node; int sc_dev; struct ofw_pci_range* sc_cell_info; int sc_pci_domain; } ;
struct ofw_pci_range {int pci_hi; scalar_t__ size; scalar_t__ pci; } ;
struct ofw_pci_cell_info {int pci_hi; scalar_t__ size; scalar_t__ pci; } ;
typedef scalar_t__ phandle_t ;
typedef int device_t ;
typedef int cell_t ;
typedef int busrange ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,char*,scalar_t__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 void* VAR_7 ;
 struct ofw_pci_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct ofw_pci_range*,int ) ;
 void* FUNC_8 (int,int ,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,int *,int) ;
 int FUNC_11 (scalar_t__,struct ofw_pci_range*) ;
 void* FUNC_12 (scalar_t__,struct ofw_pci_range*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,scalar_t__,scalar_t__) ;

int
FUNC_16(device_t VAR_8)
{
 struct ofw_pci_softc *VAR_9;
 phandle_t VAR_10;
 u_int32_t VAR_11[2];
 struct ofw_pci_range *VAR_12;
 int VAR_13, VAR_14;
 struct ofw_pci_cell_info *VAR_15;

 VAR_10 = FUNC_9(VAR_8);
 VAR_9 = FUNC_4(VAR_8);
 VAR_9->sc_initialized = 1;
 VAR_9->sc_range = ((void*)0);
 VAR_9->sc_pci_domain = FUNC_5(VAR_8);

 VAR_15 = (struct ofw_pci_cell_info *)FUNC_8(sizeof(*VAR_15),
     VAR_1, VAR_2 | VAR_3);

 VAR_9->sc_cell_info = VAR_15;

 if (FUNC_2(VAR_10, "bus-range", VAR_11, sizeof(VAR_11)) != 8)
  VAR_11[0] = 0;

 VAR_9->sc_dev = VAR_8;
 VAR_9->sc_node = VAR_10;
 VAR_9->sc_bus = VAR_11[0];

 if (VAR_9->sc_quirks & VAR_6) {
  phandle_t VAR_16;
  int VAR_17, VAR_18;

  VAR_9->sc_nrange = 0;
  for (VAR_16 = FUNC_1(VAR_10); VAR_16 != 0; VAR_16 = FUNC_3(VAR_16)) {
   VAR_17 = FUNC_12(VAR_16, VAR_15);
   if (VAR_17 > 0)
    VAR_9->sc_nrange += VAR_17;
  }
  if (VAR_9->sc_nrange == 0) {
   VAR_14 = VAR_0;
   goto out;
  }
  VAR_9->sc_range = FUNC_8(VAR_9->sc_nrange * sizeof(VAR_9->sc_range[0]),
      VAR_1, VAR_2);
  VAR_18 = 0;
  for (VAR_16 = FUNC_1(VAR_10); VAR_16 != 0; VAR_16 = FUNC_3(VAR_16)) {
   VAR_17 = FUNC_11(VAR_16, &VAR_9->sc_range[VAR_18]);
   if (VAR_17 > 0)
    VAR_18 += VAR_17;
  }
  FUNC_0(VAR_18 == VAR_9->sc_nrange, ("range count mismatch"));
 } else {
  VAR_9->sc_nrange = FUNC_12(VAR_10, VAR_15);
  if (VAR_9->sc_nrange <= 0) {
   FUNC_6(VAR_8, "could not getranges\n");
   VAR_14 = VAR_0;
   goto out;
  }
  VAR_9->sc_range = FUNC_8(VAR_9->sc_nrange * sizeof(VAR_9->sc_range[0]),
      VAR_1, VAR_2);
  FUNC_11(VAR_10, VAR_9->sc_range);
 }

 VAR_9->sc_io_rman.rm_type = VAR_7;
 VAR_9->sc_io_rman.rm_descr = "PCI I/O Ports";
 VAR_14 = FUNC_14(&VAR_9->sc_io_rman);
 if (VAR_14 != 0) {
  FUNC_6(VAR_8, "rman_init() failed. error = %d\n", VAR_14);
  goto out;
 }

 VAR_9->sc_mem_rman.rm_type = VAR_7;
 VAR_9->sc_mem_rman.rm_descr = "PCI Non Prefetchable Memory";
 VAR_14 = FUNC_14(&VAR_9->sc_mem_rman);
 if (VAR_14 != 0) {
  FUNC_6(VAR_8, "rman_init() failed. error = %d\n", VAR_14);
  goto out;
 }

 VAR_9->sc_pmem_rman.rm_type = VAR_7;
 VAR_9->sc_pmem_rman.rm_descr = "PCI Prefetchable Memory";
 VAR_14 = FUNC_14(&VAR_9->sc_pmem_rman);
 if (VAR_14 != 0) {
  FUNC_6(VAR_8, "rman_init() failed. error = %d\n", VAR_14);
  goto out;
 }

 for (VAR_13 = 0; VAR_13 < VAR_9->sc_nrange; VAR_13++) {
  VAR_14 = 0;
  VAR_12 = VAR_9->sc_range + VAR_13;

  if (VAR_9->sc_range_mask & ((uint64_t)1 << VAR_13))
   continue;
  switch (VAR_12->pci_hi & VAR_5) {
  case 131:
   break;
  case 130:
   VAR_14 = FUNC_15(&VAR_9->sc_io_rman, VAR_12->pci,
       VAR_12->pci + VAR_12->size - 1);
   break;
  case 129:
  case 128:
   if (VAR_12->pci_hi & VAR_4) {
    VAR_9->sc_have_pmem = 1;
    VAR_14 = FUNC_15(&VAR_9->sc_pmem_rman,
        VAR_12->pci, VAR_12->pci + VAR_12->size - 1);
   } else {
    VAR_14 = FUNC_15(&VAR_9->sc_mem_rman,
        VAR_12->pci, VAR_12->pci + VAR_12->size - 1);
   }
   break;
  }

  if (VAR_14 != 0) {
   FUNC_6(VAR_8,
       "rman_manage_region(%x, %#jx, %#jx) failed. "
       "error = %d\n", VAR_12->pci_hi &
       VAR_5, VAR_12->pci,
       VAR_12->pci + VAR_12->size - 1, VAR_14);
   goto out;
  }
 }

 FUNC_10(VAR_10, &VAR_9->sc_pci_iinfo, sizeof(cell_t));
 return (0);

out:
 FUNC_7(VAR_15, VAR_1);
 FUNC_7(VAR_9->sc_range, VAR_1);
 FUNC_13(&VAR_9->sc_io_rman);
 FUNC_13(&VAR_9->sc_mem_rman);
 FUNC_13(&VAR_9->sc_pmem_rman);

 return (VAR_14);
}
