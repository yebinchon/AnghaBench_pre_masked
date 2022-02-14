
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int pool; } ;
struct TYPE_21__ {TYPE_3__ hprq; } ;
struct TYPE_15__ {int current_activity_phy_index; int current_smp_request; } ;
struct TYPE_16__ {TYPE_1__ smp_device; } ;
struct TYPE_20__ {TYPE_2__ protocol_device; TYPE_4__* domain; } ;
struct TYPE_19__ {int list_element; TYPE_6__* device; } ;
struct TYPE_18__ {TYPE_7__* controller; } ;
typedef TYPE_5__ SCIF_SAS_REQUEST_T ;
typedef TYPE_6__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_7__ SCIF_SAS_CONTROLLER_T ;
typedef int POINTER_UINT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_7__*,int ,TYPE_7__*) ;
 int VAR_3 ;
 void* FUNC_6 (TYPE_7__*,TYPE_6__*,int ,void*,void*) ;

void FUNC_7(
   SCIF_SAS_REQUEST_T * VAR_4
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_5 = VAR_4->device;
   SCIF_SAS_CONTROLLER_T * VAR_6 = VAR_5->domain->controller;
   void * VAR_7;

   FUNC_0((
      FUNC_1(VAR_5),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_target_reset_poll(0x%x) enter\n",
      VAR_4
   ));




   FUNC_2(&VAR_4->list_element);

   VAR_5->protocol_device.smp_device.current_smp_request =
      VAR_2;



   VAR_7 = FUNC_6(
      VAR_5->domain->controller,
      VAR_5,
      VAR_5->protocol_device.smp_device.current_activity_phy_index,
      (void *)FUNC_3(VAR_4),
      (void *)VAR_4
   );


   FUNC_4(VAR_6->hprq.pool, (POINTER_UINT) VAR_7);


   FUNC_5(
      VAR_6, VAR_3, VAR_6
   );
}
