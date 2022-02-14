
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list_entry {unsigned long count; } ;
struct pci_dev {int dummy; } ;


 struct resource_list_entry* FUNC_0 (struct pci_dev*,int) ;

unsigned long
FUNC_1(struct pci_dev *VAR_0, int VAR_1)
{
 struct resource_list_entry *VAR_2;

 if ((VAR_2 = FUNC_0(VAR_0, VAR_1)) == ((void*)0))
  return (0);
 return (VAR_2->count);
}
