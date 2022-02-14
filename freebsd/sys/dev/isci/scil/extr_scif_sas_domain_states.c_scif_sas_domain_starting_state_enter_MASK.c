
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int state_machine; } ;
struct TYPE_7__ {scalar_t__ is_port_ready; TYPE_1__ parent; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_2__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static
void FUNC_5(
   SCI_BASE_OBJECT_T * VAR_6
)
{
   SCIF_SAS_DOMAIN_T * VAR_7 = (SCIF_SAS_DOMAIN_T *)VAR_6;

   FUNC_1(
      VAR_7,
      VAR_5,
      VAR_3
   );

   FUNC_0((
      FUNC_2(VAR_7),
      VAR_0 | VAR_1,
      "scif_sas_domain_starting_state_enter(0x%x) enter\n",
      VAR_7
   ));

   FUNC_4(VAR_7);






   if (VAR_7->is_port_ready == VAR_4)
   {
      FUNC_3(
         &VAR_7->parent.state_machine, VAR_2
      );
   }
}
