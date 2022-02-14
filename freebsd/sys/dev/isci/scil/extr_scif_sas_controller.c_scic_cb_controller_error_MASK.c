
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state_machine; int error; } ;
struct TYPE_4__ {TYPE_1__ parent; } ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef int SCI_CONTROLLER_ERROR ;
typedef TYPE_2__ SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(
   SCI_CONTROLLER_HANDLE_T VAR_3,
   SCI_CONTROLLER_ERROR VAR_4
)
{
   SCIF_SAS_CONTROLLER_T *VAR_5 = (SCIF_SAS_CONTROLLER_T*)
                                         FUNC_3(VAR_3);

   VAR_5->parent.error = VAR_4;

   FUNC_0((
      FUNC_1(VAR_3),
      VAR_0 | VAR_1,
      "scic_cb_controller_not_ready(0x%x) enter\n",
      VAR_3
   ));

   FUNC_2(
      &VAR_5->parent.state_machine,
      VAR_2
   );
}
