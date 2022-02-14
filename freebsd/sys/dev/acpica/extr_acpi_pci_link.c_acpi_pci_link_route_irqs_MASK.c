
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct link {size_t l_irq; int l_references; int l_routed; } ;
struct acpi_pci_link_softc {int pl_num_links; struct link* pl_links; scalar_t__ pl_crs_bad; } ;
typedef int device_t ;
struct TYPE_10__ {int Length; scalar_t__ Pointer; } ;
struct TYPE_9__ {int Type; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_RESOURCE ;
typedef TYPE_2__ ACPI_BUFFER ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;


 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (size_t) ;
 int VAR_2 ;
 int FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct acpi_pci_link_softc*,TYPE_2__*) ;
 int FUNC_11 (struct acpi_pci_link_softc*,TYPE_2__*) ;
 struct acpi_pci_link_softc* FUNC_12 (int ) ;
 int FUNC_13 (int ,char*,int ) ;
 int VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static ACPI_STATUS
FUNC_14(device_t VAR_5)
{
 struct acpi_pci_link_softc *VAR_6;
 ACPI_RESOURCE *VAR_7, *VAR_8;
 ACPI_BUFFER VAR_9;
 ACPI_STATUS VAR_10;
 struct link *VAR_11;
 int VAR_12;

 FUNC_2(VAR_3);
 VAR_6 = FUNC_12(VAR_5);
 if (VAR_6->pl_crs_bad)
  VAR_10 = FUNC_11(VAR_6, &VAR_9);
 else
  VAR_10 = FUNC_10(VAR_6, &VAR_9);


 VAR_10 = FUNC_5(FUNC_9(VAR_5), &VAR_9);
 if (FUNC_0(VAR_10)) {
  FUNC_13(VAR_5, "Unable to route IRQs: %s\n",
      FUNC_3(VAR_10));
  FUNC_4(VAR_9.Pointer);
  return (VAR_10);
 }





 VAR_11 = VAR_6->pl_links;
 VAR_12 = 0;
 VAR_7 = (ACPI_RESOURCE *)VAR_9.Pointer;
 VAR_8 = (ACPI_RESOURCE *)((char *)VAR_9.Pointer + VAR_9.Length);
 for (;;) {
  if (VAR_7->Type == VAR_0)
   break;
  switch (VAR_7->Type) {
  case 128:
  case 129:
   FUNC_6(VAR_12 < VAR_6->pl_num_links);






   if (!VAR_11->l_routed &&
       FUNC_7(VAR_11->l_irq)) {
    VAR_11->l_routed = VAR_2;
    FUNC_8(VAR_5, VAR_7);
    VAR_4[VAR_11->l_irq] +=
        VAR_11->l_references;
   }
   VAR_11++;
   VAR_12++;
   break;
  }
  VAR_7 = FUNC_1(VAR_7);
  if (VAR_7 >= VAR_8)
   break;
 }
 FUNC_4(VAR_9.Pointer);
 return (VAR_1);
}
