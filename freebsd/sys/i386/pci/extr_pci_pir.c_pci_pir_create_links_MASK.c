
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_link {int pl_references; int pl_id; scalar_t__ pl_routed; int pl_irq; int pl_irqmask; } ;
struct PIR_intpin {int link; int irqs; } ;
struct PIR_entry {int pe_bus; int pe_device; struct PIR_intpin* pe_intpin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct pci_link*,int ) ;
 scalar_t__ VAR_3 ;
 struct pci_link* FUNC_1 (int,int ,int ) ;
 int VAR_4 ;
 struct pci_link* FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (char*,int,int,int,int) ;

__attribute__((used)) static void
FUNC_4(struct PIR_entry *VAR_6, struct PIR_intpin *VAR_7,
    void *VAR_8)
{
 struct pci_link *VAR_9;

 VAR_9 = FUNC_2(VAR_7->link);
 if (VAR_9 != ((void*)0)) {
  VAR_9->pl_references++;
  if (VAR_7->irqs != VAR_9->pl_irqmask) {
   if (VAR_3)
    FUNC_3(
 "$PIR: Entry %d.%d.INT%c has different mask for link %#x, merging\n",
        VAR_6->pe_bus, VAR_6->pe_device,
        (VAR_7 - VAR_6->pe_intpin) + 'A',
        VAR_9->pl_id);
   VAR_9->pl_irqmask &= VAR_7->irqs;
  }
 } else {
  VAR_9 = FUNC_1(sizeof(struct pci_link), VAR_0, VAR_1);
  VAR_9->pl_id = VAR_7->link;
  VAR_9->pl_irqmask = VAR_7->irqs;
  VAR_9->pl_irq = VAR_2;
  VAR_9->pl_references = 1;
  VAR_9->pl_routed = 0;
  FUNC_0(&VAR_4, VAR_9, VAR_5);
 }
}
