
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_1__ ;
typedef struct TYPE_37__ TYPE_15__ ;
typedef struct TYPE_36__ TYPE_14__ ;
typedef struct TYPE_35__ TYPE_13__ ;
typedef struct TYPE_34__ TYPE_12__ ;
typedef struct TYPE_33__ TYPE_11__ ;
typedef struct TYPE_32__ TYPE_10__ ;


struct TYPE_46__ {int current_smp_request; int scheduled_activity; } ;
struct TYPE_43__ {int attached_stp_target; scalar_t__ attached_sata_device; scalar_t__ attached_smp_target; scalar_t__ attached_ssp_target; } ;
struct TYPE_44__ {TYPE_6__ bits; } ;
struct TYPE_45__ {TYPE_7__ u; } ;
struct TYPE_41__ {scalar_t__ negotiated_physical_link_rate; } ;
struct TYPE_42__ {TYPE_4__ sas2; } ;
struct TYPE_39__ {scalar_t__ attached_device_type; scalar_t__ negotiated_physical_link_rate; } ;
struct TYPE_40__ {TYPE_2__ sas1_1; } ;
struct TYPE_35__ {TYPE_8__ protocols; int phy_identifier; TYPE_5__ u4; TYPE_3__ u2; int attached_sas_address; } ;
struct TYPE_38__ {TYPE_13__ discover; } ;
struct TYPE_37__ {int controller; } ;
struct TYPE_32__ {TYPE_9__ smp_device; } ;
struct TYPE_36__ {scalar_t__ is_currently_discovered; scalar_t__ device_port_width; TYPE_10__ protocol_device; struct TYPE_36__* containing_device; int core_object; TYPE_15__* domain; } ;
struct TYPE_34__ {scalar_t__ function_result; } ;
struct TYPE_33__ {TYPE_12__ header; TYPE_1__ response; } ;
typedef TYPE_11__ SMP_RESPONSE_T ;
typedef TYPE_12__ SMP_RESPONSE_HEADER_T ;
typedef TYPE_13__ SMP_RESPONSE_DISCOVER_T ;
typedef int SCI_STATUS ;
typedef int SCI_SAS_ADDRESS_T ;
typedef TYPE_14__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_15__ SCIF_SAS_DOMAIN_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_14__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (TYPE_14__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_15__*,TYPE_14__*) ;
 int FUNC_5 (int ,TYPE_15__*,TYPE_14__*,TYPE_13__*) ;
 scalar_t__ FUNC_6 (TYPE_15__*,int *) ;
 TYPE_14__* FUNC_7 (TYPE_15__*,TYPE_14__*,int ) ;
 int FUNC_8 (TYPE_14__*,scalar_t__) ;
 int FUNC_9 (TYPE_14__*,TYPE_13__*) ;

SCI_STATUS FUNC_10(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_13,
   SMP_RESPONSE_T * VAR_14
)
{
   SCIF_SAS_DOMAIN_T * VAR_15 = VAR_13->domain;
   SCI_SAS_ADDRESS_T VAR_16;
   SCIF_SAS_REMOTE_DEVICE_T * VAR_17;
   SMP_RESPONSE_DISCOVER_T * VAR_18 =
      &VAR_14->response.discover;
   SMP_RESPONSE_HEADER_T * VAR_19 = &VAR_14->header;

   FUNC_1((
      FUNC_2(VAR_13),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_decode_initial_discover_response(0x%x, 0x%x) enter\n",
      VAR_13, VAR_14
   ));

   if (VAR_19->function_result == VAR_11)
   {
      return VAR_6;
   }
   else if (VAR_19->function_result != VAR_10)
   {



      FUNC_0((
         FUNC_2(VAR_13),
         VAR_1 | VAR_0,
         "Discover function result(0x%x)\n",
         VAR_19->function_result
      ));

      return VAR_3;
   }



   if ( ( VAR_18->u2.sas1_1.attached_device_type
             != VAR_9 )
       && ( VAR_18->protocols.u.bits.attached_ssp_target
           || VAR_18->protocols.u.bits.attached_stp_target
           || VAR_18->protocols.u.bits.attached_smp_target
           || VAR_18->protocols.u.bits.attached_sata_device ) )
   {
      VAR_16 = VAR_18->attached_sas_address;

      VAR_17 = (SCIF_SAS_REMOTE_DEVICE_T *)
         FUNC_6(
            VAR_15, &VAR_16
         );


      if (VAR_17 != VAR_4)
      {

         if ( VAR_17->is_currently_discovered == VAR_12
             && VAR_17 != VAR_13->containing_device )
         {

            VAR_17->device_port_width++;
         }
         else

         {

            VAR_17->is_currently_discovered = VAR_12;
         }


         if (VAR_17->device_port_width !=
                FUNC_3(VAR_17->core_object)
             && VAR_18->protocols.u.bits.attached_ssp_target
            )
         {
            FUNC_8(
               VAR_17, VAR_17->device_port_width);
         }


         if ( VAR_18->protocols.u.bits.attached_smp_target
             && VAR_17 != VAR_13->containing_device)
         {


            VAR_17->protocol_device.smp_device.scheduled_activity =
               VAR_2;
         }
      }
      else
      {

         FUNC_5(
            VAR_15->controller, VAR_15, VAR_13, VAR_18
         );



         if ( VAR_18->protocols.u.bits.attached_ssp_target
             || VAR_18->protocols.u.bits.attached_smp_target)
         {

            ;
         }
         else if ( (VAR_18->protocols.u.bits.attached_stp_target)
                 || (VAR_18->protocols.u.bits.attached_sata_device) )
         {


            VAR_18->protocols.u.bits.attached_stp_target = 1;


            VAR_13->protocol_device.smp_device.current_smp_request =
               VAR_8;
         }
      }
   }
   else if( (VAR_18->u2.sas1_1.negotiated_physical_link_rate == VAR_5
             || VAR_18->u4.sas2.negotiated_physical_link_rate == VAR_5)
          &&(VAR_18->protocols.u.bits.attached_stp_target
             || VAR_18->protocols.u.bits.attached_sata_device)
          )
   {
      VAR_17 = FUNC_7(
                                  VAR_15,
                                  VAR_13,
                                  VAR_18->phy_identifier
                               );

      if (VAR_17 != VAR_4)
      {






         FUNC_4(
            VAR_15->controller, VAR_15, VAR_17
         );
      }

      VAR_18->protocols.u.bits.attached_stp_target = 1;



      FUNC_5(
         VAR_15->controller, VAR_15, VAR_13, VAR_18
      );



      VAR_13->protocol_device.smp_device.current_smp_request =
         VAR_7;
   }


   return FUNC_9(
             VAR_13, VAR_18);
}
