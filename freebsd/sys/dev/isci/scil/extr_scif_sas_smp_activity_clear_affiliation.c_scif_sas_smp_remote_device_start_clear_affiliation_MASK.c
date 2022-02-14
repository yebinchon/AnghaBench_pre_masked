
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* list_head; } ;
struct TYPE_17__ {int scheduled_activity; int current_smp_request; int current_activity; TYPE_6__* curr_clear_affiliation_phy; TYPE_2__ smp_phy_list; } ;
struct TYPE_15__ {TYPE_5__ smp_device; } ;
struct TYPE_19__ {TYPE_4__* domain; TYPE_3__ protocol_device; } ;
struct TYPE_18__ {int phy_identifier; } ;
struct TYPE_16__ {int controller; } ;
struct TYPE_13__ {scalar_t__ object; } ;
typedef TYPE_5__ SCIF_SAS_SMP_REMOTE_DEVICE_T ;
typedef TYPE_6__ SCIF_SAS_SMP_PHY_T ;
typedef TYPE_7__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_4 ;
 TYPE_6__* FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (int ,TYPE_7__*,int ,int ,int *,int *) ;

void FUNC_4(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_5
)
{
   SCIF_SAS_SMP_REMOTE_DEVICE_T * VAR_6 =
      &VAR_5->protocol_device.smp_device;

   SCIF_SAS_SMP_PHY_T * VAR_7 = ((void*)0);

   if (VAR_6->smp_phy_list.list_head != ((void*)0))
   {
      VAR_7 =
         FUNC_1(
            (SCIF_SAS_SMP_PHY_T *)VAR_6->smp_phy_list.list_head->object
         );
   }

   if (VAR_7 != ((void*)0))
   {
      VAR_6->curr_clear_affiliation_phy = VAR_7;


      VAR_5->protocol_device.smp_device.current_activity =
         VAR_1;


      VAR_5->protocol_device.smp_device.current_smp_request =
         VAR_3;


      VAR_5->protocol_device.smp_device.scheduled_activity =
         VAR_2;


      FUNC_3(
         VAR_5->domain->controller,
         VAR_5,
         VAR_0,
         VAR_7->phy_identifier,
         ((void*)0),
         ((void*)0)
      );


      FUNC_0(
         VAR_5->domain->controller,
         VAR_4,
         VAR_5->domain->controller
      );
   }
   else
      FUNC_2(VAR_5);
}
