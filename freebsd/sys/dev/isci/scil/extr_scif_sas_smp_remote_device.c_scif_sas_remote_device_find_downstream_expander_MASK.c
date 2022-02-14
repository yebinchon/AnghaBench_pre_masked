
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int * list_head; } ;
struct TYPE_17__ {TYPE_5__* curr_config_route_destination_smp_phy; TYPE_1__ smp_phy_list; } ;
struct TYPE_15__ {TYPE_6__ smp_device; } ;
struct TYPE_19__ {TYPE_4__ protocol_device; } ;
struct TYPE_14__ {TYPE_2__* attached_phy; } ;
struct TYPE_18__ {scalar_t__ routing_attribute; scalar_t__ attached_device_type; TYPE_3__ u; } ;
struct TYPE_16__ {scalar_t__ owning_device; } ;
struct TYPE_13__ {TYPE_8__* owning_device; } ;
typedef int SCI_FAST_LIST_ELEMENT_T ;
typedef TYPE_6__ SCIF_SAS_SMP_REMOTE_DEVICE_T ;
typedef TYPE_7__ SCIF_SAS_SMP_PHY_T ;
typedef TYPE_8__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_8__*) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

SCIF_SAS_REMOTE_DEVICE_T * FUNC_4(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_4
)
{
   SCIF_SAS_SMP_REMOTE_DEVICE_T * VAR_5 =
      &VAR_4->protocol_device.smp_device;

   SCIF_SAS_REMOTE_DEVICE_T * VAR_6 = ((void*)0);

   SCI_FAST_LIST_ELEMENT_T * VAR_7 = VAR_5->smp_phy_list.list_head;
   SCIF_SAS_SMP_PHY_T * VAR_8 = ((void*)0);

   FUNC_0((
      FUNC_1(VAR_4),
      VAR_1 | VAR_0,
      "scif_sas_remote_device_find_downstream_expander(0x%x) enter\n",
      VAR_4
   ));

   while (VAR_7 != ((void*)0))
   {
      VAR_8 = (SCIF_SAS_SMP_PHY_T*) FUNC_3(VAR_7);
      VAR_7 = FUNC_2(VAR_7);

      if ( VAR_8->routing_attribute == VAR_3
          && VAR_8->attached_device_type == VAR_2
          && VAR_8->u.attached_phy != ((void*)0))
      {


         VAR_6 = VAR_8->u.attached_phy->owning_device;

         if ( VAR_6->protocol_device.smp_device.curr_config_route_destination_smp_phy != ((void*)0)
             && VAR_6->protocol_device.smp_device.curr_config_route_destination_smp_phy->owning_device ==
                VAR_5->curr_config_route_destination_smp_phy->owning_device )
            return VAR_6;
      }
   }

   return ((void*)0);
}
