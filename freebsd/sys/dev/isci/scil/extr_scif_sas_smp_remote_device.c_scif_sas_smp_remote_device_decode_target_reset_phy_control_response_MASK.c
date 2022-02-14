
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ function_result; } ;
struct TYPE_4__ {TYPE_2__ header; } ;
typedef TYPE_1__ SMP_RESPONSE_T ;
typedef TYPE_2__ SMP_RESPONSE_HEADER_T ;
typedef int SCI_STATUS ;
typedef int SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;

SCI_STATUS FUNC_3(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_5,
   SMP_RESPONSE_T * VAR_6
)
{
   SMP_RESPONSE_HEADER_T * VAR_7 = &VAR_6->header;

   SCI_STATUS VAR_8 = VAR_3;

   FUNC_1((
      FUNC_2(VAR_5),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_decode_target_reset_phy_control_response(0x%x, 0x%x) enter\n",
      VAR_5, VAR_6
   ));

   if (VAR_7->function_result != VAR_4)
   {



      FUNC_0((
         FUNC_2(VAR_5),
         VAR_1 | VAR_0,
         "Phy Control function unaccepted result(0x%x)\n",
         VAR_7->function_result
      ));

      VAR_8 = VAR_2;
   }


   return VAR_8;
}
