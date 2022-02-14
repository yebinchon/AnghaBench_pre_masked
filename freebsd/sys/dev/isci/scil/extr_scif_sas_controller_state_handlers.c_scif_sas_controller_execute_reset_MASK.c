
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int state_machine; } ;
struct TYPE_7__ {int operation_status; TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef TYPE_2__ SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_4(
   SCIF_SAS_CONTROLLER_T * VAR_4
)
{
   SCI_STATUS VAR_5;

   FUNC_0((
      FUNC_1(VAR_4),
      VAR_0 | VAR_1,
      "scif_sas_controller_execute_reset(0x%x) enter\n",
      VAR_4
   ));


   FUNC_3(VAR_4);

   FUNC_2(
      &VAR_4->parent.state_machine,
      VAR_2
   );



   VAR_5 = VAR_4->operation_status;
   VAR_4->operation_status = VAR_3;

   return VAR_5;
}
