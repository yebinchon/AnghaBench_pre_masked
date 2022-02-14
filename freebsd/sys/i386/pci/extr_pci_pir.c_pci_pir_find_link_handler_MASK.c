
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_link_lookup {scalar_t__ bus; scalar_t__ device; int pin; int * pci_link_ptr; } ;
struct PIR_intpin {int link; } ;
struct PIR_entry {scalar_t__ pe_bus; scalar_t__ pe_device; struct PIR_intpin* pe_intpin; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct PIR_entry *VAR_0, struct PIR_intpin *VAR_1,
    void *VAR_2)
{
 struct pci_link_lookup *VAR_3;

 VAR_3 = (struct pci_link_lookup *)VAR_2;
 if (VAR_0->pe_bus == VAR_3->bus &&
     VAR_0->pe_device == VAR_3->device &&
     VAR_1 - VAR_0->pe_intpin == VAR_3->pin)
  *VAR_3->pci_link_ptr = FUNC_0(VAR_1->link);
}
