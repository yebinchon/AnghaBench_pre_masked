
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_driver {int isdrm; } ;
typedef int * devclass_t ;


 int VAR_0 ;
 int FUNC_0 (struct pci_driver*,int *) ;
 int * FUNC_1 (char*) ;

int
FUNC_2(struct pci_driver *VAR_1)
{
 devclass_t VAR_2;

 VAR_2 = FUNC_1("pci");
 if (VAR_2 == ((void*)0))
  return (-VAR_0);
 VAR_1->isdrm = 0;
 return (FUNC_0(VAR_1, VAR_2));
}
