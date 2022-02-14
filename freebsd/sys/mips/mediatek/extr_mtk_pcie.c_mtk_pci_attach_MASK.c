
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* rm_descr; void* rm_type; } ;
struct mtk_pci_softc {int addr_mask; scalar_t__ socid; int sc_num_irq; int ** pci_res; TYPE_1__ sc_mem_rman; TYPE_1__ sc_io_rman; TYPE_1__ sc_irq_rman; int ** pci_intrhand; scalar_t__ sc_irq_end; scalar_t__ sc_irq_start; scalar_t__ sc_io_size; scalar_t__ sc_io_base; scalar_t__ sc_mem_size; scalar_t__ sc_mem_base; int sc_dev; } ;
struct mtk_pci_range {scalar_t__ len; scalar_t__ base; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 intptr_t FUNC_0 (int ) ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int ,int ,int*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int *) ;
 scalar_t__ FUNC_4 (int ,int *,int ,int ,int *,struct mtk_pci_softc*,int **) ;
 int FUNC_5 (int ,int *,int *) ;
 int * FUNC_6 (int ,char*,int) ;
 struct mtk_pci_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int * FUNC_9 (int ,intptr_t) ;
 int FUNC_10 (int ,intptr_t) ;
 struct mtk_pci_softc* VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_11 (int ,struct mtk_pci_range*,struct mtk_pci_range*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 scalar_t__ FUNC_17 (TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_11)
{
 struct mtk_pci_softc *VAR_12 = FUNC_7(VAR_11);
 struct mtk_pci_range VAR_13, VAR_14;
 phandle_t VAR_15;
 intptr_t VAR_16;
 int VAR_17, VAR_18;

 VAR_12->sc_dev = VAR_11;
 VAR_9 = VAR_12;
 VAR_12->addr_mask = 0xffffffff;


 VAR_18 = 0;
 VAR_12->pci_res[0] = FUNC_1(VAR_11, VAR_8, &VAR_18,
       VAR_5);
 if (VAR_12->pci_res[0] == ((void*)0)) {
  FUNC_8(VAR_11, "could not allocate memory resource\n");
  return (VAR_0);
 }


 if (VAR_12->socid == VAR_4)
  VAR_12->sc_num_irq = 3;
 else {
  VAR_12->sc_num_irq = 1;
  VAR_12->pci_res[2] = VAR_12->pci_res[3] = ((void*)0);
  VAR_12->pci_intrhand[1] = VAR_12->pci_intrhand[2] = ((void*)0);
 }


 for (VAR_17 = 1; VAR_17 <= VAR_12->sc_num_irq ; VAR_17++) {
  VAR_18 = VAR_17 - 1;
  VAR_12->pci_res[VAR_17] = FUNC_1(VAR_11, VAR_7, &VAR_18,
         VAR_5);
  if (VAR_12->pci_res[VAR_17] == ((void*)0)) {
   FUNC_8(VAR_11, "could not allocate interrupt "
       "resource %d\n", VAR_18);
   goto cleanup_res;
  }
 }


 VAR_15 = FUNC_14(VAR_11);
 VAR_16 = FUNC_0(VAR_15);
 if (FUNC_11(VAR_15, &VAR_13, &VAR_14)) {
  FUNC_8(VAR_11, "could not retrieve 'ranges' data\n");
  goto cleanup_res;
 }


 VAR_12->sc_io_base = VAR_13.base;
 VAR_12->sc_io_size = VAR_13.len;
 VAR_12->sc_mem_base = VAR_14.base;
 VAR_12->sc_mem_size = VAR_14.len;
 VAR_12->sc_irq_start = VAR_2;
 VAR_12->sc_irq_end = VAR_3;


 VAR_12->sc_mem_rman.rm_type = VAR_6;
 VAR_12->sc_mem_rman.rm_descr = "mtk pcie memory window";
 if (FUNC_16(&VAR_12->sc_mem_rman) != 0 ||
     FUNC_17(&VAR_12->sc_mem_rman, VAR_12->sc_mem_base,
     VAR_12->sc_mem_base + VAR_12->sc_mem_size - 1) != 0) {
  FUNC_8(VAR_11, "failed to setup memory rman\n");
  goto cleanup_res;
 }

 VAR_12->sc_io_rman.rm_type = VAR_6;
 VAR_12->sc_io_rman.rm_descr = "mtk pcie io window";
 if (FUNC_16(&VAR_12->sc_io_rman) != 0 ||
     FUNC_17(&VAR_12->sc_io_rman, VAR_12->sc_io_base,
     VAR_12->sc_io_base + VAR_12->sc_io_size - 1) != 0) {
  FUNC_8(VAR_11, "failed to setup io rman\n");
  goto cleanup_res;
 }

 VAR_12->sc_irq_rman.rm_type = VAR_6;
 VAR_12->sc_irq_rman.rm_descr = "mtk pcie irqs";
 if (FUNC_16(&VAR_12->sc_irq_rman) != 0 ||
     FUNC_17(&VAR_12->sc_irq_rman, VAR_12->sc_irq_start,
     VAR_12->sc_irq_end) != 0) {
  FUNC_8(VAR_11, "failed to setup irq rman\n");
  goto cleanup_res;
 }


 if (FUNC_12(VAR_11)) {
  FUNC_8(VAR_11, "pcie phy init failed\n");
  goto cleanup_rman;
 }


 if (FUNC_9(VAR_11, VAR_16) == ((void*)0)) {
  FUNC_8(VAR_11, "could not register PIC\n");
  goto cleanup_rman;
 }


 for (VAR_17 = 1; VAR_17 <= VAR_12->sc_num_irq; VAR_17++) {
  VAR_12->pci_intrhand[VAR_17 - 1] = ((void*)0);
  if (FUNC_4(VAR_11, VAR_12->pci_res[VAR_17], VAR_1,
      VAR_10, ((void*)0), VAR_12, &VAR_12->pci_intrhand[VAR_17 - 1])) {
   FUNC_8(VAR_11, "could not setup intr handler %d\n",
       VAR_17);
   goto cleanup;
  }
 }


 if (FUNC_6(VAR_11, "pci", -1) == ((void*)0)) {
  FUNC_8(VAR_11, "could not attach pci bus\n");
  goto cleanup;
 }


 if (FUNC_2(VAR_11)) {
  FUNC_8(VAR_11, "could not attach to bus\n");
  goto cleanup;
 }

 return (0);

cleanup:



 for (VAR_17 = 1; VAR_17 <= VAR_12->sc_num_irq; VAR_17++) {
  if (VAR_12->pci_intrhand[VAR_17 - 1] != ((void*)0))
   FUNC_5(VAR_11, VAR_12->pci_res[VAR_17],
       VAR_12->pci_intrhand[VAR_17 - 1]);
 }
cleanup_rman:
 FUNC_13(VAR_11);
 FUNC_15(&VAR_12->sc_irq_rman);
 FUNC_15(&VAR_12->sc_io_rman);
 FUNC_15(&VAR_12->sc_mem_rman);
cleanup_res:
 VAR_9 = ((void*)0);
 if (VAR_12->pci_res[0] != ((void*)0))
  FUNC_3(VAR_11, VAR_8, 0, VAR_12->pci_res[0]);
 if (VAR_12->pci_res[1] != ((void*)0))
  FUNC_3(VAR_11, VAR_7, 0, VAR_12->pci_res[1]);
 if (VAR_12->pci_res[2] != ((void*)0))
  FUNC_3(VAR_11, VAR_7, 1, VAR_12->pci_res[2]);
 if (VAR_12->pci_res[3] != ((void*)0))
  FUNC_3(VAR_11, VAR_7, 2, VAR_12->pci_res[3]);
 return (VAR_0);
}
