
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int current_smp_request; } ;
struct TYPE_9__ {TYPE_2__ smp_device; } ;
struct TYPE_13__ {TYPE_1__ protocol_device; } ;
struct TYPE_12__ {scalar_t__ function_result; } ;
struct TYPE_11__ {TYPE_4__ header; } ;
typedef TYPE_3__ SMP_RESPONSE_T ;
typedef TYPE_4__ SMP_RESPONSE_HEADER_T ;
typedef int SCI_STATUS ;
typedef TYPE_5__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_5__*) ;

SCI_STATUS FUNC_3(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_6,
   SMP_RESPONSE_T * VAR_7
)
{
   SMP_RESPONSE_HEADER_T * VAR_8 = &VAR_7->header;

   SCI_STATUS VAR_9 = VAR_3;

   FUNC_1((
      FUNC_2(VAR_6),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_decode_discover_phy_control_response(0x%x, 0x%x) enter\n",
      VAR_6, VAR_7
   ));

   if (VAR_8->function_result != VAR_5)
   {



      FUNC_0((
         FUNC_2(VAR_6),
         VAR_1 | VAR_0,
         "Phy Control function unaccepted result(0x%x)\n",
         VAR_8->function_result
      ));

      return VAR_2;
   }


   VAR_6->protocol_device.smp_device.current_smp_request =
      VAR_4;


   return VAR_9;
}
