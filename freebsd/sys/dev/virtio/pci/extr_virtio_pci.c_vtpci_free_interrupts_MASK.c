
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtpci_interrupt {int dummy; } ;
struct vtpci_softc {int vtpci_nmsix_resources; int vtpci_flags; int vtpci_dev; struct vtpci_interrupt* vtpci_msix_vq_interrupts; struct vtpci_interrupt vtpci_device_interrupt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vtpci_interrupt*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vtpci_softc*,struct vtpci_interrupt*) ;

__attribute__((used)) static void
FUNC_3(struct vtpci_softc *VAR_4)
{
 struct vtpci_interrupt *VAR_5;
 int VAR_6, VAR_7;

 FUNC_2(VAR_4, &VAR_4->vtpci_device_interrupt);

 if (VAR_4->vtpci_nmsix_resources != 0) {
  VAR_7 = VAR_4->vtpci_nmsix_resources - 1;
  VAR_4->vtpci_nmsix_resources = 0;

  VAR_5 = VAR_4->vtpci_msix_vq_interrupts;
  if (VAR_5 != ((void*)0)) {
   for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++, VAR_5++)
    FUNC_2(VAR_4, VAR_5);

   FUNC_0(VAR_4->vtpci_msix_vq_interrupts, VAR_0);
   VAR_4->vtpci_msix_vq_interrupts = ((void*)0);
  }
 }

 if (VAR_4->vtpci_flags & (VAR_2 | VAR_3))
  FUNC_1(VAR_4->vtpci_dev);

 VAR_4->vtpci_flags &= ~VAR_1;
}
