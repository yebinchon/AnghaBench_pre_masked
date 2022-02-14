
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_29__ {int high; int low; } ;
struct TYPE_23__ {scalar_t__ attached_stp_target; scalar_t__ attached_smp_target; } ;
struct TYPE_24__ {TYPE_3__ bits; } ;
struct TYPE_25__ {TYPE_4__ u; } ;
struct TYPE_28__ {TYPE_5__ protocols; TYPE_9__ attached_sas_address; } ;
struct TYPE_26__ {scalar_t__ (* start_handler ) (int *) ;} ;
struct TYPE_27__ {TYPE_6__ parent; } ;
struct TYPE_21__ {int current_activity_phy_index; } ;
struct TYPE_22__ {TYPE_1__ smp_device; } ;
struct TYPE_20__ {int remote_device_list; } ;
struct TYPE_19__ {TYPE_14__* domain; int parent; TYPE_7__* state_handlers; int core_object; TYPE_2__ protocol_device; int expander_phy_identifier; struct TYPE_19__* containing_device; } ;
typedef TYPE_8__ SMP_RESPONSE_DISCOVER_T ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_9__ SCI_SAS_ADDRESS_T ;
typedef scalar_t__ SCI_REMOTE_DEVICE_HANDLE_T ;
typedef TYPE_10__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,TYPE_10__*) ;
 int FUNC_4 (TYPE_10__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_8__*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_14__*,TYPE_9__*) ;
 int FUNC_8 (TYPE_10__*) ;
 int FUNC_9 (TYPE_10__*) ;
 scalar_t__ FUNC_10 (int *) ;

SCI_STATUS FUNC_11(
   SCI_REMOTE_DEVICE_HANDLE_T VAR_6,
   SCI_REMOTE_DEVICE_HANDLE_T VAR_7,
   SMP_RESPONSE_DISCOVER_T * VAR_8
)
{
   SCI_SAS_ADDRESS_T * VAR_9;
   SCI_STATUS VAR_10 = VAR_5;
   SCIF_SAS_REMOTE_DEVICE_T * VAR_11 = (SCIF_SAS_REMOTE_DEVICE_T *)
                                              VAR_6;
   SCIF_SAS_REMOTE_DEVICE_T * VAR_12 = (SCIF_SAS_REMOTE_DEVICE_T *)
                                              VAR_7;

   VAR_11->containing_device = VAR_12;
   VAR_11->expander_phy_identifier =
      VAR_12->protocol_device.smp_device.current_activity_phy_index;

   VAR_9 = &VAR_8->attached_sas_address;

   FUNC_1((
      FUNC_4(VAR_11),
      VAR_1,
      "scif_remote_device_ea_construct(0x%x, 0x%x) enter\n",
      VAR_6, VAR_8
   ));



   if (FUNC_7(VAR_11->domain, VAR_9)
       == VAR_3)
   {


      VAR_10 = FUNC_5(VAR_11->core_object, VAR_8);
   }
   else
      VAR_10 = VAR_2;

   if (VAR_10 == VAR_5)
   {

      FUNC_3(
         &VAR_11->domain->remote_device_list, VAR_11
      );

      if (VAR_8->protocols.u.bits.attached_smp_target)
         FUNC_8(VAR_11);
      else if (VAR_8->protocols.u.bits.attached_stp_target)
         FUNC_9(VAR_11);

      FUNC_0((
         FUNC_4(VAR_11),
         VAR_1 | VAR_0,
         "Domain:0x%x SasAddress:0x%x,0x%x remote device constructed\n",
         VAR_11->domain, VAR_9->low, VAR_9->high
      ));


      if ( FUNC_6(VAR_11->core_object) !=
              VAR_4 )
      {
          VAR_10 = VAR_11->state_handlers->parent.start_handler(
                      &VAR_11->parent
                   );
      }
   }
   else
   {
      FUNC_2((
         FUNC_4(VAR_11),
         VAR_1 | VAR_0,
         "Domain:0x%x SasAddress:0x%x,0x%x Status:0x%x remote device construct failure\n",
         VAR_11->domain, VAR_9->low, VAR_9->high, VAR_10
      ));
   }

   return VAR_10;
}
