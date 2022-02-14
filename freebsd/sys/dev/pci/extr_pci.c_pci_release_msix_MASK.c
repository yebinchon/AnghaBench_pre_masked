
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource_list_entry {int * res; } ;
struct pcicfg_msix {int msix_alloc; int msix_table_len; TYPE_2__* msix_vectors; TYPE_2__* msix_table; int msix_ctrl; scalar_t__ msix_location; } ;
struct TYPE_3__ {struct pcicfg_msix msix; } ;
struct pci_devinfo {int resources; TYPE_1__ cfg; } ;
typedef int device_t ;
struct TYPE_4__ {scalar_t__ mte_vector; scalar_t__ mte_handlers; int mv_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct pci_devinfo* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int ,scalar_t__,int ,int) ;
 int FUNC_6 (int *,int ,int) ;
 struct resource_list_entry* FUNC_7 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_6, device_t VAR_7)
{
 struct pci_devinfo *VAR_8 = FUNC_2(VAR_7);
 struct pcicfg_msix *VAR_9 = &VAR_8->cfg.msix;
 struct resource_list_entry *VAR_10;
 int VAR_11;


 if (VAR_9->msix_alloc == 0)
  return (VAR_1);


 for (VAR_11 = 0; VAR_11 < VAR_9->msix_table_len; VAR_11++) {
  if (VAR_9->msix_table[VAR_11].mte_vector == 0)
   continue;
  if (VAR_9->msix_table[VAR_11].mte_handlers > 0)
   return (VAR_0);
  VAR_10 = FUNC_7(&VAR_8->resources, VAR_5, VAR_11 + 1);
  FUNC_0(VAR_10 != ((void*)0), ("missing resource"));
  if (VAR_10->res != ((void*)0))
   return (VAR_0);
 }


 VAR_9->msix_ctrl &= ~VAR_3;
 FUNC_5(VAR_7, VAR_9->msix_location + VAR_4,
     VAR_9->msix_ctrl, 2);


 for (VAR_11 = 0; VAR_11 < VAR_9->msix_table_len; VAR_11++) {
  if (VAR_9->msix_table[VAR_11].mte_vector == 0)
   continue;
  FUNC_6(&VAR_8->resources, VAR_5, VAR_11 + 1);
 }
 FUNC_4(VAR_9->msix_table, VAR_2);
 VAR_9->msix_table_len = 0;


 for (VAR_11 = 0; VAR_11 < VAR_9->msix_alloc; VAR_11++)
  FUNC_1(FUNC_3(VAR_6), VAR_7,
      VAR_9->msix_vectors[VAR_11].mv_irq);
 FUNC_4(VAR_9->msix_vectors, VAR_2);
 VAR_9->msix_alloc = 0;
 return (0);
}
