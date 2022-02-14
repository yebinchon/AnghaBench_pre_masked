
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pci_quirk {scalar_t__ devid; int type; } ;


 struct pci_quirk* VAR_0 ;

__attribute__((used)) static int
FUNC_0(uint32_t VAR_1, int VAR_2)
{
 const struct pci_quirk *VAR_3;

 for (VAR_3 = &VAR_0[0]; VAR_3->devid; VAR_3++) {
  if (VAR_3->devid == VAR_1 && VAR_3->type == VAR_2)
   return (1);
 }
 return (0);
}
