
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int state_machine; } ;
struct TYPE_14__ {TYPE_3__ parent; int core_object; } ;
struct TYPE_10__ {scalar_t__ attached_smp_target; } ;
struct TYPE_11__ {TYPE_1__ bits; } ;
struct TYPE_13__ {TYPE_2__ u; } ;
typedef TYPE_4__ SMP_DISCOVER_RESPONSE_PROTOCOLS_T ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_5__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_4__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_7(
   SCI_BASE_REMOTE_DEVICE_T * VAR_4
)
{
   SCI_STATUS VAR_5;
   SCIF_SAS_REMOTE_DEVICE_T * VAR_6 = (SCIF_SAS_REMOTE_DEVICE_T *)
                                          VAR_4;

   SMP_DISCOVER_RESPONSE_PROTOCOLS_T VAR_7;
   FUNC_4(VAR_6->core_object, &VAR_7);


   if(VAR_7.u.bits.attached_smp_target)
      FUNC_6(VAR_6);

   VAR_5 = FUNC_3(VAR_6->core_object);
   if (VAR_5 == VAR_3)
   {
      FUNC_2(
         &VAR_6->parent.state_machine, VAR_2
      );

      FUNC_5(VAR_6);
   }
   else
   {
      FUNC_0((
         FUNC_1(VAR_6),
         VAR_0 | VAR_1,
         "Device:0x%x Status:0x%x failed to destruct core device\n",
         VAR_6
      ));
   }

   return VAR_5;
}
