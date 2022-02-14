
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtpci_interrupt {int vti_handler; int vti_irq; } ;
struct vtpci_softc {int vtpci_flags; struct vtpci_interrupt* vtpci_msix_vq_interrupts; struct vtpci_interrupt vtpci_device_interrupt; int vtpci_dev; } ;
typedef enum intr_type { ____Placeholder_intr_type } intr_type ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int *,int ,struct vtpci_softc*,int *) ;
 int VAR_1 ;
 int FUNC_1 (struct vtpci_softc*) ;
 int FUNC_2 (struct vtpci_softc*,int) ;
 int VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct vtpci_softc *VAR_4, enum intr_type VAR_5)
{
 device_t VAR_6;
 struct vtpci_interrupt *VAR_7;
 int VAR_8;

 VAR_6 = VAR_4->vtpci_dev;
 VAR_7 = &VAR_4->vtpci_device_interrupt;

 VAR_8 = FUNC_0(VAR_6, VAR_7->vti_irq, VAR_5, ((void*)0),
     VAR_1, VAR_4, &VAR_7->vti_handler);
 if (VAR_8)
  return (VAR_8);

 if (VAR_4->vtpci_flags & VAR_0) {
  VAR_7 = VAR_4->vtpci_msix_vq_interrupts;
  VAR_8 = FUNC_0(VAR_6, VAR_7->vti_irq, VAR_5,
      VAR_3, VAR_2, VAR_4,
      &VAR_7->vti_handler);
 } else
  VAR_8 = FUNC_2(VAR_4, VAR_5);

 return (VAR_8 ? VAR_8 : FUNC_1(VAR_4));
}
