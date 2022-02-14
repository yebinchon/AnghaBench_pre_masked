
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link {int l_res_index; } ;
struct acpi_pci_link_softc {int pl_num_links; struct link* pl_links; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 struct acpi_pci_link_softc* FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static struct link *
FUNC_2(device_t VAR_1, int VAR_2)
{
 struct acpi_pci_link_softc *VAR_3;
 int VAR_4;

 FUNC_0(VAR_0);
 VAR_3 = FUNC_1(VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_3->pl_num_links; VAR_4++)
  if (VAR_3->pl_links[VAR_4].l_res_index == VAR_2)
   return (&VAR_3->pl_links[VAR_4]);
 return (((void*)0));
}
