
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ current_state_id; } ;
struct TYPE_9__ {TYPE_1__ state_machine; } ;
struct TYPE_11__ {TYPE_2__ parent; } ;
struct TYPE_10__ {TYPE_4__* controller; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_3__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int VAR_4 ;

__attribute__((used)) static
void FUNC_4(
   SCI_BASE_OBJECT_T * VAR_5
)
{
   SCIF_SAS_DOMAIN_T * VAR_6 = (SCIF_SAS_DOMAIN_T *)VAR_5;

   FUNC_1(
      VAR_6,
      VAR_4,
      VAR_3
   );

   FUNC_0((
      FUNC_2(VAR_6),
      VAR_0 | VAR_1,
      "scif_sas_domain_stopped_state_enter(0x%x) enter\n",
      VAR_6
   ));






   if(VAR_6->controller->parent.state_machine.current_state_id
         == VAR_2)
      FUNC_3(VAR_6->controller, VAR_6);
}
