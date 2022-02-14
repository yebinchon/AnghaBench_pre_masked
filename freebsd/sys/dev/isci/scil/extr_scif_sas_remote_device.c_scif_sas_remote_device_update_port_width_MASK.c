
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ U8 ;
struct TYPE_8__ {scalar_t__ current_state_id; } ;
struct TYPE_6__ {TYPE_4__ state_machine; } ;
struct TYPE_7__ {scalar_t__ device_port_width; int destination_state; TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef TYPE_2__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_4__*,int ) ;

SCI_STATUS FUNC_3(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_7,
   U8 VAR_8
)
{
   FUNC_0((
      FUNC_1(VAR_7),
      VAR_0,
      "scif_sas_remote_device_update_port_width (0x%x, 0x%x) enter\n",
      VAR_7, VAR_8
   ));

   VAR_7->device_port_width = VAR_8;



   if (VAR_7->parent.state_machine.current_state_id == VAR_2)
   {
      if (VAR_7->device_port_width != 0)
      {

         FUNC_2(
            &VAR_7->parent.state_machine,
            VAR_4
         );
      }

      return VAR_6;
   }
   else if (VAR_7->parent.state_machine.current_state_id ==
               VAR_3)
   {
      VAR_7->destination_state =
         VAR_1;
   }

   return VAR_5;
}
