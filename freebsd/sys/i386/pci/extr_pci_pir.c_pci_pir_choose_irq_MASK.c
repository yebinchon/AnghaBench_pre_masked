
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_link {int pl_irqmask; int pl_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__* VAR_3 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(struct pci_link *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;


 VAR_8 = VAR_4->pl_irqmask & VAR_5;
 if (VAR_8 == 0)
  return (VAR_1);


 VAR_7 = VAR_1;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (!(VAR_8 & 1 << VAR_6))
   continue;
  if (VAR_7 == VAR_1 ||
      VAR_3[VAR_6] < VAR_3[VAR_7])
   VAR_7 = VAR_6;
 }
 if (VAR_2 && FUNC_0(VAR_7)) {
  FUNC_2("$PIR: Found IRQ %d for link %#x from ", VAR_7,
      VAR_4->pl_id);
  FUNC_1(VAR_8);
  FUNC_2("\n");
 }
 return (VAR_7);
}
