
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list_entry {int * res; } ;
struct resource {int dummy; } ;
struct pci_devinfo {int resources; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,struct resource*) ;
 struct pci_devinfo* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 struct resource_list_entry* FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct resource*) ;
 int FUNC_5 (struct resource*) ;

int
FUNC_6(device_t VAR_2, device_t VAR_3, int VAR_4,
    struct resource *VAR_5)
{
 struct pci_devinfo *VAR_6;
 struct resource_list_entry *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(VAR_3);

 if (FUNC_4(VAR_5) & VAR_0) {
  VAR_8 = FUNC_0(VAR_3, VAR_1, VAR_4, VAR_5);
  if (VAR_8 != 0)
   return (VAR_8);
 }

 VAR_7 = FUNC_3(&VAR_6->resources, VAR_1, VAR_4);
 if (VAR_7 != ((void*)0)) {
  VAR_7->res = ((void*)0);
  FUNC_2(&VAR_6->resources, VAR_1,
      VAR_4);
 }

 return (FUNC_5(VAR_5));
}
