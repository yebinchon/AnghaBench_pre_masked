
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int status; int timer; } ;
struct TYPE_8__ {scalar_t__ previous_state_id; } ;
struct TYPE_9__ {TYPE_1__ state_machine; } ;
struct TYPE_11__ {TYPE_3__ operation; int controller; TYPE_2__ parent; } ;
typedef TYPE_4__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,TYPE_4__*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static
void FUNC_5(
   SCIF_SAS_DOMAIN_T * VAR_3
)
{
   FUNC_0((
      FUNC_1(VAR_3),
      VAR_0 | VAR_1,
      "scif_sas_domain_transition_from_discovering_state(0x%x) enter\n",
      VAR_3
   ));

   if (VAR_3->parent.state_machine.previous_state_id
       == VAR_2)
   {
      FUNC_4(VAR_3->controller);

      FUNC_3(VAR_3->controller, VAR_3->operation.timer);

      FUNC_2(
         VAR_3->controller, VAR_3, VAR_3->operation.status
      );
   }
}
