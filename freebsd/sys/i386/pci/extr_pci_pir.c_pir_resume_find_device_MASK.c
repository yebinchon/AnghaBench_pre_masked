
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev_lookup {scalar_t__ link; int bus; struct PIR_intpin* pin; int device; } ;
struct PIR_intpin {scalar_t__ link; } ;
struct PIR_entry {int pe_bus; int pe_intpin; int pe_device; } ;



__attribute__((used)) static void
FUNC_0(struct PIR_entry *VAR_0, struct PIR_intpin *VAR_1,
    void *VAR_2)
{
 struct pci_dev_lookup *VAR_3;

 VAR_3 = (struct pci_dev_lookup *)VAR_2;
 if (VAR_1->link != VAR_3->link || VAR_3->bus != -1)
  return;
 VAR_3->bus = VAR_0->pe_bus;
 VAR_3->device = VAR_0->pe_device;
 VAR_3->pin = VAR_1 - VAR_0->pe_intpin;
}
