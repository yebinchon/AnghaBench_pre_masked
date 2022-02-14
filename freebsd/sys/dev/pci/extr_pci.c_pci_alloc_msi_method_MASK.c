
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct resource_list_entry {int * res; } ;
struct TYPE_5__ {int msi_alloc; scalar_t__ msi_location; int msi_msgnum; int msi_ctrl; scalar_t__ msi_handlers; } ;
struct TYPE_4__ {scalar_t__ msix_alloc; } ;
struct TYPE_6__ {TYPE_2__ msi; TYPE_1__ msix; } ;
struct pci_devinfo {int resources; TYPE_3__ cfg; } ;
typedef TYPE_3__ pcicfgregs ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int,int*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct pci_devinfo* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ,scalar_t__,int,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int *,int ,int,int,int,int) ;
 struct resource_list_entry* FUNC_11 (int *,int ,int ) ;

int
FUNC_12(device_t VAR_8, device_t VAR_9, int *VAR_10)
{
 struct pci_devinfo *VAR_11 = FUNC_1(VAR_9);
 pcicfgregs *VAR_12 = &VAR_11->cfg;
 struct resource_list_entry *VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17[32];
 uint16_t VAR_18;


 if (*VAR_10 == 0)
  return (VAR_0);


 VAR_13 = FUNC_11(&VAR_11->resources, VAR_5, 0);
 if (VAR_13 != ((void*)0) && VAR_13->res != ((void*)0))
  return (VAR_2);


 if (VAR_12->msi.msi_alloc != 0 || VAR_12->msix.msix_alloc != 0)
  return (VAR_2);


 if (FUNC_6())
  return (VAR_2);


 if (VAR_12->msi.msi_location == 0 || !VAR_7)
  return (VAR_1);

 if (VAR_6)
  FUNC_3(VAR_9,
      "attempting to allocate %d MSI vectors (%d supported)\n",
      *VAR_10, VAR_12->msi.msi_msgnum);


 VAR_14 = FUNC_5(*VAR_10, VAR_12->msi.msi_msgnum);


 VAR_14 = FUNC_5(VAR_14, 32);


 if (!FUNC_8(VAR_14))
  return (VAR_0);

 for (;;) {

  VAR_15 = FUNC_0(FUNC_2(VAR_8), VAR_9, VAR_14,
      VAR_14, VAR_17);
  if (VAR_15 == 0)
   break;
  if (VAR_14 == 1)
   return (VAR_15);


  VAR_14 >>= 1;
 }






 for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++)
  FUNC_10(&VAR_11->resources, VAR_5, VAR_16 + 1,
      VAR_17[VAR_16], VAR_17[VAR_16], 1);

 if (VAR_6) {
  if (VAR_14 == 1)
   FUNC_3(VAR_9, "using IRQ %d for MSI\n", VAR_17[0]);
  else {
   int VAR_19;






   FUNC_3(VAR_9, "using IRQs %d", VAR_17[0]);
   VAR_19 = 0;
   for (VAR_16 = 1; VAR_16 < VAR_14; VAR_16++) {


    if (VAR_17[VAR_16] == VAR_17[VAR_16 - 1] + 1) {
     VAR_19 = 1;
     continue;
    }


    if (VAR_19) {
     FUNC_9("-%d", VAR_17[VAR_16 - 1]);
     VAR_19 = 0;
    }


    FUNC_9(",%d", VAR_17[VAR_16]);
   }


   if (VAR_19)
    FUNC_9("-%d", VAR_17[VAR_14 - 1]);
   FUNC_9(" for MSI\n");
  }
 }


 VAR_18 = VAR_12->msi.msi_ctrl;
 VAR_18 &= ~VAR_3;
 VAR_18 |= (FUNC_4(VAR_14) - 1) << 4;
 VAR_12->msi.msi_ctrl = VAR_18;
 FUNC_7(VAR_9, VAR_12->msi.msi_location + VAR_4, VAR_18, 2);


 VAR_12->msi.msi_alloc = VAR_14;
 VAR_12->msi.msi_handlers = 0;
 *VAR_10 = VAR_14;
 return (0);
}
