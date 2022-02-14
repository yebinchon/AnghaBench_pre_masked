
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_softc {int vmci_num_intr; int vmci_dev; struct vmci_interrupt* vmci_intrs; } ;
struct vmci_interrupt {int vmci_handler; int vmci_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int ,int ,int,int *,int ,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2(struct vmci_softc *VAR_5)
{
 struct vmci_interrupt *VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = VAR_2 | VAR_1;
 if (VAR_5->vmci_num_intr > 1)
  VAR_8 |= VAR_0;

 VAR_6 = &VAR_5->vmci_intrs[0];
 VAR_7 = FUNC_1(VAR_5->vmci_dev, VAR_6->vmci_irq, VAR_8, ((void*)0),
     VAR_3, ((void*)0), &VAR_6->vmci_handler);
 if (VAR_7)
  return (VAR_7);
 FUNC_0(VAR_5->vmci_dev, VAR_6->vmci_irq, VAR_6->vmci_handler,
     "vmci_interrupt");

 if (VAR_5->vmci_num_intr == 2) {
  VAR_6 = &VAR_5->vmci_intrs[1];
  VAR_7 = FUNC_1(VAR_5->vmci_dev, VAR_6->vmci_irq, VAR_8,
      ((void*)0), VAR_4, ((void*)0), &VAR_6->vmci_handler);
  if (VAR_7)
   return (VAR_7);
  FUNC_0(VAR_5->vmci_dev, VAR_6->vmci_irq,
      VAR_6->vmci_handler, "vmci_interrupt_bm");
 }

 return (0);
}
