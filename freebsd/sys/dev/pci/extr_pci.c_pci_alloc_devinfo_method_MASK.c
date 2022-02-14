
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_devinfo {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pci_devinfo* FUNC_0 (int,int ,int) ;

struct pci_devinfo *
FUNC_1(device_t VAR_3)
{

 return (FUNC_0(sizeof(struct pci_devinfo), VAR_0,
     VAR_1 | VAR_2));
}
