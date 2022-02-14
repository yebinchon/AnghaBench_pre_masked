
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {TYPE_4__* domain; } ;
struct TYPE_11__ {TYPE_2__* attached_phy; } ;
struct TYPE_13__ {scalar_t__ attached_device_type; int list_element; TYPE_3__ u; TYPE_6__* owning_device; } ;
struct TYPE_12__ {int * controller; } ;
struct TYPE_9__ {int * attached_phy; } ;
struct TYPE_10__ {TYPE_1__ u; int attached_device_type; } ;
typedef TYPE_5__ SCIF_SAS_SMP_PHY_T ;
typedef TYPE_6__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef int SCIF_SAS_CONTROLLER_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_5__*) ;

void FUNC_2(
   SCIF_SAS_SMP_PHY_T * VAR_3
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_4 = VAR_3->owning_device;
   SCIF_SAS_CONTROLLER_T * VAR_5 = VAR_4->domain->controller;

   if ( ( VAR_3->attached_device_type == VAR_0
         || VAR_3->attached_device_type == VAR_1)
       && VAR_3->u.attached_phy != ((void*)0) )
   {

      VAR_3->u.attached_phy->attached_device_type = VAR_2;
      VAR_3->u.attached_phy->u.attached_phy = ((void*)0);
   }


   FUNC_0(&VAR_3->list_element);
   FUNC_1(VAR_5, VAR_3);
}
