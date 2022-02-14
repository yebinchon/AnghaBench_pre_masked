
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_9__ {scalar_t__ clear_affiliation_during_controller_stop; } ;
struct TYPE_10__ {TYPE_2__ sas; } ;
struct TYPE_8__ {int state_machine; } ;
struct TYPE_11__ {scalar_t__ current_domain_to_clear_affiliation; TYPE_3__ user_parameters; TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef TYPE_4__ SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_5(
   SCI_BASE_CONTROLLER_T * VAR_4,
   U32 VAR_5
)
{
   SCIF_SAS_CONTROLLER_T * VAR_6 = (SCIF_SAS_CONTROLLER_T *)VAR_4;

   FUNC_0((
      FUNC_1(VAR_6),
      VAR_0 | VAR_1,
      "scif_sas_controller_ready_stop_handler(0x%x, 0x%x) enter\n",
      VAR_4, VAR_5
   ));

   FUNC_2(
      &VAR_6->parent.state_machine,
      VAR_2
   );

   if (VAR_6->user_parameters.sas.clear_affiliation_during_controller_stop)
   {
      VAR_6->current_domain_to_clear_affiliation = 0;



      FUNC_3(VAR_6);
   }
   else
      FUNC_4(VAR_6);


   return VAR_3;
}
