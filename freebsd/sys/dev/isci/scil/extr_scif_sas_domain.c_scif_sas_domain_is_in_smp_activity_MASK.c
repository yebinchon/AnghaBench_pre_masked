
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int remote_device_list; } ;
struct TYPE_12__ {int core_object; } ;
struct TYPE_9__ {scalar_t__ attached_smp_target; } ;
struct TYPE_10__ {TYPE_1__ bits; } ;
struct TYPE_11__ {TYPE_2__ u; } ;
typedef TYPE_3__ SMP_DISCOVER_RESPONSE_PROTOCOLS_T ;
typedef int SCI_ABSTRACT_ELEMENT_T ;
typedef TYPE_4__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_5__ SCIF_SAS_DOMAIN_T ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;

BOOL FUNC_5(
   SCIF_SAS_DOMAIN_T * VAR_2
)
{
   SCI_ABSTRACT_ELEMENT_T * VAR_3 =
      FUNC_0(&VAR_2->remote_device_list);

   SCIF_SAS_REMOTE_DEVICE_T * VAR_4;

   while ( VAR_3 != ((void*)0) )
   {
      SMP_DISCOVER_RESPONSE_PROTOCOLS_T VAR_5;

      VAR_4 = (SCIF_SAS_REMOTE_DEVICE_T *)
                       FUNC_2(VAR_3);

      FUNC_3(VAR_4->core_object,
                                       &VAR_5
      );

      if (VAR_5.u.bits.attached_smp_target &&
          FUNC_4(VAR_4))
         return VAR_1;

      VAR_3 =
         FUNC_1(VAR_3);
   }

   return VAR_0;
}
