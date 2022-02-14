
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int controller; } ;
struct TYPE_9__ {TYPE_2__* domain; } ;
typedef TYPE_1__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_2__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_2,
   SCIF_SAS_REMOTE_DEVICE_T * VAR_3
)
{
   SCIF_SAS_DOMAIN_T * VAR_4 = VAR_2->domain;

   FUNC_0((
      FUNC_1(VAR_2),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_fail_target_spinup_hold_release(0x%x, 0x%x) enter\n",
      VAR_2, VAR_3
   ));



   FUNC_2(
      VAR_4->controller, VAR_4, VAR_3
   );


   FUNC_3(VAR_2);
}
