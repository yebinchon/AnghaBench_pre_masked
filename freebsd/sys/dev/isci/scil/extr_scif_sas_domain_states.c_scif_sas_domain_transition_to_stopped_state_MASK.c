
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int state_machine; } ;
struct TYPE_6__ {scalar_t__ element_count; } ;
struct TYPE_8__ {scalar_t__ device_start_count; TYPE_2__ parent; TYPE_1__ request_list; } ;
typedef TYPE_3__ SCIF_SAS_DOMAIN_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(
   SCIF_SAS_DOMAIN_T * VAR_3
)
{
   FUNC_1((
      FUNC_2(VAR_3),
      VAR_0 | VAR_1,
      "scif_sas_domain_transition_to_stopped_state(0x%x) enter\n",
      VAR_3
   ));



   if ( (VAR_3->request_list.element_count == 0)
      && (VAR_3->device_start_count == 0) )
   {
      FUNC_0((
         FUNC_2(VAR_3),
         VAR_0 | VAR_1,
         "Domain:0x%x immediate transition to STOPPED\n",
         VAR_3
      ));

      FUNC_3(
         &VAR_3->parent.state_machine, VAR_2
      );
   }
}
