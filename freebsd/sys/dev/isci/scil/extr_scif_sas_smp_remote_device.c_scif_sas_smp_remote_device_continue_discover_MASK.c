
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int controller; } ;
struct TYPE_12__ {int current_smp_request; int current_activity_phy_index; int number_of_phys; } ;
struct TYPE_13__ {TYPE_1__ smp_device; } ;
struct TYPE_14__ {TYPE_2__ protocol_device; TYPE_4__* domain; } ;
typedef TYPE_3__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_4__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;





 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,TYPE_3__*,int ,int *,int *) ;
 int FUNC_4 (int ,TYPE_3__*,int ,int ,int *,int *) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int ,TYPE_3__*,int ) ;

void FUNC_7(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_3
)
{
   SCIF_SAS_DOMAIN_T * VAR_4 = VAR_3->domain;

   FUNC_0((
      FUNC_1(VAR_3),
      VAR_2 | VAR_1,
      "scif_sas_smp_remote_device_continue_discover(0x%x) enter\n",
      VAR_3
   ));

   switch (VAR_3->protocol_device.smp_device.current_smp_request)
   {
      case 130:

         VAR_3->protocol_device.smp_device.current_smp_request =
            129;

         FUNC_5(
            VAR_4->controller, VAR_3
         );

         break;

      case 129:

         VAR_3->protocol_device.smp_device.current_activity_phy_index = 0;
         VAR_3->protocol_device.smp_device.current_smp_request =
            132;

         FUNC_3(
            VAR_4->controller,
            VAR_3,
            VAR_3->protocol_device.smp_device.current_activity_phy_index,
            ((void*)0), ((void*)0)
         );
         break;


      case 132:
         VAR_3->protocol_device.smp_device.current_activity_phy_index++;

         if ( (VAR_3->protocol_device.smp_device.current_activity_phy_index <
                  VAR_3->protocol_device.smp_device.number_of_phys) )
         {
            FUNC_3(
               VAR_4->controller,
               VAR_3,
               VAR_3->protocol_device.smp_device.current_activity_phy_index,
               ((void*)0), ((void*)0)
            );
         }
         else
            FUNC_2(VAR_3);
         break;


      case 128:
         FUNC_6(
            VAR_3->domain->controller,
            VAR_3,
            VAR_3->protocol_device.smp_device.current_activity_phy_index
         );

         break;


      case 131:
         FUNC_4(
            VAR_3->domain->controller,
            VAR_3,
            VAR_0,
            VAR_3->protocol_device.smp_device.current_activity_phy_index,
            ((void*)0),
            ((void*)0)
         );

         break;

      default:
         break;
   }
}
