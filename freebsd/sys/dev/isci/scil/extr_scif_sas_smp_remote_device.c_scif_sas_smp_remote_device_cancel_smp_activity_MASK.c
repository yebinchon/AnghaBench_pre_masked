
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ current_activity; } ;
struct TYPE_10__ {TYPE_1__ smp_device; } ;
struct TYPE_11__ {TYPE_2__ protocol_device; int domain; } ;
typedef TYPE_3__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,TYPE_3__*,int *,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;

void FUNC_5(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_3
)
{
   FUNC_0((
      FUNC_1(VAR_3),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_cancel_smp_activity(0x%x) enter\n",
      VAR_3
   ));


   FUNC_2(
      VAR_3->domain, VAR_3, ((void*)0), ((void*)0)
   );

   if (VAR_3->protocol_device.smp_device.current_activity ==
          VAR_2)
      FUNC_3(VAR_3);


   FUNC_4(VAR_3);
}
