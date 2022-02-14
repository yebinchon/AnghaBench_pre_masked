
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_devinfo {int dummy; } ;
struct adapter {int dev; } ;
typedef int device_t ;


 struct pci_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct pci_devinfo*) ;

int
FUNC_2(struct adapter *VAR_0)
{
 device_t VAR_1;
 struct pci_devinfo *VAR_2;

 VAR_1 = VAR_0->dev;
 VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_1, VAR_2);
 return (0);
}
