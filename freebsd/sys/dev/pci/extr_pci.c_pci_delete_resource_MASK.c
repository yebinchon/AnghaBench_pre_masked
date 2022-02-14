
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list_entry {scalar_t__ res; } ;
struct resource_list {int dummy; } ;
struct pci_devinfo {struct resource_list resources; } ;
typedef int device_t ;


 int VAR_0 ;
 struct pci_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int,int ) ;
 scalar_t__ FUNC_3 (struct resource_list*,int,int) ;
 int FUNC_4 (struct resource_list*,int,int) ;
 struct resource_list_entry* FUNC_5 (struct resource_list*,int,int) ;
 int FUNC_6 (struct resource_list*,int ,int ,int,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

void
FUNC_9(device_t VAR_1, device_t VAR_2, int VAR_3, int VAR_4)
{
 struct pci_devinfo *VAR_5;
 struct resource_list *VAR_6;
 struct resource_list_entry *VAR_7;

 if (FUNC_1(VAR_2) != VAR_1)
  return;

 VAR_5 = FUNC_0(VAR_2);
 VAR_6 = &VAR_5->resources;
 VAR_7 = FUNC_5(VAR_6, VAR_3, VAR_4);
 if (VAR_7 == ((void*)0))
  return;

 if (VAR_7->res) {
  if (FUNC_7(VAR_7->res) & VAR_0 ||
      FUNC_3(VAR_6, VAR_3, VAR_4)) {
   FUNC_2(VAR_1, "delete_resource: "
       "Resource still owned by child, oops. "
       "(type=%d, rid=%d, addr=%jx)\n",
       VAR_3, VAR_4, FUNC_8(VAR_7->res));
   return;
  }
  FUNC_6(VAR_6, VAR_1, VAR_2, VAR_3, VAR_4);
 }
 FUNC_4(VAR_6, VAR_3, VAR_4);
}
