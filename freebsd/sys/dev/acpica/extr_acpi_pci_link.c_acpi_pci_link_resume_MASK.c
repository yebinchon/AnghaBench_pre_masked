
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_pci_link_softc {int pl_num_links; TYPE_1__* pl_links; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ l_routed; } ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,int *,int *) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct acpi_pci_link_softc* FUNC_6 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3)
{
 struct acpi_pci_link_softc *VAR_4;
 ACPI_STATUS VAR_5;
 int VAR_6, VAR_7;





 FUNC_1(VAR_2);
 VAR_4 = FUNC_6(VAR_3);
 VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_4->pl_num_links; VAR_6++)
  if (VAR_4->pl_links[VAR_6].l_routed)
   VAR_7++;
 if (VAR_7 == VAR_4->pl_num_links)
  VAR_5 = FUNC_5(VAR_3);
 else {
  FUNC_3(FUNC_4(VAR_3), "_DIS", ((void*)0), ((void*)0));
  VAR_5 = VAR_0;
 }
 FUNC_2(VAR_2);
 if (FUNC_0(VAR_5))
  return (VAR_1);
 else
  return (0);
}
