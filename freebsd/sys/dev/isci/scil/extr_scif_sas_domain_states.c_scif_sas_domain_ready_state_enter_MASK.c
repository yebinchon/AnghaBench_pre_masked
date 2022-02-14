
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ previous_state_id; } ;
struct TYPE_11__ {TYPE_7__ state_machine; } ;
struct TYPE_10__ {scalar_t__ status; } ;
struct TYPE_12__ {scalar_t__ broadcast_change_count; int core_object; TYPE_2__ parent; int controller; TYPE_1__ operation; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_3__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_7__*,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int ,TYPE_3__*) ;
 int VAR_6 ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static
void FUNC_8(
   SCI_BASE_OBJECT_T * VAR_7
)
{
   SCIF_SAS_DOMAIN_T * VAR_8 = (SCIF_SAS_DOMAIN_T *)VAR_7;

   FUNC_1(
      VAR_8,
      VAR_6,
      VAR_3
   );

   FUNC_0((
      FUNC_2(VAR_8),
      VAR_0 | VAR_1,
      "scif_sas_domain_ready_state_enter(0x%x) enter\n",
      VAR_8
   ));

   if (VAR_8->parent.state_machine.previous_state_id
       == VAR_4)
   {
      FUNC_6(VAR_8->controller, VAR_8);






      FUNC_5(VAR_8->controller, VAR_8);
   }
   else if (VAR_8->parent.state_machine.previous_state_id
            == VAR_2)
   {




      if (VAR_8->operation.status == VAR_5)
         VAR_8->broadcast_change_count = 0;



      if (VAR_8->broadcast_change_count == 0)
      {
         FUNC_7(VAR_8);
         FUNC_6(VAR_8->controller, VAR_8);
      }
      else
      {



         FUNC_3(
            &VAR_8->parent.state_machine, VAR_2
         );
      }



      FUNC_4(VAR_8->core_object);
   }
}
