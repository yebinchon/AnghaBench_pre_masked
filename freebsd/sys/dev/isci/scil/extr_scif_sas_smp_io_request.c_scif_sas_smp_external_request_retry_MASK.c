
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ U8 ;
struct TYPE_22__ {int pool; } ;
struct TYPE_25__ {TYPE_5__ hprq; } ;
struct TYPE_19__ {int list_element; TYPE_6__* device; } ;
struct TYPE_24__ {scalar_t__ retry_count; TYPE_2__ parent; } ;
struct TYPE_20__ {int current_smp_request; int current_activity_phy_index; } ;
struct TYPE_21__ {TYPE_3__ smp_device; } ;
struct TYPE_23__ {TYPE_4__ protocol_device; TYPE_1__* domain; } ;
struct TYPE_18__ {TYPE_8__* controller; } ;
typedef int SCI_STATUS ;
typedef TYPE_6__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_7__ SCIF_SAS_IO_REQUEST_T ;
typedef TYPE_8__ SCIF_SAS_CONTROLLER_T ;
typedef int POINTER_UINT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_8__*,int ,TYPE_8__*) ;
 int VAR_5 ;
 void* FUNC_6 (TYPE_8__*,TYPE_6__*,int ,void*,void*) ;
 void* FUNC_7 (TYPE_8__*,TYPE_6__*,int ,int ,void*,void*) ;

SCI_STATUS FUNC_8(
   SCIF_SAS_IO_REQUEST_T * VAR_6
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_7 = VAR_6->parent.device;
   SCIF_SAS_CONTROLLER_T * VAR_8;
   SCIF_SAS_IO_REQUEST_T * VAR_9;
   void * VAR_10 = ((void*)0);
   U8 VAR_11 = VAR_6->retry_count;

   FUNC_0((
      FUNC_1(VAR_7),
      VAR_2 | VAR_1,
      "scif_sas_smp_external_request_retry(0x%x) time %d!\n",
      VAR_6
   ));

   VAR_8 = VAR_7->domain->controller;




   FUNC_2(&VAR_6->parent.list_element);

   switch (VAR_7->protocol_device.smp_device.current_smp_request)
   {
      case 129:


         VAR_10 = FUNC_6(
            VAR_8, VAR_7,
            VAR_7->protocol_device.smp_device.current_activity_phy_index,
            (void *)FUNC_3(VAR_6),
            (void *)VAR_6
         );

         break;

      case 128:

         VAR_10 = FUNC_7(
            VAR_8, VAR_7, VAR_0,
            VAR_7->protocol_device.smp_device.current_activity_phy_index,
            (void *)FUNC_3(VAR_6),
            (void *)VAR_6
         );

         break;

      default:

         return VAR_3;
   }


   VAR_9 = (SCIF_SAS_IO_REQUEST_T *) VAR_10;
   VAR_9->retry_count = ++VAR_11;


   FUNC_4(VAR_8->hprq.pool, (POINTER_UINT) VAR_10);


   FUNC_5(
      VAR_8, VAR_5, VAR_8
   );

   return VAR_4;
}
