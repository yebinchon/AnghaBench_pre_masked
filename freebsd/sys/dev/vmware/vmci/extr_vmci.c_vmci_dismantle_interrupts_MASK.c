
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_softc {int vmci_num_intr; scalar_t__ vmci_intr_type; int vmci_interrupt_bm_task; int vmci_interrupt_dq_task; int vmci_dev; struct vmci_interrupt* vmci_intrs; } ;
struct vmci_interrupt {int vmci_rid; int * vmci_irq; int * vmci_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int * VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_5(struct vmci_softc *VAR_5)
{
 struct vmci_interrupt *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5->vmci_num_intr; VAR_7++) {
  VAR_6 = &VAR_5->vmci_intrs[VAR_7];
  if (VAR_6->vmci_handler != ((void*)0)) {
   FUNC_1(VAR_5->vmci_dev, VAR_6->vmci_irq,
       VAR_6->vmci_handler);
   VAR_6->vmci_handler = ((void*)0);
  }
  if (VAR_6->vmci_irq != ((void*)0)) {
   FUNC_0(VAR_5->vmci_dev, VAR_1,
       VAR_6->vmci_rid, VAR_6->vmci_irq);
   VAR_6->vmci_irq = ((void*)0);
   VAR_6->vmci_rid = -1;
  }
 }

 if ((VAR_5->vmci_intr_type != VAR_2) &&
     (VAR_5->vmci_num_intr))
  FUNC_3(VAR_5->vmci_dev);

 FUNC_4(VAR_4, &VAR_5->vmci_interrupt_dq_task);
 FUNC_4(VAR_4, &VAR_5->vmci_interrupt_bm_task);

 if (VAR_3 != ((void*)0))
  FUNC_2(VAR_3, VAR_0);
}
