
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint64_t ;
typedef void* uint32_t ;
struct resource {int dummy; } ;
struct TYPE_5__ {scalar_t__ msix_alloc; int msix_table_len; struct msix_vector* msix_vectors; struct msix_table_entry* msix_table; } ;
struct TYPE_4__ {scalar_t__ msi_alloc; scalar_t__ msi_addr; scalar_t__ msi_handlers; void* msi_data; } ;
struct TYPE_6__ {TYPE_2__ msix; TYPE_1__ msi; } ;
struct pci_devinfo {TYPE_3__ cfg; } ;
struct msix_vector {scalar_t__ mv_irq; scalar_t__ mv_address; void* mv_data; } ;
struct msix_table_entry {int mte_vector; int mte_handlers; } ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef scalar_t__ device_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,void**,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,scalar_t__,struct resource*,int,int *,int *,void*,void**) ;
 int FUNC_3 (scalar_t__,scalar_t__,struct resource*,void*) ;
 struct pci_devinfo* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,scalar_t__,void*) ;
 int FUNC_8 (scalar_t__,int,scalar_t__,void*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (scalar_t__,scalar_t__,int ) ;
 int FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (struct resource*) ;
 scalar_t__ FUNC_14 (struct resource*) ;

int
FUNC_15(device_t VAR_2, device_t VAR_3, struct resource *VAR_4, int VAR_5,
    driver_filter_t *VAR_6, driver_intr_t *VAR_7, void *VAR_8, void **VAR_9)
{
 struct pci_devinfo *VAR_10;
 struct msix_table_entry *VAR_11;
 struct msix_vector *VAR_12;
 uint64_t VAR_13;
 uint32_t VAR_14;
 void *VAR_15;
 int VAR_16, VAR_17;

 VAR_16 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8, &VAR_15);
 if (VAR_16)
  return (VAR_16);


 if (FUNC_5(VAR_3) != VAR_2) {
  *VAR_9 = VAR_15;
  return(0);
 }

 VAR_17 = FUNC_13(VAR_4);
 if (VAR_17 == 0) {

  FUNC_6(VAR_2, VAR_3, VAR_0);
 } else {







  VAR_10 = FUNC_4(VAR_3);
  if (VAR_10->cfg.msi.msi_alloc > 0) {
   if (VAR_10->cfg.msi.msi_addr == 0) {
    FUNC_0(VAR_10->cfg.msi.msi_handlers == 0,
       ("MSI has handlers, but vectors not mapped"));
    VAR_16 = FUNC_1(FUNC_5(VAR_2),
        VAR_3, FUNC_14(VAR_4), &VAR_13, &VAR_14);
    if (VAR_16)
     goto bad;
    VAR_10->cfg.msi.msi_addr = VAR_13;
    VAR_10->cfg.msi.msi_data = VAR_14;
   }
   if (VAR_10->cfg.msi.msi_handlers == 0)
    FUNC_7(VAR_3, VAR_10->cfg.msi.msi_addr,
        VAR_10->cfg.msi.msi_data);
   VAR_10->cfg.msi.msi_handlers++;
  } else {
   FUNC_0(VAR_10->cfg.msix.msix_alloc > 0,
       ("No MSI or MSI-X interrupts allocated"));
   FUNC_0(VAR_17 <= VAR_10->cfg.msix.msix_table_len,
       ("MSI-X index too high"));
   VAR_11 = &VAR_10->cfg.msix.msix_table[VAR_17 - 1];
   FUNC_0(VAR_11->mte_vector != 0, ("no message vector"));
   VAR_12 = &VAR_10->cfg.msix.msix_vectors[VAR_11->mte_vector - 1];
   FUNC_0(VAR_12->mv_irq == FUNC_14(VAR_4),
       ("IRQ mismatch"));
   if (VAR_12->mv_address == 0) {
    FUNC_0(VAR_11->mte_handlers == 0,
      ("MSI-X table entry has handlers, but vector not mapped"));
    VAR_16 = FUNC_1(FUNC_5(VAR_2),
        VAR_3, FUNC_14(VAR_4), &VAR_13, &VAR_14);
    if (VAR_16)
     goto bad;
    VAR_12->mv_address = VAR_13;
    VAR_12->mv_data = VAR_14;
   }
   VAR_11->mte_handlers++;
   if (VAR_11->mte_handlers == 1) {
    FUNC_8(VAR_3, VAR_17 - 1, VAR_12->mv_address,
        VAR_12->mv_data);
    FUNC_12(VAR_3, VAR_17 - 1);
   }
  }






  if (!FUNC_10(FUNC_9(VAR_3),
      VAR_1))
   FUNC_11(VAR_2, VAR_3, VAR_0);
  else
   FUNC_6(VAR_2, VAR_3, VAR_0);
 bad:
  if (VAR_16) {
   (void)FUNC_3(VAR_2, VAR_3, VAR_4,
       VAR_15);
   return (VAR_16);
  }
 }
 *VAR_9 = VAR_15;
 return (0);
}
