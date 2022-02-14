
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ISCI_CONTROLLER {int scif_controller_handle; } ;
struct TYPE_3__ {scalar_t__ (* interrupt_handler ) (int ) ;int (* completion_handler ) (int ) ;} ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_1__ SCIC_CONTROLLER_HANDLER_METHODS_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct ISCI_CONTROLLER *VAR_2)
{
 SCI_CONTROLLER_HANDLE_T VAR_3 =
     FUNC_1(VAR_2->scif_controller_handle);
 SCIC_CONTROLLER_HANDLER_METHODS_T VAR_4;

 FUNC_0(VAR_0, 0x0, &VAR_4);

 if(VAR_4.interrupt_handler(VAR_3) == VAR_1) {






  VAR_4.completion_handler(VAR_3);
 }
}
