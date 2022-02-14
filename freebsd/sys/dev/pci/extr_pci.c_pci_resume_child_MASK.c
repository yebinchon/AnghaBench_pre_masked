
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list_entry {int * res; } ;
struct pci_devinfo {int resources; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 struct pci_devinfo* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct pci_devinfo*) ;
 int FUNC_5 (int ,struct pci_devinfo*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ,int ,int ) ;
 struct resource_list_entry* FUNC_7 (int *,int ,int ) ;

int
FUNC_8(device_t VAR_4, device_t VAR_5)
{
 struct pci_devinfo *VAR_6;
 struct resource_list_entry *VAR_7;

 if (VAR_2)
  FUNC_6(VAR_4, VAR_5, VAR_0);

 VAR_6 = FUNC_2(VAR_5);
 FUNC_4(VAR_5, VAR_6);
 if (!FUNC_3(VAR_5))
  FUNC_5(VAR_5, VAR_6, 1);

 FUNC_0(VAR_4, VAR_5);




 if (VAR_3) {

  VAR_7 = FUNC_7(&VAR_6->resources, VAR_1, 0);
  if (VAR_7 != ((void*)0) && VAR_7->res != ((void*)0))
   (void)FUNC_1(VAR_5, VAR_7->res);
 }

 return (0);
}
