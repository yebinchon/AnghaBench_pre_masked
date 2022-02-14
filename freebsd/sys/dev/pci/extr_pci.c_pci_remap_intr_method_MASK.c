
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint64_t ;
typedef void* uint32_t ;
typedef scalar_t__ u_int ;
struct resource_list_entry {scalar_t__ start; } ;
struct TYPE_5__ {int msix_alloc; int msix_table_len; struct msix_table_entry* msix_table; struct msix_vector* msix_vectors; } ;
struct TYPE_4__ {int msi_alloc; scalar_t__ msi_handlers; void* msi_data; void* msi_addr; } ;
struct TYPE_6__ {TYPE_2__ msix; TYPE_1__ msi; } ;
struct pci_devinfo {TYPE_3__ cfg; int resources; } ;
struct msix_vector {scalar_t__ mv_irq; void* mv_data; void* mv_address; } ;
struct msix_table_entry {int mte_vector; scalar_t__ mte_handlers; } ;
typedef TYPE_3__ pcicfgregs ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,void**,void**) ;
 int VAR_1 ;
 struct pci_devinfo* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,void*,void*) ;
 int FUNC_5 (int ,int,void*,void*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 struct resource_list_entry* FUNC_8 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2, device_t VAR_3, u_int VAR_4)
{
 struct pci_devinfo *VAR_5 = FUNC_1(VAR_3);
 pcicfgregs *VAR_6 = &VAR_5->cfg;
 struct resource_list_entry *VAR_7;
 struct msix_table_entry *VAR_8;
 struct msix_vector *VAR_9;
 uint64_t VAR_10;
 uint32_t VAR_11;
 int VAR_12, VAR_13, VAR_14;






 if (VAR_6->msi.msi_alloc > 0) {


  if (VAR_6->msi.msi_handlers == 0)
   return (0);
  for (VAR_13 = 0; VAR_13 < VAR_6->msi.msi_alloc; VAR_13++) {
   VAR_7 = FUNC_8(&VAR_5->resources, VAR_1,
       VAR_13 + 1);
   if (VAR_7->start == VAR_4) {
    VAR_12 = FUNC_0(FUNC_2(VAR_2),
        VAR_3, VAR_4, &VAR_10, &VAR_11);
    if (VAR_12)
     return (VAR_12);
    FUNC_3(VAR_3);
    VAR_5->cfg.msi.msi_addr = VAR_10;
    VAR_5->cfg.msi.msi_data = VAR_11;
    FUNC_4(VAR_3, VAR_10, VAR_11);
    return (0);
   }
  }
  return (VAR_0);
 }






 if (VAR_6->msix.msix_alloc > 0) {
  for (VAR_13 = 0; VAR_13 < VAR_6->msix.msix_alloc; VAR_13++) {
   VAR_9 = &VAR_6->msix.msix_vectors[VAR_13];
   if (VAR_9->mv_irq == VAR_4) {
    VAR_12 = FUNC_0(FUNC_2(VAR_2),
        VAR_3, VAR_4, &VAR_10, &VAR_11);
    if (VAR_12)
     return (VAR_12);
    VAR_9->mv_address = VAR_10;
    VAR_9->mv_data = VAR_11;
    for (VAR_14 = 0; VAR_14 < VAR_6->msix.msix_table_len; VAR_14++) {
     VAR_8 = &VAR_6->msix.msix_table[VAR_14];
     if (VAR_8->mte_vector != VAR_13 + 1)
      continue;
     if (VAR_8->mte_handlers == 0)
      continue;
     FUNC_6(VAR_3, VAR_14);
     FUNC_5(VAR_3, VAR_14, VAR_10, VAR_11);
     FUNC_7(VAR_3, VAR_14);
    }
   }
  }
  return (VAR_0);
 }

 return (VAR_0);
}
