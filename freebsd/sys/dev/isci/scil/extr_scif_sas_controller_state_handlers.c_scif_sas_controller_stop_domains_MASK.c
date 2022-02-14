
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t U8 ;
struct TYPE_10__ {scalar_t__ current_state_id; } ;
struct TYPE_9__ {TYPE_2__* domains; } ;
struct TYPE_7__ {TYPE_5__ state_machine; } ;
struct TYPE_8__ {TYPE_1__ parent; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_2__ SCIF_SAS_DOMAIN_T ;
typedef TYPE_3__ SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_5__*,int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCIF_SAS_CONTROLLER_T * VAR_6
)
{
   U8 VAR_7;
   SCI_STATUS VAR_8 = VAR_5;
   SCIF_SAS_DOMAIN_T * VAR_9;

   FUNC_0((
      FUNC_1(VAR_6),
      VAR_0,
      "scif_sas_controller_stop_domains(0x%x) enter\n",
      VAR_6
   ));

   for (VAR_7 = 0; VAR_7 < VAR_4 && VAR_8 == VAR_5; VAR_7++)
   {
      VAR_9 = &VAR_6->domains[VAR_7];



      if (VAR_9->parent.state_machine.current_state_id ==
             VAR_2
          || VAR_9->parent.state_machine.current_state_id ==
             VAR_1)
      {
         FUNC_2(
            &VAR_9->parent.state_machine, VAR_3
         );
      }
   }

   return VAR_8;
}
