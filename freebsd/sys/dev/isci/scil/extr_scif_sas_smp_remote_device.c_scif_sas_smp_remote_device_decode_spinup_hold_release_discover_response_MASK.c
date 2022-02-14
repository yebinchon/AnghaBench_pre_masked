
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_16__ ;
typedef struct TYPE_29__ TYPE_15__ ;
typedef struct TYPE_28__ TYPE_14__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


struct TYPE_39__ {scalar_t__ attached_device_type; scalar_t__ negotiated_physical_link_rate; } ;
struct TYPE_37__ {int current_activity_phy_index; } ;
struct TYPE_38__ {TYPE_7__ smp_device; } ;
struct TYPE_34__ {scalar_t__ attached_sata_device; scalar_t__ attached_stp_target; } ;
struct TYPE_35__ {TYPE_4__ bits; } ;
struct TYPE_36__ {TYPE_5__ u; } ;
struct TYPE_32__ {scalar_t__ negotiated_physical_link_rate; } ;
struct TYPE_33__ {TYPE_2__ sas2; } ;
struct TYPE_24__ {TYPE_9__ sas1_1; } ;
struct TYPE_29__ {TYPE_10__ u2; TYPE_6__ protocols; TYPE_3__ u4; } ;
struct TYPE_31__ {TYPE_15__ discover; } ;
struct TYPE_30__ {int parent; TYPE_12__* state_handlers; int core_object; TYPE_8__ protocol_device; int domain; } ;
struct TYPE_28__ {scalar_t__ function_result; } ;
struct TYPE_27__ {TYPE_14__ header; TYPE_1__ response; } ;
struct TYPE_25__ {int (* start_handler ) (int *) ;} ;
struct TYPE_26__ {TYPE_11__ parent; } ;
typedef TYPE_13__ SMP_RESPONSE_T ;
typedef TYPE_14__ SMP_RESPONSE_HEADER_T ;
typedef TYPE_15__ SMP_RESPONSE_DISCOVER_T ;
typedef int SCI_STATUS ;
typedef TYPE_16__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_16__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 TYPE_16__* FUNC_4 (int ,TYPE_16__*,int ) ;
 int FUNC_5 (TYPE_16__*,TYPE_15__*) ;
 int FUNC_6 (int *) ;

SCI_STATUS FUNC_7(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_7,
   SMP_RESPONSE_T * VAR_8
)
{
   SMP_RESPONSE_DISCOVER_T * VAR_9 = &VAR_8->response.discover;

   SMP_RESPONSE_HEADER_T * VAR_10 = &VAR_8->header;

   FUNC_1((
      FUNC_2(VAR_7),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_decode_spinup_hold_release_discover_response(0x%x, 0x%x) enter\n",
      VAR_7, VAR_8
   ));

   if (VAR_10->function_result != VAR_6)
   {



      FUNC_0((
         FUNC_2(VAR_7),
         VAR_1 | VAR_0,
         "Discover function result(0x%x)\n",
         VAR_10->function_result
      ));

      return VAR_2;
   }

   if ( VAR_9->u2.sas1_1.attached_device_type != VAR_5 )
   {
      if (VAR_9->u2.sas1_1.negotiated_physical_link_rate != VAR_4
          && VAR_9->u4.sas2.negotiated_physical_link_rate != VAR_4
          && ( VAR_9->protocols.u.bits.attached_stp_target
             ||VAR_9->protocols.u.bits.attached_sata_device )
         )
      {
         SCIF_SAS_REMOTE_DEVICE_T * VAR_11 =
            FUNC_4(
               VAR_7->domain,
               VAR_7,
               VAR_7->protocol_device.smp_device.current_activity_phy_index
            );


         FUNC_3(
            VAR_11->core_object,
            VAR_9->u2.sas1_1.negotiated_physical_link_rate
         );


         FUNC_5(
             VAR_7, VAR_9);



         return VAR_11->state_handlers->parent.start_handler(
                   &VAR_11->parent );
      }
      else
         return VAR_3;
   }
   else
      return VAR_3;
}
