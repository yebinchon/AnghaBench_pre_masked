
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
struct ISCI_CONTROLLER {int queue_depth; int sim_queue_depth; int fail_on_task_timeout; int index; int scif_controller_handle; TYPE_7__* phys; int lock; int sim; int has_been_scanned; scalar_t__ oem_parameters_version; int oem_parameters; TYPE_1__* isci; } ;
struct TYPE_12__ {int index; void* cdev_locate; scalar_t__ led_locate; void* cdev_fault; scalar_t__ led_fault; int handle; } ;
struct TYPE_10__ {TYPE_2__* phys; void* stp_inactivity_timeout; void* ssp_inactivity_timeout; void* stp_max_occupancy_timeout; void* ssp_max_occupancy_timeout; void* no_outbound_task_timeout; } ;
struct TYPE_11__ {TYPE_3__ sds1; } ;
struct TYPE_9__ {void* max_speed_generation; } ;
struct TYPE_8__ {scalar_t__ oem_parameters_found; } ;
typedef int SCI_STATUS ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_4__ SCIC_USER_PARAMETERS_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (char*,int*) ;
 scalar_t__ FUNC_1 (char*,unsigned long*) ;
 int FUNC_2 (struct ISCI_CONTROLLER*) ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_3 (int ,TYPE_7__*,char*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,void*) ;
 int FUNC_9 (int ,TYPE_4__*) ;
 int FUNC_10 (int ,TYPE_4__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,char*,int,int) ;
 int FUNC_14 (int ,int) ;

SCI_STATUS FUNC_15(struct ISCI_CONTROLLER *VAR_7)
{
 SCIC_USER_PARAMETERS_T VAR_8;
 SCI_CONTROLLER_HANDLE_T VAR_9;
 char VAR_10[64];
 unsigned long VAR_11;
 uint32_t VAR_12;
 uint32_t VAR_13;
 int VAR_14;

 VAR_9 =
     FUNC_11(VAR_7->scif_controller_handle);

 if (VAR_7->isci->oem_parameters_found == VAR_4)
 {
  FUNC_8(
      VAR_9,
      &VAR_7->oem_parameters,
      (uint8_t)(VAR_7->oem_parameters_version));
 }

 FUNC_9(VAR_9, &VAR_8);

 if (FUNC_1("hw.isci.no_outbound_task_timeout", &VAR_11))
  VAR_8.sds1.no_outbound_task_timeout =
      (uint8_t)VAR_11;

 if (FUNC_1("hw.isci.ssp_max_occupancy_timeout", &VAR_11))
  VAR_8.sds1.ssp_max_occupancy_timeout =
      (uint16_t)VAR_11;

 if (FUNC_1("hw.isci.stp_max_occupancy_timeout", &VAR_11))
  VAR_8.sds1.stp_max_occupancy_timeout =
      (uint16_t)VAR_11;

 if (FUNC_1("hw.isci.ssp_inactivity_timeout", &VAR_11))
  VAR_8.sds1.ssp_inactivity_timeout =
      (uint16_t)VAR_11;

 if (FUNC_1("hw.isci.stp_inactivity_timeout", &VAR_11))
  VAR_8.sds1.stp_inactivity_timeout =
      (uint16_t)VAR_11;

 if (FUNC_1("hw.isci.max_speed_generation", &VAR_11))
  for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++)
   VAR_8.sds1.phys[VAR_14].max_speed_generation =
       (uint8_t)VAR_11;

 FUNC_10(VAR_9, &VAR_8);




 VAR_7->queue_depth = VAR_2 - VAR_1;

 if (FUNC_0("hw.isci.controller_queue_depth",
     &VAR_7->queue_depth)) {
  VAR_7->queue_depth = FUNC_4(1, FUNC_5(VAR_7->queue_depth,
      VAR_2 - VAR_1));
 }




 VAR_7->sim_queue_depth = VAR_7->queue_depth - 1;
 VAR_12 = 0;
 FUNC_0("hw.isci.io_shortage", &VAR_12);
 VAR_7->sim_queue_depth += VAR_12;

 VAR_13 = 1;
 FUNC_0("hw.isci.fail_on_task_timeout", &VAR_13);
 VAR_7->fail_on_task_timeout = VAR_13;





 VAR_7->has_been_scanned = VAR_0;
 FUNC_6(&VAR_7->lock);
 FUNC_2(VAR_7);
 FUNC_14(VAR_7->sim, 1);
 FUNC_7(&VAR_7->lock);

 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
  VAR_7->phys[VAR_14].handle = VAR_9;
  VAR_7->phys[VAR_14].index = VAR_14;


  VAR_7->phys[VAR_14].led_fault = 0;
  FUNC_13(VAR_10, "isci.bus%d.port%d.fault", VAR_7->index, VAR_14);
  VAR_7->phys[VAR_14].cdev_fault = FUNC_3(VAR_5,
      &VAR_7->phys[VAR_14], VAR_10);


  VAR_7->phys[VAR_14].led_locate = 0;
  FUNC_13(VAR_10, "isci.bus%d.port%d.locate", VAR_7->index, VAR_14);
  VAR_7->phys[VAR_14].cdev_locate = FUNC_3(VAR_6,
      &VAR_7->phys[VAR_14], VAR_10);
 }

 return (FUNC_12(VAR_7->scif_controller_handle));
}
