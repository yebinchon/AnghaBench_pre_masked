
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
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

SCI_STATUS FUNC_4(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_7,
   SMP_RESPONSE_T * VAR_8
)
{
   SMP_RESPONSE_HEADER_T * VAR_9 = &VAR_8->header;

   FUNC_1((
      FUNC_2(VAR_7),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_decode_config_route_info_response(0x%x, 0x%x) enter\n",
      VAR_7, VAR_8
   ));

   if (VAR_9->function_result == VAR_6)
   {



      FUNC_3(VAR_7);

      return VAR_3;
   }
   else if (VAR_9->function_result != VAR_5)
   {



      FUNC_0((
         FUNC_2(VAR_7),
         VAR_1 | VAR_0,
         "Discover function result(0x%x)\n",
         VAR_9->function_result
      ));

      return VAR_2;
   }

   return VAR_4;
}
