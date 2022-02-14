
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* state_handlers; } ;
struct TYPE_12__ {int current_activity_phy_index; int current_smp_request; int current_activity; } ;
struct TYPE_11__ {TYPE_4__ smp_device; } ;
struct TYPE_13__ {int expander_phy_identifier; TYPE_3__ protocol_device; TYPE_2__* domain; } ;
struct TYPE_10__ {TYPE_6__* controller; } ;
struct TYPE_9__ {int (* start_high_priority_io_handler ) (int *,int *,int *,int ) ;} ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef int SCIF_SAS_REQUEST_T ;
typedef TYPE_5__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_6__ SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int *,int ) ;

void FUNC_1(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_3,
   SCIF_SAS_REMOTE_DEVICE_T * VAR_4,
   SCIF_SAS_REQUEST_T * VAR_5
)
{
   SCIF_SAS_CONTROLLER_T * VAR_6 = VAR_3->domain->controller;


   VAR_3->protocol_device.smp_device.current_activity =
      VAR_0;
   VAR_3->protocol_device.smp_device.current_smp_request =
      VAR_2;
   VAR_3->protocol_device.smp_device.current_activity_phy_index =
      VAR_4->expander_phy_identifier;



   VAR_6->state_handlers->start_high_priority_io_handler(
      (SCI_BASE_CONTROLLER_T*) VAR_6,
      (SCI_BASE_REMOTE_DEVICE_T*) VAR_3,
      (SCI_BASE_REQUEST_T*) VAR_5,
      VAR_1
   );
}
