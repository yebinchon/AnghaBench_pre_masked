
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct pci_link {scalar_t__ pl_irq; int pl_id; int pl_routed; } ;
struct PIR_intpin {int link; } ;
struct PIR_entry {int pe_intpin; int pe_bus; int pe_device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct pci_link* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int,scalar_t__) ;
 int FUNC_2 (struct pci_link*,scalar_t__) ;
 int FUNC_3 (char*,scalar_t__,int,int,scalar_t__,int,...) ;

__attribute__((used)) static void
FUNC_4(struct PIR_entry *VAR_2, struct PIR_intpin *VAR_3,
    void *VAR_4)
{
 struct pci_link *VAR_5;
 uint8_t VAR_6, VAR_7;

 VAR_7 = VAR_3 - VAR_2->pe_intpin;
 VAR_5 = FUNC_0(VAR_3->link);
 VAR_6 = FUNC_1(VAR_2->pe_bus, VAR_2->pe_device, VAR_7);
 if (VAR_6 == VAR_1 || VAR_6 == VAR_5->pl_irq)
  return;


 if (VAR_6 >= VAR_0) {
  FUNC_3(
 "$PIR: Ignoring invalid BIOS IRQ %d from %d.%d.INT%c for link %#x\n",
      VAR_6, VAR_2->pe_bus, VAR_2->pe_device, VAR_7 + 'A',
      VAR_5->pl_id);
  return;
 }





 if (VAR_5->pl_irq == VAR_1) {
  if (!FUNC_2(VAR_5, VAR_6))
   FUNC_3(
 "$PIR: Using invalid BIOS IRQ %d from %d.%d.INT%c for link %#x\n",
       VAR_6, VAR_2->pe_bus, VAR_2->pe_device, VAR_7 + 'A',
       VAR_5->pl_id);
  VAR_5->pl_irq = VAR_6;
  VAR_5->pl_routed = 1;
  return;
 }
 if (!FUNC_2(VAR_5, VAR_6)) {
  FUNC_3(
  "$PIR: BIOS IRQ %d for %d.%d.INT%c is not valid for link %#x\n",
      VAR_6, VAR_2->pe_bus, VAR_2->pe_device, VAR_7 + 'A',
      VAR_5->pl_id);
 } else if (!FUNC_2(VAR_5, VAR_5->pl_irq)) {
  FUNC_3(
"$PIR: Preferring valid BIOS IRQ %d from %d.%d.INT%c for link %#x to IRQ %d\n",
      VAR_6, VAR_2->pe_bus, VAR_2->pe_device, VAR_7 + 'A',
      VAR_5->pl_id, VAR_5->pl_irq);
  VAR_5->pl_irq = VAR_6;
  VAR_5->pl_routed = 1;
 } else
  FUNC_3(
 "$PIR: BIOS IRQ %d for %d.%d.INT%c does not match link %#x irq %d\n",
      VAR_6, VAR_2->pe_bus, VAR_2->pe_device, VAR_7 + 'A',
      VAR_5->pl_id, VAR_5->pl_irq);
}
