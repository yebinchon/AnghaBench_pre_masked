
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ISCI_REQUEST {int index; int * queued_ccb_in_progress; void* release_queued_ccb; int queued_ccbs; int pending_device_reset_element; scalar_t__ frozen_lun_mask; void* is_resetting; } ;
struct ISCI_REMOTE_DEVICE {int index; int * queued_ccb_in_progress; void* release_queued_ccb; int queued_ccbs; int pending_device_reset_element; scalar_t__ frozen_lun_mask; void* is_resetting; } ;
struct ISCI_MEMORY {int size; int physical_address; scalar_t__ virtual_address; } ;
struct ISCI_CONTROLLER {int queue_depth; int remote_device_pool; TYPE_2__* domain; int ** remote_device; int * remote_device_memory; int request_pool; int buffer_dma_tag; int scif_controller_handle; int lock; int mdl; struct ISCI_MEMORY request_memory; struct ISCI_MEMORY cached_controller_memory; struct ISCI_MEMORY uncached_controller_memory; TYPE_1__* isci; } ;
typedef int device_t ;
typedef int bus_addr_t ;
struct TYPE_4__ {struct ISCI_REQUEST* da_remote_device; } ;
struct TYPE_3__ {int device; } ;
typedef scalar_t__ POINTER_UINT ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int*) ;
 int FUNC_2 (int ,int,int ,int ,int ,int *,int *,int,int ,int,int ,int ,int *,int *) ;
 int FUNC_3 (int ) ;
 int VAR_11 ;
 int FUNC_4 (int ,struct ISCI_CONTROLLER*,struct ISCI_MEMORY*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct ISCI_REQUEST*,int ,int ,int ) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (int,int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct ISCI_REQUEST*,int *) ;
 int FUNC_12 (int ,int,scalar_t__,int ) ;
 void* FUNC_13 (int ,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,struct ISCI_REQUEST*) ;
 int FUNC_16 () ;

int FUNC_17(struct ISCI_CONTROLLER *VAR_12)
{
 int VAR_13;
 device_t VAR_14 = VAR_12->isci->device;
 uint32_t VAR_15 = FUNC_5();
 uint32_t VAR_16 = 0;
 struct ISCI_MEMORY *VAR_17 =
     &VAR_12->uncached_controller_memory;
 struct ISCI_MEMORY *VAR_18 =
     &VAR_12->cached_controller_memory;
 struct ISCI_MEMORY *VAR_19 =
     &VAR_12->request_memory;
 POINTER_UINT VAR_20;
 bus_addr_t VAR_21;

 VAR_12->mdl = FUNC_10(
     VAR_12->scif_controller_handle);

 VAR_17->size = FUNC_13(
     VAR_12->mdl, VAR_10);

 VAR_13 = FUNC_4(VAR_14, VAR_12,
     VAR_17);

 if (VAR_13 != 0)
     return (VAR_13);

 FUNC_12( VAR_12->mdl,
     VAR_10,
     VAR_17->virtual_address,
     VAR_17->physical_address);

 VAR_18->size = FUNC_13(
     VAR_12->mdl,
     VAR_9 | VAR_10
 );

 VAR_13 = FUNC_4(VAR_14, VAR_12,
     VAR_18);

 if (VAR_13 != 0)
     return (VAR_13);

 FUNC_12(VAR_12->mdl,
     VAR_9 | VAR_10,
     VAR_18->virtual_address,
     VAR_18->physical_address);

 VAR_19->size =
     VAR_12->queue_depth * FUNC_6();

 VAR_13 = FUNC_4(VAR_14, VAR_12, VAR_19);

 if (VAR_13 != 0)
     return (VAR_13);
 FUNC_1("hw.isci.max_segment_size", &VAR_15);






 VAR_16 = FUNC_2(FUNC_3(VAR_14), 0x1,
     VAR_2, VAR_0, VAR_0,
     ((void*)0), ((void*)0), FUNC_5(),
     VAR_8, VAR_15, 0,
     VAR_11, &VAR_12->lock,
     &VAR_12->buffer_dma_tag);

 FUNC_14(VAR_12->request_pool);

 VAR_20 = VAR_19->virtual_address;
 VAR_21 = VAR_19->physical_address;

 for (int VAR_22 = 0; VAR_22 < VAR_12->queue_depth; VAR_22++) {
  struct ISCI_REQUEST *VAR_23 =
      (struct ISCI_REQUEST *)VAR_20;

  FUNC_7(VAR_23,
      VAR_12->scif_controller_handle,
      VAR_12->buffer_dma_tag, VAR_21);

  FUNC_15(VAR_12->request_pool, VAR_23);

  VAR_20 += FUNC_8();
  VAR_21 += FUNC_8();
 }

 uint32_t VAR_24 = sizeof(struct ISCI_REMOTE_DEVICE) +
     FUNC_16();

 VAR_12->remote_device_memory = (uint8_t *) FUNC_9(
     VAR_24 * VAR_7, VAR_3,
     VAR_4 | VAR_5);

 FUNC_14(VAR_12->remote_device_pool);

 uint8_t *VAR_25 = VAR_12->remote_device_memory;

 for (int VAR_26 = 0; VAR_26 < VAR_7; VAR_26++) {
  struct ISCI_REMOTE_DEVICE *VAR_27 =
      (struct ISCI_REMOTE_DEVICE *)VAR_25;

  VAR_12->remote_device[VAR_26] = ((void*)0);
  VAR_27->index = VAR_26;
  VAR_27->is_resetting = VAR_1;
  VAR_27->frozen_lun_mask = 0;
  FUNC_11(VAR_27,
      &VAR_27->pending_device_reset_element);
  FUNC_0(&VAR_27->queued_ccbs);
  VAR_27->release_queued_ccb = VAR_1;
  VAR_27->queued_ccb_in_progress = ((void*)0);







  if (VAR_26 < VAR_6)
   VAR_12->domain[VAR_26].da_remote_device = VAR_27;
  else
   FUNC_15(VAR_12->remote_device_pool,
       VAR_27);
  VAR_25 += VAR_24;
 }

 return (0);
}
