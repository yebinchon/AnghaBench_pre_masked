
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ISCI_INTERRUPT_INFO {TYPE_1__* handlers; scalar_t__ interrupt_target_handle; } ;
struct ISCI_CONTROLLER {scalar_t__ release_queued_ccbs; int lock; int scif_controller_handle; } ;
struct TYPE_2__ {int (* completion_handler ) (int ) ;scalar_t__ (* interrupt_handler ) (int ) ;} ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef scalar_t__ (* SCIC_CONTROLLER_INTERRUPT_HANDLER ) (int ) ;
typedef int (* SCIC_CONTROLLER_COMPLETION_HANDLER ) (int ) ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ISCI_CONTROLLER*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

void
FUNC_4(void *VAR_1)
{
 struct ISCI_INTERRUPT_INFO *VAR_2 =
     (struct ISCI_INTERRUPT_INFO *)VAR_1;
 struct ISCI_CONTROLLER *VAR_3 =
     (struct ISCI_CONTROLLER *)VAR_2->interrupt_target_handle;
 SCIC_CONTROLLER_INTERRUPT_HANDLER VAR_4;
 SCIC_CONTROLLER_COMPLETION_HANDLER VAR_5;

 VAR_4 = VAR_2->handlers->interrupt_handler;
 VAR_5 = VAR_2->handlers->completion_handler;

 SCI_CONTROLLER_HANDLE_T VAR_6;

 VAR_6 = FUNC_3(
     VAR_3->scif_controller_handle);

 if (VAR_4(VAR_6)) {
  FUNC_1(&VAR_3->lock);
  VAR_5(VAR_6);





  if (VAR_3->release_queued_ccbs == VAR_0)
   FUNC_0(VAR_3);
  FUNC_2(&VAR_3->lock);
 }
}
