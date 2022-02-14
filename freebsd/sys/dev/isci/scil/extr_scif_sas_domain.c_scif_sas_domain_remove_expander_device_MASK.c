
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_20__ {int controller; } ;
struct TYPE_14__ {int * list_head; } ;
struct TYPE_17__ {TYPE_2__ smp_phy_list; } ;
struct TYPE_13__ {TYPE_5__ smp_device; } ;
struct TYPE_19__ {TYPE_1__ protocol_device; } ;
struct TYPE_16__ {TYPE_3__* attached_phy; TYPE_7__* end_device; } ;
struct TYPE_18__ {scalar_t__ attached_device_type; TYPE_4__ u; } ;
struct TYPE_15__ {TYPE_7__* owning_device; } ;
typedef int SCI_FAST_LIST_ELEMENT_T ;
typedef TYPE_5__ SCIF_SAS_SMP_REMOTE_DEVICE_T ;
typedef TYPE_6__ SCIF_SAS_SMP_PHY_T ;
typedef TYPE_7__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_8__ SCIF_SAS_DOMAIN_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_8__*,TYPE_7__*) ;

void FUNC_3(
   SCIF_SAS_DOMAIN_T * VAR_2,
   SCIF_SAS_REMOTE_DEVICE_T * VAR_3
)
{
   SCIF_SAS_SMP_REMOTE_DEVICE_T * VAR_4 =
      &VAR_3->protocol_device.smp_device;

   SCI_FAST_LIST_ELEMENT_T * VAR_5 = VAR_4->smp_phy_list.list_head;
   SCIF_SAS_SMP_PHY_T * VAR_6 = ((void*)0);
   SCIF_SAS_REMOTE_DEVICE_T * VAR_7 = ((void*)0);

   while (VAR_5 != ((void*)0))
   {
      VAR_6 = (SCIF_SAS_SMP_PHY_T*) FUNC_1(VAR_5);
      VAR_5 = FUNC_0(VAR_5);

      if ( VAR_6->attached_device_type != VAR_1
          && VAR_6->u.end_device != ((void*)0) )
      {
         if (VAR_6->attached_device_type == VAR_0)
            VAR_7 = VAR_6->u.end_device;
         else
            VAR_7 = VAR_6->u.attached_phy->owning_device;

         FUNC_2(VAR_2->controller, VAR_2, VAR_7);
      }
   }


   FUNC_2(VAR_2->controller, VAR_2, VAR_3);
}
