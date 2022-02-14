
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_link_lookup {int bus; int device; int pin; struct pci_link** pci_link_ptr; } ;
struct pci_link {int pl_irq; scalar_t__ pl_irqmask; int pl_routed; } ;
struct TYPE_3__ {int ph_pci_irqs; } ;
struct TYPE_4__ {TYPE_1__ pt_header; } ;


 int FUNC_0 (int *,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_4 (int,int,int,int,int) ;
 int FUNC_5 (struct pci_link*,int ) ;
 int VAR_5 ;
 int FUNC_6 (int ,struct pci_link_lookup*) ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,...) ;

int
FUNC_9(int VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 struct pci_link_lookup VAR_13;
 struct pci_link *VAR_14;
 int VAR_15, VAR_16;

 if (VAR_6 == ((void*)0))
  return (VAR_2);


 VAR_14 = ((void*)0);
 VAR_13.bus = VAR_9;
 VAR_13.device = VAR_10;
 VAR_13.pin = VAR_12 - 1;
 VAR_13.pci_link_ptr = &VAR_14;
 FUNC_6(VAR_5, &VAR_13);
 if (VAR_14 == ((void*)0)) {
  FUNC_8("$PIR: No matching entry for %d.%d.INT%c\n", VAR_9,
      VAR_10, VAR_12 - 1 + 'A');
  return (VAR_2);
 }
 if (!FUNC_2(VAR_14->pl_irq)) {
  if (VAR_14->pl_irqmask != 0 && FUNC_7(VAR_14->pl_irqmask))
   VAR_16 = FUNC_3(VAR_14->pl_irqmask) - 1;
  else
   VAR_16 = FUNC_5(VAR_14,
       VAR_6->pt_header.ph_pci_irqs);
  if (!FUNC_2(VAR_16))
   VAR_16 = FUNC_5(VAR_14, VAR_7);
  if (!FUNC_2(VAR_16))
   VAR_16 = FUNC_5(VAR_14,
       VAR_4);
  if (!FUNC_2(VAR_16)) {
   if (VAR_3)
    FUNC_8(
   "$PIR: Failed to route interrupt for %d:%d INT%c\n",
        VAR_9, VAR_10, VAR_12 - 1 + 'A');
   return (VAR_2);
  }
  VAR_14->pl_irq = VAR_16;
 }


 if (!VAR_14->pl_routed) {
  VAR_15 = FUNC_4(VAR_9, VAR_10, VAR_11, VAR_12 - 1,
      VAR_14->pl_irq);


  if (VAR_15 && !FUNC_7(VAR_14->pl_irqmask)) {
   FUNC_8("$PIR: ROUTE_INTERRUPT failed.\n");
   return (VAR_2);
  }
  VAR_14->pl_routed = 1;


  FUNC_1(VAR_8 != ((void*)0), ("missing pir device"));
  FUNC_0(VAR_8, VAR_14->pl_irq,
      VAR_1, VAR_0);
 }
 if (VAR_3)
  FUNC_8("$PIR: %d:%d INT%c routed to irq %d\n", VAR_9, VAR_10,
      VAR_12 - 1 + 'A', VAR_14->pl_irq);
 return (VAR_14->pl_irq);
}
