
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {TYPE_2__* controller; int remote_device_list; } ;
struct TYPE_15__ {int core_object; } ;
struct TYPE_13__ {scalar_t__ attached_smp_target; } ;
struct TYPE_11__ {TYPE_3__ bits; } ;
struct TYPE_14__ {TYPE_1__ u; } ;
struct TYPE_12__ {int hprq; } ;
typedef TYPE_4__ SMP_DISCOVER_RESPONSE_PROTOCOLS_T ;
typedef int SCI_ABSTRACT_ELEMENT_T ;
typedef TYPE_5__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_6__ SCIF_SAS_DOMAIN_T ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_4__*) ;
 int FUNC_4 (int *,TYPE_6__*) ;
 int FUNC_5 (TYPE_5__*) ;

void FUNC_6(
   SCIF_SAS_DOMAIN_T * VAR_0
)
{
   SCI_ABSTRACT_ELEMENT_T * VAR_1 =
      FUNC_0(&VAR_0->remote_device_list);

   SCIF_SAS_REMOTE_DEVICE_T * VAR_2;


   FUNC_4(
      &VAR_0->controller->hprq, VAR_0
   );

   while ( VAR_1 != ((void*)0) )
   {
      SMP_DISCOVER_RESPONSE_PROTOCOLS_T VAR_3;

      VAR_2 = (SCIF_SAS_REMOTE_DEVICE_T *)
                       FUNC_2(VAR_1);

      FUNC_3(VAR_2->core_object,
                                       &VAR_3
      );

      if (VAR_3.u.bits.attached_smp_target)
      {
         FUNC_5(VAR_2);
      }

      VAR_1 =
         FUNC_1(VAR_1);
   }
}
