
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtpci_interrupt {int vti_handler; int vti_irq; } ;
struct vtpci_softc {int vtpci_dev; struct vtpci_interrupt vtpci_device_interrupt; } ;
typedef enum intr_type { ____Placeholder_intr_type } intr_type ;


 int FUNC_0 (int ,int ,int,int *,int ,struct vtpci_softc*,int *) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct vtpci_softc *VAR_1, enum intr_type VAR_2)
{
 struct vtpci_interrupt *VAR_3;
 int VAR_4;

 VAR_3 = &VAR_1->vtpci_device_interrupt;
 VAR_4 = FUNC_0(VAR_1->vtpci_dev, VAR_3->vti_irq, VAR_2, ((void*)0),
     VAR_0, VAR_1, &VAR_3->vti_handler);

 return (VAR_4);
}
