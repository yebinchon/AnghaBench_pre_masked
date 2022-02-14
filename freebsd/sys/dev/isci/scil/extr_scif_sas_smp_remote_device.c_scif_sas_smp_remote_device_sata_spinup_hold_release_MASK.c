
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int * controller; } ;
struct TYPE_11__ {int current_activity_phy_index; int current_smp_request; } ;
struct TYPE_12__ {TYPE_1__ smp_device; } ;
struct TYPE_13__ {TYPE_2__ protocol_device; int expander_phy_identifier; TYPE_4__* domain; } ;
typedef TYPE_3__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_4__ SCIF_SAS_DOMAIN_T ;
typedef int SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int ,int *) ;
 int VAR_3 ;
 TYPE_3__* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_3__*,int ,int *,int *) ;

void FUNC_6(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_4
)
{
   SCIF_SAS_DOMAIN_T * VAR_5 = VAR_4->domain;
   SCIF_SAS_CONTROLLER_T * VAR_6 = VAR_5->controller;
   SCIF_SAS_REMOTE_DEVICE_T * VAR_7 = ((void*)0);

   FUNC_0((
      FUNC_1(VAR_4),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_sata_spinup_hold_release(0x%x) enter\n",
      VAR_4
   ));



   VAR_7 = FUNC_3(VAR_5);

   if (VAR_7 != ((void*)0))
   {

      VAR_4->protocol_device.smp_device.current_smp_request =
         VAR_2;

      VAR_4->protocol_device.smp_device.current_activity_phy_index =
        VAR_7->expander_phy_identifier;

      FUNC_5(
         VAR_5->controller,
         VAR_4,
         VAR_4->protocol_device.smp_device.current_activity_phy_index,
         ((void*)0), ((void*)0)
      );


      FUNC_2(
         VAR_6, VAR_3, VAR_6
      );
   }
   else
      FUNC_4 (VAR_4);
}
