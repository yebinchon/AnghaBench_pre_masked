
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ U8 ;
struct TYPE_17__ {int remote_device_list; } ;
struct TYPE_11__ {scalar_t__ scheduled_activity; } ;
struct TYPE_12__ {TYPE_1__ smp_device; } ;
struct TYPE_16__ {TYPE_2__ protocol_device; int core_object; } ;
struct TYPE_13__ {scalar_t__ attached_smp_target; } ;
struct TYPE_14__ {TYPE_3__ bits; } ;
struct TYPE_15__ {TYPE_4__ u; } ;
typedef TYPE_5__ SMP_DISCOVER_RESPONSE_PROTOCOLS_T ;
typedef int SCI_ABSTRACT_ELEMENT_T ;
typedef TYPE_6__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_7__ SCIF_SAS_DOMAIN_T ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_5__*) ;

SCIF_SAS_REMOTE_DEVICE_T * FUNC_4(
   SCIF_SAS_DOMAIN_T * VAR_0,
   U8 VAR_1
)
{
   SCI_ABSTRACT_ELEMENT_T * VAR_2 =
      FUNC_0(&VAR_0->remote_device_list);

   SCIF_SAS_REMOTE_DEVICE_T * VAR_3;
   SMP_DISCOVER_RESPONSE_PROTOCOLS_T VAR_4;


   while ( VAR_2 != ((void*)0) )
   {
      VAR_3 = (SCIF_SAS_REMOTE_DEVICE_T *)
                       FUNC_2(VAR_2);

      FUNC_3(VAR_3->core_object,
                                       &VAR_4);

      VAR_2 =
         FUNC_1(VAR_2);

      if ( VAR_4.u.bits.attached_smp_target
          && VAR_3->protocol_device.smp_device.scheduled_activity ==
                VAR_1)
      {
         return VAR_3;
      }
   }

   return ((void*)0);
}
