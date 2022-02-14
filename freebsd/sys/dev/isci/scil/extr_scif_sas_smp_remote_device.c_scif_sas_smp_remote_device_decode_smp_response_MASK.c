
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int current_smp_request; int current_activity; int * smp_activity_timer; } ;
struct TYPE_17__ {TYPE_2__ smp_device; } ;
struct TYPE_18__ {TYPE_3__ protocol_device; TYPE_1__* domain; } ;
struct TYPE_15__ {int controller; } ;
typedef int SMP_RESPONSE_T ;
typedef scalar_t__ SCI_STATUS ;
typedef scalar_t__ SCI_IO_STATUS ;
typedef int SCIF_SAS_REQUEST_T ;
typedef TYPE_4__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;






 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_4__*,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_8 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_9 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_10 (TYPE_4__*,int *) ;

SCI_STATUS FUNC_11(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_7,
   SCIF_SAS_REQUEST_T * VAR_8,
   void * VAR_9,
   SCI_IO_STATUS VAR_10
)
{
   SMP_RESPONSE_T * VAR_11 = (SMP_RESPONSE_T *)VAR_9;
   SCI_STATUS VAR_12 = VAR_5;

   if (VAR_7->protocol_device.smp_device.smp_activity_timer != ((void*)0))
   {


      FUNC_1(
         VAR_7->domain->controller,
         VAR_7->protocol_device.smp_device.smp_activity_timer
      );

      VAR_7->protocol_device.smp_device.smp_activity_timer = ((void*)0);
   }



   if (VAR_10 == VAR_4)
   {
      FUNC_2(
         VAR_7, VAR_8, VAR_4
      );

      return VAR_4;
   }


   switch (VAR_7->protocol_device.smp_device.current_smp_request)
   {
      case 130:
      {

         VAR_12 = FUNC_6(
            VAR_7, VAR_11
         );

         break;
      }

      case 129:
      {


         VAR_12 = VAR_6;
         break;
      }

      case 132:
      {
         if (VAR_7->protocol_device.smp_device.current_activity ==
                VAR_1)
         {

            VAR_12 = FUNC_5(
                        VAR_7, VAR_11
                     );
         }
         else if (VAR_7->protocol_device.smp_device.current_activity ==
                  VAR_3)
         {


            VAR_12 =
               FUNC_9(
                  VAR_7, VAR_11
               );
         }
         else if (VAR_7->protocol_device.smp_device.current_activity ==
                VAR_2)
         {

            VAR_12 =
               FUNC_8(
                  VAR_7, VAR_11
               );
         }
         else
            FUNC_0(0);
         break;
      }

      case 128:
      {

         VAR_12 = FUNC_7(
            VAR_7, VAR_11
         );

         break;
      }

      case 131:
      {
         if (VAR_7->protocol_device.smp_device.current_activity ==
                VAR_1)
         {

            VAR_12 = FUNC_4(
                        VAR_7, VAR_11
                     );
         }
         else if (VAR_7->protocol_device.smp_device.current_activity ==
                     VAR_3)
         {


            VAR_12 = FUNC_10(
                        VAR_7, VAR_11
                     );
         }
         else if (VAR_7->protocol_device.smp_device.current_activity ==
                     VAR_0)
         {

            VAR_12 = VAR_6;
         }
         else
            FUNC_0(0);
         break;
      }

      case 133:
      {



         VAR_12 = FUNC_3(
                     VAR_7, VAR_11
                  );
         break;
      }

      default:

         VAR_12 = VAR_5;
         break;
   }


   FUNC_2(
      VAR_7, VAR_8, VAR_12
   );

   return VAR_12;
}
