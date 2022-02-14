
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state_machine; } ;
struct TYPE_5__ {TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_2__ SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;

void FUNC_5(
   SCI_CONTROLLER_HANDLE_T VAR_5,
   SCI_STATUS VAR_6
)
{
   SCIF_SAS_CONTROLLER_T *VAR_7 = (SCIF_SAS_CONTROLLER_T*)
                                         FUNC_3(VAR_5);

   FUNC_0((
      FUNC_1(VAR_5),
      VAR_0 | VAR_1,
      "scic_cb_controller_stop_complete(0x%x, 0x%x) enter\n",
      VAR_5, VAR_6
   ));

   if (VAR_6 == VAR_4)
   {
      FUNC_2(
         &VAR_7->parent.state_machine,
         VAR_3
      );
   }
   else
   {
      FUNC_2(
         &VAR_7->parent.state_machine,
         VAR_2
      );
   }

   FUNC_4(VAR_7, VAR_6);
}
