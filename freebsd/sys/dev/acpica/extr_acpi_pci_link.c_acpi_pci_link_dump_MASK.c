
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link {int l_irq; int l_references; int l_num_irqs; int* l_irqs; scalar_t__ l_routed; } ;
struct acpi_pci_link_softc {int pl_num_links; struct link* pl_links; int pl_dev; } ;
typedef int buf ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int,char*,char*) ;

__attribute__((used)) static void
FUNC_4(struct acpi_pci_link_softc *VAR_1, int VAR_2, const char *VAR_3)
{
 struct link *VAR_4;
 char VAR_5[16];
 int VAR_6, VAR_7;

 FUNC_0(VAR_0);
 if (VAR_2) {
  FUNC_3(VAR_5, sizeof(VAR_5), "%s:",
      FUNC_1(VAR_1->pl_dev));
  FUNC_2("%-16.16s  Index  IRQ  Rtd  Ref  IRQs\n", VAR_5);
 }
 for (VAR_6 = 0; VAR_6 < VAR_1->pl_num_links; VAR_6++) {
  VAR_4 = &VAR_1->pl_links[VAR_6];
  FUNC_2("  %-14.14s  %5d  %3d   %c   %3d ", VAR_6 == 0 ? VAR_3 : "", VAR_6,
      VAR_4->l_irq, VAR_4->l_routed ? 'Y' : 'N',
      VAR_4->l_references);
  if (VAR_4->l_num_irqs == 0)
   FUNC_2(" none");
  else for (VAR_7 = 0; VAR_7 < VAR_4->l_num_irqs; VAR_7++)
   FUNC_2(" %d", VAR_4->l_irqs[VAR_7]);
  FUNC_2("\n");
 }
}
