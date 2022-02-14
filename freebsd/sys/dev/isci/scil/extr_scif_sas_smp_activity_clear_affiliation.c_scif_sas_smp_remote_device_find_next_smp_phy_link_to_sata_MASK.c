
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* end_device; } ;
struct TYPE_15__ {scalar_t__ attached_device_type; TYPE_2__ u; int list_element; } ;
struct TYPE_12__ {scalar_t__ attached_stp_target; } ;
struct TYPE_13__ {TYPE_3__ bits; } ;
struct TYPE_14__ {TYPE_4__ u; } ;
struct TYPE_10__ {int core_object; } ;
typedef TYPE_5__ SMP_DISCOVER_RESPONSE_PROTOCOLS_T ;
typedef int SCI_FAST_LIST_ELEMENT_T ;
typedef TYPE_6__ SCIF_SAS_SMP_PHY_T ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_5__*) ;

__attribute__((used)) static
SCIF_SAS_SMP_PHY_T * FUNC_3(
   SCIF_SAS_SMP_PHY_T * VAR_1
)
{
   SCI_FAST_LIST_ELEMENT_T * VAR_2 = &VAR_1->list_element;
   SCIF_SAS_SMP_PHY_T * VAR_3 = ((void*)0);

   while (VAR_2 != ((void*)0))
   {
      VAR_3 = (SCIF_SAS_SMP_PHY_T*) FUNC_1(VAR_2);
      VAR_2 = FUNC_0(VAR_2);

      if (VAR_3->attached_device_type == VAR_0
          && VAR_3->u.end_device != ((void*)0))
      {
         SMP_DISCOVER_RESPONSE_PROTOCOLS_T VAR_4;
         FUNC_2(
            VAR_3->u.end_device->core_object, &VAR_4);

         if (VAR_4.u.bits.attached_stp_target)
            return VAR_3;
      }
   }

   return ((void*)0);
}
