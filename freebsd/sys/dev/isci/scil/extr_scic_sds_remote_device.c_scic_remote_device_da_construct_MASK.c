
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int U16 ;
struct TYPE_26__ {int phy_mask; } ;
struct TYPE_23__ {int parent; } ;
struct TYPE_20__ {scalar_t__ attached_smp_target; scalar_t__ attached_stp_target; scalar_t__ attached_ssp_target; } ;
struct TYPE_21__ {TYPE_2__ bits; int all; } ;
struct TYPE_22__ {TYPE_3__ u; } ;
struct TYPE_25__ {int device_port_width; TYPE_10__* owning_port; int connection_rate; TYPE_5__ parent; int ready_substate_machine; void* has_ready_substate_machine; TYPE_4__ target_protocols; int device_address; int rnc; int is_atapi; void* is_direct_attached; } ;
struct TYPE_19__ {int all; } ;
struct TYPE_24__ {TYPE_1__ u; } ;
struct TYPE_18__ {int owning_controller; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_6__ SCI_SAS_IDENTIFY_ADDRESS_FRAME_PROTOCOLS_T ;
typedef scalar_t__ SCI_REMOTE_DEVICE_HANDLE_T ;
typedef TYPE_7__ SCIC_SDS_REMOTE_DEVICE_T ;
typedef TYPE_8__ SCIC_PORT_PROPERTIES_T ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 int FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (int *,int *,int ,int ) ;
 int FUNC_4 (TYPE_10__*,TYPE_8__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_7__*,int *) ;
 int FUNC_6 (TYPE_10__*,TYPE_6__*) ;
 int FUNC_7 (TYPE_10__*,int *) ;
 int FUNC_8 (TYPE_10__*) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;

SCI_STATUS FUNC_11(
   SCI_REMOTE_DEVICE_HANDLE_T VAR_10
)
{
   SCI_STATUS VAR_11;
   U16 VAR_12;
   SCIC_SDS_REMOTE_DEVICE_T *VAR_13 = (SCIC_SDS_REMOTE_DEVICE_T*)
                                           VAR_10;
   SCI_SAS_IDENTIFY_ADDRESS_FRAME_PROTOCOLS_T VAR_14;
   SCIC_PORT_PROPERTIES_T VAR_15;

   FUNC_0((
      FUNC_2(VAR_13->owning_port),
      VAR_2 |
      VAR_3 |
      VAR_1,
      "scic_remote_device_da_construct(0x%x) enter\n",
      VAR_10
   ));



   FUNC_6(VAR_13->owning_port,&VAR_14);
   VAR_13->target_protocols.u.all = VAR_14.u.all;
   VAR_13->is_direct_attached = VAR_7;

   VAR_13->is_atapi = FUNC_9(VAR_13);


   FUNC_4(VAR_13->owning_port, &VAR_15);

   FUNC_1(VAR_15.phy_mask, VAR_13->device_port_width);

   VAR_11 = FUNC_5(
               VAR_13->owning_port->owning_controller,
               VAR_13,
               &VAR_12
            );

   if (VAR_11 == VAR_6)
   {
      FUNC_10(
         VAR_13->rnc, VAR_12
      );

      FUNC_7(
         VAR_13->owning_port, &VAR_13->device_address
      );

      if (VAR_13->target_protocols.u.bits.attached_ssp_target)
      {
         VAR_13->has_ready_substate_machine = VAR_0;
      }
      else if (VAR_13->target_protocols.u.bits.attached_stp_target)
      {
         VAR_13->has_ready_substate_machine = VAR_7;

         FUNC_3(
            &VAR_13->ready_substate_machine,
            &VAR_13->parent.parent,
            VAR_9,
            VAR_5
         );
      }
      else if (VAR_13->target_protocols.u.bits.attached_smp_target)
      {
         VAR_13->has_ready_substate_machine = VAR_7;


         FUNC_3(
            &VAR_13->ready_substate_machine,
            &VAR_13->parent.parent,
            VAR_8,
            VAR_4
         );
      }

      VAR_13->connection_rate = FUNC_8(
                                        VAR_13->owning_port
                                     );


      VAR_13->device_port_width = 1;
   }

   return VAR_11;
}
