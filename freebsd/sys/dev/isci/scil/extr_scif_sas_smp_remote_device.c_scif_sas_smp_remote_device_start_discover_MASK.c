
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int scheduled_activity; int current_smp_request; int current_activity; } ;
struct TYPE_10__ {TYPE_3__ smp_device; } ;
struct TYPE_12__ {TYPE_2__ protocol_device; TYPE_1__* domain; } ;
struct TYPE_9__ {int * controller; } ;
typedef TYPE_4__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef int SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,int ,int *) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,TYPE_4__*) ;

void FUNC_5(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_6
)
{
   SCIF_SAS_CONTROLLER_T * VAR_7 = VAR_6->domain->controller;

   FUNC_0((
      FUNC_1(VAR_6),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_start_discover(0x%x) enter\n",
      VAR_6
   ));



   FUNC_3(VAR_6);


   VAR_6->protocol_device.smp_device.current_activity =
      VAR_2;


   VAR_6->protocol_device.smp_device.current_smp_request =
      VAR_4;


   VAR_6->protocol_device.smp_device.scheduled_activity =
      VAR_3;


   FUNC_4(VAR_7, VAR_6);


   FUNC_2(
      VAR_7,
      VAR_5,
      VAR_7
   );
}
