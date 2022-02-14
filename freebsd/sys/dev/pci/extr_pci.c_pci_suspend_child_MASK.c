
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
 int FUNC_3 (int ,struct pci_devinfo*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,int ,int ) ;
 struct resource_list_entry* FUNC_5 (int *,int ,int ) ;

int
FUNC_6(device_t VAR_3, device_t VAR_4)
{
 struct pci_devinfo *VAR_5;
 struct resource_list_entry *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_2(VAR_4);





 FUNC_3(VAR_4, VAR_5, 0);


 VAR_7 = FUNC_0(VAR_3, VAR_4);

 if (VAR_7)
  return (VAR_7);

 if (VAR_2) {







  VAR_6 = FUNC_5(&VAR_5->resources,
      VAR_1, 0);
  if (VAR_6 != ((void*)0) && VAR_6->res != ((void*)0))
   (void)FUNC_1(VAR_4, VAR_6->res);
  FUNC_4(VAR_3, VAR_4, VAR_0);
 }

 return (0);
}
