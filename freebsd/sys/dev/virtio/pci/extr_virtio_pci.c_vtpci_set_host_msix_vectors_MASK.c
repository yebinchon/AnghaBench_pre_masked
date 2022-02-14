
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vtpci_interrupt {int dummy; } ;
struct vtpci_softc {int vtpci_nvqs; int vtpci_flags; TYPE_1__* vtpci_vqs; struct vtpci_interrupt* vtpci_msix_vq_interrupts; struct vtpci_interrupt vtpci_device_interrupt; } ;
struct TYPE_2__ {scalar_t__ vtv_no_intr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vtpci_softc*,int,struct vtpci_interrupt*) ;
 int FUNC_1 (struct vtpci_softc*,int) ;

__attribute__((used)) static int
FUNC_2(struct vtpci_softc *VAR_3)
{
 struct vtpci_interrupt *VAR_4, *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_4 = &VAR_3->vtpci_device_interrupt;
 VAR_7 = VAR_0;

 VAR_8 = FUNC_0(VAR_3, VAR_7, VAR_4);
 if (VAR_8)
  return (VAR_8);

 VAR_4 = VAR_3->vtpci_msix_vq_interrupts;
 VAR_7 = VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_3->vtpci_nvqs; VAR_6++) {
  FUNC_1(VAR_3, VAR_6);

  if (VAR_3->vtpci_vqs[VAR_6].vtv_no_intr)
   VAR_5 = ((void*)0);
  else
   VAR_5 = VAR_4;

  VAR_8 = FUNC_0(VAR_3, VAR_7, VAR_5);
  if (VAR_8)
   break;





  if (!VAR_3->vtpci_vqs[VAR_6].vtv_no_intr &&
      (VAR_3->vtpci_flags & VAR_2) == 0)
   VAR_4++;
 }

 return (VAR_8);
}
