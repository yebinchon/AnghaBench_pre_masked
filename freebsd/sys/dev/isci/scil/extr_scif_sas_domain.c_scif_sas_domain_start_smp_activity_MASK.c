
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int scheduled_activity; } ;
struct TYPE_8__ {TYPE_1__ smp_device; } ;
struct TYPE_9__ {TYPE_2__ protocol_device; } ;
typedef TYPE_3__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef int SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;

void FUNC_3(
  SCIF_SAS_DOMAIN_T * VAR_3
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_4 = ((void*)0);



   VAR_4 =
      FUNC_0(
         VAR_3,
         VAR_0
      );

   if (VAR_4 != ((void*)0))
   {
      FUNC_1(VAR_4);
      VAR_4->protocol_device.smp_device.scheduled_activity =
         VAR_2;
      return;
   }



   VAR_4 =
      FUNC_0(
         VAR_3,
         VAR_1
      );

   if (VAR_4 != ((void*)0))
      FUNC_2(VAR_4);
}
