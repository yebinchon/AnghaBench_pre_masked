
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_softc {int device; struct ISCI_PCI_BAR* pci_bar; } ;
struct ISCI_PCI_BAR {int * resource; int bus_handle; int bus_tag; int resource_id; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct isci_softc *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
 {
  struct ISCI_PCI_BAR *VAR_5 = &VAR_3->pci_bar[VAR_4];

  VAR_5->resource_id = FUNC_0(VAR_4*2);
  VAR_5->resource = FUNC_1(VAR_3->device,
      VAR_2, &VAR_5->resource_id,
      VAR_1);

  if(VAR_5->resource == ((void*)0))
   FUNC_2(0, "ISCI",
       "unable to allocate pci resource\n");
  else {
   VAR_5->bus_tag = FUNC_4(VAR_5->resource);
   VAR_5->bus_handle =
       FUNC_3(VAR_5->resource);
  }
 }

 return (0);
}
