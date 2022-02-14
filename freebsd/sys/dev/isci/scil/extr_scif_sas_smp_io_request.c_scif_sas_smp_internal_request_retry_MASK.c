
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ U8 ;
struct TYPE_15__ {scalar_t__ retry_count; } ;
struct TYPE_12__ {int current_smp_request; int current_activity_phy_index; scalar_t__ io_retry_count; } ;
struct TYPE_13__ {TYPE_2__ smp_device; } ;
struct TYPE_14__ {TYPE_3__ protocol_device; TYPE_1__* domain; } ;
struct TYPE_11__ {int * controller; } ;
typedef int SCI_STATUS ;
typedef TYPE_4__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_5__ SCIF_SAS_IO_REQUEST_T ;
typedef int SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,int ,int *) ;
 int VAR_4 ;
 void* FUNC_3 (int *,TYPE_4__*,int ,int *,int *) ;
 void* FUNC_4 (int *,TYPE_4__*) ;
 void* FUNC_5 (int *,TYPE_4__*,int ) ;

SCI_STATUS FUNC_6(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_5
)
{
   SCIF_SAS_CONTROLLER_T * VAR_6;
   SCIF_SAS_IO_REQUEST_T * VAR_7;
   void * VAR_8 = ((void*)0);
   U8 VAR_9 = VAR_5->protocol_device.smp_device.io_retry_count;

   FUNC_0((
      FUNC_1(VAR_5),
      VAR_1 | VAR_0,
      "scif_sas_smp_internal_request_retry(0x%x, 0x%x) time %d!\n",
      VAR_5, VAR_9
   ));

   VAR_6 = VAR_5->domain->controller;

   switch (VAR_5->protocol_device.smp_device.current_smp_request)
   {
      case 129:
         VAR_8 = FUNC_4(
            VAR_6, VAR_5
         );
         break;

      case 130:


         VAR_8 = FUNC_3(
            VAR_6, VAR_5,
            VAR_5->protocol_device.smp_device.current_activity_phy_index,
            ((void*)0), ((void*)0)
         );

         break;

      case 128:
         VAR_8 = FUNC_5(
            VAR_6, VAR_5,
            VAR_5->protocol_device.smp_device.current_activity_phy_index
         );
         break;

      default:

         break;
   }

   if (VAR_8 != ((void*)0))
   {

      VAR_7 = (SCIF_SAS_IO_REQUEST_T *) VAR_8;
      VAR_7->retry_count = ++VAR_9;


      FUNC_2(
            VAR_6,
            VAR_4,
            VAR_6
         );

      return VAR_3;
   }
   else
      return VAR_2;

}
