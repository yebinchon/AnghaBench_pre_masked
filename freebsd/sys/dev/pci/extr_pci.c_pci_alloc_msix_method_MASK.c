
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct resource_list_entry {int start; int * res; } ;
struct TYPE_9__ {int msix_alloc; scalar_t__ msix_location; int msix_table_bar; scalar_t__ msix_pba_bar; int msix_msgnum; int msix_table_len; int msix_ctrl; TYPE_3__* msix_table; TYPE_2__* msix_vectors; int * msix_pba_res; int * msix_table_res; } ;
struct TYPE_6__ {scalar_t__ msi_alloc; } ;
struct TYPE_10__ {TYPE_4__ msix; TYPE_1__ msi; } ;
struct pci_devinfo {int resources; TYPE_5__ cfg; } ;
struct msix_vector {int dummy; } ;
struct msix_table_entry {int dummy; } ;
typedef TYPE_5__ pcicfgregs ;
typedef int device_t ;
struct TYPE_8__ {int mte_vector; } ;
struct TYPE_7__ {int mv_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 struct pci_devinfo* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,...) ;
 void* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int,int) ;
 int VAR_12 ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ,scalar_t__,int ,int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int *,int ,int,int,int,int) ;
 struct resource_list_entry* FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int *) ;

int
FUNC_13(device_t VAR_13, device_t VAR_14, int *VAR_15)
{
 struct pci_devinfo *VAR_16 = FUNC_1(VAR_14);
 pcicfgregs *VAR_17 = &VAR_16->cfg;
 struct resource_list_entry *VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;


 if (*VAR_15 == 0)
  return (VAR_0);


 VAR_18 = FUNC_11(&VAR_16->resources, VAR_9, 0);
 if (VAR_18 != ((void*)0) && VAR_18->res != ((void*)0))
  return (VAR_2);


 if (VAR_17->msi.msi_alloc != 0 || VAR_17->msix.msix_alloc != 0)
  return (VAR_2);


 if (FUNC_7())
  return (VAR_2);


 if (VAR_17->msix.msix_location == 0 || !VAR_12)
  return (VAR_1);


 VAR_18 = FUNC_11(&VAR_16->resources, VAR_10,
     VAR_17->msix.msix_table_bar);
 if (VAR_18 == ((void*)0) || VAR_18->res == ((void*)0) ||
     !(FUNC_12(VAR_18->res) & VAR_8))
  return (VAR_2);
 VAR_17->msix.msix_table_res = VAR_18->res;
 if (VAR_17->msix.msix_pba_bar != VAR_17->msix.msix_table_bar) {
  VAR_18 = FUNC_11(&VAR_16->resources, VAR_10,
      VAR_17->msix.msix_pba_bar);
  if (VAR_18 == ((void*)0) || VAR_18->res == ((void*)0) ||
      !(FUNC_12(VAR_18->res) & VAR_8))
   return (VAR_2);
 }
 VAR_17->msix.msix_pba_res = VAR_18->res;

 if (VAR_11)
  FUNC_3(VAR_14,
      "attempting to allocate %d MSI-X vectors (%d supported)\n",
      *VAR_15, VAR_17->msix.msix_msgnum);
 VAR_23 = FUNC_5(*VAR_15, VAR_17->msix.msix_msgnum);
 for (VAR_21 = 0; VAR_21 < VAR_23; VAR_21++) {

  VAR_20 = FUNC_0(FUNC_2(VAR_13), VAR_14, &VAR_22);
  if (VAR_20) {
   if (VAR_21 == 0)
    return (VAR_20);
   break;
  }
  FUNC_10(&VAR_16->resources, VAR_9, VAR_21 + 1, VAR_22,
      VAR_22, 1);
 }
 VAR_19 = VAR_21;

 if (VAR_11) {
  VAR_18 = FUNC_11(&VAR_16->resources, VAR_9, 1);
  if (VAR_19 == 1)
   FUNC_3(VAR_14, "using IRQ %ju for MSI-X\n",
       VAR_18->start);
  else {
   int VAR_24;






   FUNC_3(VAR_14, "using IRQs %ju", VAR_18->start);
   VAR_22 = VAR_18->start;
   VAR_24 = 0;
   for (VAR_21 = 1; VAR_21 < VAR_19; VAR_21++) {
    VAR_18 = FUNC_11(&VAR_16->resources,
        VAR_9, VAR_21 + 1);


    if (VAR_18->start == VAR_22 + 1) {
     VAR_24 = 1;
     VAR_22++;
     continue;
    }


    if (VAR_24) {
     FUNC_9("-%d", VAR_22);
     VAR_24 = 0;
    }


    FUNC_9(",%ju", VAR_18->start);
    VAR_22 = VAR_18->start;
   }


   if (VAR_24)
    FUNC_9("-%d", VAR_22);
   FUNC_9(" for MSI-X\n");
  }
 }


 for (VAR_21 = 0; VAR_21 < VAR_17->msix.msix_msgnum; VAR_21++)
  FUNC_6(VAR_14, VAR_21);


 VAR_17->msix.msix_vectors = FUNC_4(sizeof(struct msix_vector) * VAR_19,
     VAR_3, VAR_4 | VAR_5);
 VAR_17->msix.msix_table = FUNC_4(sizeof(struct msix_table_entry) * VAR_19,
     VAR_3, VAR_4 | VAR_5);
 for (VAR_21 = 0; VAR_21 < VAR_19; VAR_21++) {
  VAR_18 = FUNC_11(&VAR_16->resources, VAR_9, VAR_21 + 1);
  VAR_17->msix.msix_vectors[VAR_21].mv_irq = VAR_18->start;
  VAR_17->msix.msix_table[VAR_21].mte_vector = VAR_21 + 1;
 }


 VAR_17->msix.msix_ctrl |= VAR_6;
 FUNC_8(VAR_14, VAR_17->msix.msix_location + VAR_7,
     VAR_17->msix.msix_ctrl, 2);


 VAR_17->msix.msix_alloc = VAR_19;
 VAR_17->msix.msix_table_len = VAR_19;
 *VAR_15 = VAR_19;
 return (0);
}
