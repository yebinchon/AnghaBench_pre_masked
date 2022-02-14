
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {TYPE_6__* curr_clear_affiliation_phy; } ;
struct TYPE_13__ {TYPE_5__ smp_device; } ;
struct TYPE_18__ {TYPE_1__* domain; TYPE_2__ protocol_device; } ;
struct TYPE_15__ {TYPE_3__* next; } ;
struct TYPE_17__ {int phy_identifier; TYPE_4__ list_element; } ;
struct TYPE_14__ {int object; } ;
struct TYPE_12__ {int controller; } ;
typedef TYPE_5__ SCIF_SAS_SMP_REMOTE_DEVICE_T ;
typedef TYPE_6__ SCIF_SAS_SMP_PHY_T ;
typedef TYPE_7__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int ,TYPE_7__*,int ,int ,int *,int *) ;

void FUNC_3(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_1
)
{
   SCIF_SAS_SMP_REMOTE_DEVICE_T * VAR_2 =
      &VAR_1->protocol_device.smp_device;


   SCIF_SAS_SMP_PHY_T * VAR_3 = ((void*)0);

   if (VAR_2->curr_clear_affiliation_phy->list_element.next != ((void*)0))
   {
      VAR_3 =
         FUNC_0(
            VAR_2->curr_clear_affiliation_phy->list_element.next->object
         );
   }

   if (VAR_3 != ((void*)0))
   {
      VAR_2->curr_clear_affiliation_phy = VAR_3;


      FUNC_2(
         VAR_1->domain->controller,
         VAR_1,
         VAR_0,
         VAR_3->phy_identifier,
         ((void*)0),
         ((void*)0)
      );
   }
   else
      FUNC_1(VAR_1);
}
