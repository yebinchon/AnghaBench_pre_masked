
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_17__ {int * domain; } ;
struct TYPE_11__ {scalar_t__ attached_device_type; } ;
struct TYPE_12__ {TYPE_1__ sas1_1; } ;
struct TYPE_16__ {int attached_sas_address; TYPE_2__ u2; } ;
struct TYPE_15__ {scalar_t__ function_result; } ;
struct TYPE_13__ {TYPE_6__ discover; } ;
struct TYPE_14__ {TYPE_5__ header; TYPE_3__ response; } ;
typedef TYPE_4__ SMP_RESPONSE_T ;
typedef TYPE_5__ SMP_RESPONSE_HEADER_T ;
typedef TYPE_6__ SMP_RESPONSE_DISCOVER_T ;
typedef int SCI_STATUS ;
typedef int SCI_SAS_ADDRESS_T ;
typedef TYPE_7__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef int SCIF_SAS_DOMAIN_T ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (TYPE_7__*) ;
 scalar_t__ FUNC_4 (int *,int *) ;

SCI_STATUS FUNC_5(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_7,
   SMP_RESPONSE_T * VAR_8
)
{
   SCIF_SAS_DOMAIN_T * VAR_9;
   SCI_SAS_ADDRESS_T VAR_10;
   SMP_RESPONSE_DISCOVER_T * VAR_11 =
      &VAR_8->response.discover;

   SMP_RESPONSE_HEADER_T * VAR_12 = &VAR_8->header;

   FUNC_2((
      FUNC_3(VAR_7),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_decode_target_reset_discover_response(0x%x, 0x%x) enter\n",
      VAR_7, VAR_8
   ));

   if (VAR_12->function_result != VAR_6)
   {



      FUNC_1((
         FUNC_3(VAR_7),
         VAR_1 | VAR_0,
         "Discover function result(0x%x)\n",
         VAR_12->function_result
      ));

      return VAR_2;
   }


   if ( VAR_11->u2.sas1_1.attached_device_type != VAR_5 )
   {
      VAR_9 = VAR_7->domain;
      VAR_10 = VAR_11->attached_sas_address;


      FUNC_0(FUNC_4(
                VAR_9,
                &VAR_10
             ) != VAR_3);
      return VAR_4;
   }
   else
      return VAR_2;
}
