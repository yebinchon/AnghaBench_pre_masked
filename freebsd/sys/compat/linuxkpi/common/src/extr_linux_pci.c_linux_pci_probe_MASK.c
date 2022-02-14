
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_driver {int name; int bsddriver; } ;
struct pci_device_id {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct pci_driver* FUNC_2 (int ,struct pci_device_id const**) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 const struct pci_device_id *VAR_2;
 struct pci_driver *VAR_3;

 if ((VAR_3 = FUNC_2(VAR_1, &VAR_2)) == ((void*)0))
  return (VAR_0);
 if (FUNC_0(VAR_1) != &VAR_3->bsddriver)
  return (VAR_0);
 FUNC_1(VAR_1, VAR_3->name);
 return (0);
}
