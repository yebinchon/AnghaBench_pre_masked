
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtpci_interrupt {int dummy; } ;
struct vtpci_softc {int vtpci_flags; int vtpci_nmsix_resources; struct vtpci_interrupt* vtpci_msix_vq_interrupts; struct vtpci_interrupt vtpci_device_interrupt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct vtpci_interrupt* FUNC_0 (int,int ,int) ;
 int FUNC_1 (struct vtpci_softc*,int,int,struct vtpci_interrupt*) ;

__attribute__((used)) static int
FUNC_2(struct vtpci_softc *VAR_8)
{
 struct vtpci_interrupt *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_11 = 0;
 VAR_12 = VAR_4;

 if (VAR_8->vtpci_flags & VAR_6)
  VAR_12 |= VAR_5;
 else
  VAR_11 = 1;






 VAR_9 = &VAR_8->vtpci_device_interrupt;
 VAR_14 = FUNC_1(VAR_8, VAR_11, VAR_12, VAR_9);
 if (VAR_14 || VAR_8->vtpci_flags & (VAR_6 | VAR_7))
  return (VAR_14);


 VAR_13 = VAR_8->vtpci_nmsix_resources - 1;

 VAR_9 = VAR_8->vtpci_msix_vq_interrupts = FUNC_0(VAR_13 *
     sizeof(struct vtpci_interrupt), VAR_1, VAR_2 | VAR_3);
 if (VAR_8->vtpci_msix_vq_interrupts == ((void*)0))
  return (VAR_0);

 for (VAR_10 = 0, VAR_11++; VAR_10 < VAR_13; VAR_10++, VAR_11++, VAR_9++) {
  VAR_14 = FUNC_1(VAR_8, VAR_11, VAR_12, VAR_9);
  if (VAR_14)
   return (VAR_14);
 }

 return (0);
}
