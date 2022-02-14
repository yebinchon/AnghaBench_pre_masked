
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtpci_softc {int vtpci_dev; } ;
struct vtpci_interrupt {int vti_rid; int * vti_irq; int * vti_handler; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int *) ;
 int FUNC_1 (int ,int *,int *) ;

__attribute__((used)) static void
FUNC_2(struct vtpci_softc *VAR_1, struct vtpci_interrupt *VAR_2)
{
 device_t VAR_3;

 VAR_3 = VAR_1->vtpci_dev;

 if (VAR_2->vti_handler != ((void*)0)) {
  FUNC_1(VAR_3, VAR_2->vti_irq, VAR_2->vti_handler);
  VAR_2->vti_handler = ((void*)0);
 }

 if (VAR_2->vti_irq != ((void*)0)) {
  FUNC_0(VAR_3, VAR_0, VAR_2->vti_rid,
      VAR_2->vti_irq);
  VAR_2->vti_irq = ((void*)0);
  VAR_2->vti_rid = -1;
 }
}
