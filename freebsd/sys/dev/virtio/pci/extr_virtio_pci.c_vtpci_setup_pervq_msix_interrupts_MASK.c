
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtpci_virtqueue {int vtv_vq; scalar_t__ vtv_no_intr; } ;
struct vtpci_softc {int vtpci_nvqs; int vtpci_dev; struct vtpci_virtqueue* vtpci_vqs; struct vtpci_interrupt* vtpci_msix_vq_interrupts; } ;
struct vtpci_interrupt {int vti_handler; int vti_irq; } ;
typedef enum intr_type { ____Placeholder_intr_type } intr_type ;


 int FUNC_0 (int ,int ,int,int ,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct vtpci_softc *VAR_2, enum intr_type VAR_3)
{
 struct vtpci_virtqueue *VAR_4;
 struct vtpci_interrupt *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = VAR_2->vtpci_msix_vq_interrupts;

 for (VAR_6 = 0; VAR_6 < VAR_2->vtpci_nvqs; VAR_6++) {
  VAR_4 = &VAR_2->vtpci_vqs[VAR_6];

  if (VAR_4->vtv_no_intr)
   continue;

  VAR_7 = FUNC_0(VAR_2->vtpci_dev, VAR_5->vti_irq, VAR_3,
      VAR_1, VAR_0, VAR_4->vtv_vq,
      &VAR_5->vti_handler);
  if (VAR_7)
   return (VAR_7);

  VAR_5++;
 }

 return (0);
}
