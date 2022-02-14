
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isci_softc {int controller_count; int num_interrupts; struct ISCI_INTERRUPT_INFO* interrupt_info; struct ISCI_PCI_BAR* pci_bar; int * sci_library_memory; struct ISCI_CONTROLLER* controllers; } ;
struct ISCI_PCI_BAR {int * resource; int resource_id; } ;
struct ISCI_INTERRUPT_INFO {int * res; int * tag; } ;
struct ISCI_CONTROLLER {scalar_t__ is_started; int unmap_buffer_pool; TYPE_1__* phys; int * remote_device_memory; int * timer_memory; int lock; int * sim; int path; int * scif_controller_handle; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ cdev_locate; scalar_t__ cdev_fault; } ;
typedef int SCI_STATUS ;


 struct isci_softc* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (void*,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct ISCI_CONTROLLER*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,void*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static int
FUNC_21(device_t VAR_7)
{
 struct isci_softc *VAR_8 = FUNC_0(VAR_7);
 int VAR_9, VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_8->controller_count; VAR_9++) {
  struct ISCI_CONTROLLER *VAR_11 = &VAR_8->controllers[VAR_9];
  SCI_STATUS VAR_12;
  void *VAR_13;

  if (VAR_11->scif_controller_handle != ((void*)0)) {
   FUNC_16(
       FUNC_17(VAR_11->scif_controller_handle));

   FUNC_9(&VAR_11->lock);
   VAR_12 = FUNC_18(VAR_11->scif_controller_handle, 0);
   FUNC_10(&VAR_11->lock);

   while (VAR_11->is_started == VAR_6) {



    FUNC_9(&VAR_11->lock);
    FUNC_7(VAR_11);
    FUNC_10(&VAR_11->lock);
    FUNC_11("isci", 1);
   }

   if(VAR_11->sim != ((void*)0)) {
    FUNC_9(&VAR_11->lock);
    FUNC_20(VAR_11->path);
    FUNC_19(FUNC_4(VAR_11->sim));
    FUNC_3(VAR_11->sim, VAR_6);
    FUNC_10(&VAR_11->lock);
   }
  }

  if (VAR_11->timer_memory != ((void*)0))
   FUNC_6(VAR_11->timer_memory, VAR_1);

  if (VAR_11->remote_device_memory != ((void*)0))
   FUNC_6(VAR_11->remote_device_memory, VAR_1);

  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
   if (VAR_11->phys[VAR_10].cdev_fault)
    FUNC_8(VAR_11->phys[VAR_10].cdev_fault);

   if (VAR_11->phys[VAR_10].cdev_locate)
    FUNC_8(VAR_11->phys[VAR_10].cdev_locate);
  }

  while (1) {
   FUNC_15(VAR_11->unmap_buffer_pool, VAR_13);
   if (VAR_13 == ((void*)0))
    break;
   FUNC_5(VAR_13, VAR_2, VAR_1);
  }
 }




 if (VAR_8->sci_library_memory != ((void*)0))
  FUNC_6(VAR_8->sci_library_memory, VAR_1);

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
 {
  struct ISCI_PCI_BAR *VAR_14 = &VAR_8->pci_bar[VAR_9];

  if (VAR_14->resource != ((void*)0))
   FUNC_1(VAR_7, VAR_5,
       VAR_14->resource_id, VAR_14->resource);
 }

 for (VAR_9 = 0; VAR_9 < VAR_8->num_interrupts; VAR_9++)
 {
  struct ISCI_INTERRUPT_INFO *VAR_15;

  VAR_15 = &VAR_8->interrupt_info[VAR_9];

  if(VAR_15->tag != ((void*)0))
   FUNC_2(VAR_7, VAR_15->res,
       VAR_15->tag);

  if(VAR_15->res != ((void*)0))
   FUNC_1(VAR_7, VAR_4,
       FUNC_14(VAR_15->res),
       VAR_15->res);

  FUNC_13(VAR_7);
 }
 FUNC_12(VAR_7);

 return (0);
}
