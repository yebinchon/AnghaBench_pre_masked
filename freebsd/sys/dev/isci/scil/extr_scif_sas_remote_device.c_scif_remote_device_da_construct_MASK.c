
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct TYPE_30__ {TYPE_15__* domain; int parent; TYPE_6__* state_handlers; int core_object; int device_port_width; } ;
struct TYPE_29__ {scalar_t__ low; scalar_t__ high; } ;
struct TYPE_24__ {scalar_t__ smp_target; scalar_t__ stp_target; } ;
struct TYPE_25__ {TYPE_3__ bits; } ;
struct TYPE_28__ {TYPE_4__ u; } ;
struct TYPE_26__ {scalar_t__ (* start_handler ) (int *) ;} ;
struct TYPE_27__ {TYPE_5__ parent; } ;
struct TYPE_22__ {scalar_t__ low; scalar_t__ high; } ;
struct TYPE_23__ {TYPE_1__ sas_address; } ;
struct TYPE_21__ {int remote_device_list; int core_object; } ;
struct TYPE_20__ {int phy_mask; TYPE_2__ remote; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_7__ SCI_SAS_IDENTIFY_ADDRESS_FRAME_PROTOCOLS_T ;
typedef TYPE_8__ SCI_SAS_ADDRESS_T ;
typedef scalar_t__ SCI_REMOTE_DEVICE_HANDLE_T ;
typedef TYPE_9__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_10__ SCIC_PORT_PROPERTIES_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *,TYPE_9__*) ;
 int FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (int ,TYPE_10__*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_15__*,TYPE_8__*) ;
 int FUNC_9 (TYPE_9__*) ;
 int FUNC_10 (TYPE_9__*) ;
 scalar_t__ FUNC_11 (int *) ;

SCI_STATUS FUNC_12(
   SCI_REMOTE_DEVICE_HANDLE_T VAR_6,
   SCI_SAS_ADDRESS_T * VAR_7,
   SCI_SAS_IDENTIFY_ADDRESS_FRAME_PROTOCOLS_T * VAR_8
)
{
   SCI_STATUS VAR_9 = VAR_5;
   SCIF_SAS_REMOTE_DEVICE_T * VAR_10 = (SCIF_SAS_REMOTE_DEVICE_T *)
                                          VAR_6;

   FUNC_1((
      FUNC_5(VAR_10),
      VAR_1,
      "scif_remote_device_da_construct(0x%x, 0x%x, 0x%x) enter\n",
      VAR_6, VAR_7, VAR_8
   ));



   if (FUNC_8(VAR_10->domain, VAR_7)
       == VAR_4)
   {
      SCIC_PORT_PROPERTIES_T VAR_11;

      FUNC_6(VAR_10->domain->core_object, &VAR_11);


      if ( (VAR_7->low == VAR_11.remote.sas_address.low)
         && (VAR_7->high == VAR_11.remote.sas_address.high) )
      {

         FUNC_3(VAR_11.phy_mask, VAR_10->device_port_width);

         VAR_9 = FUNC_7(VAR_10->core_object);
      }
      else


         VAR_9 = VAR_3;
   }
   else
      VAR_9 = VAR_2;

   if (VAR_9 == VAR_5)
   {

      FUNC_4(
         &VAR_10->domain->remote_device_list, VAR_10
      );


      if (VAR_8->u.bits.stp_target)
         FUNC_10(VAR_10);
      else if (VAR_8->u.bits.smp_target)
         FUNC_9(VAR_10);

      FUNC_0((
         FUNC_5(VAR_10),
         VAR_1 | VAR_0,
         "Domain:0x%x SasAddress:0x%x,0x%x remote device constructed\n",
         VAR_10->domain, VAR_7->low, VAR_7->high
      ));

      VAR_9 = VAR_10->state_handlers->parent.start_handler(
                  &VAR_10->parent
               );
   }
   else
   {
      FUNC_2((
         FUNC_5(VAR_10),
         VAR_1 | VAR_0,
         "Domain:0x%x SasAddress:0x%x,0x%x Status:0x%x remote device construct failure\n",
         VAR_10->domain, VAR_7->low, VAR_7->high, VAR_9
      ));
   }

   return VAR_9;
}
