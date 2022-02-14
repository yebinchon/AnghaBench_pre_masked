
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_devinfo {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,struct pci_devinfo*) ;
 struct pci_devinfo* FUNC_1 (int ,int ,int,int,int,int) ;

__attribute__((used)) static struct pci_devinfo *
FUNC_2(device_t VAR_0, device_t VAR_1, int VAR_2, int VAR_3,
    int VAR_4, int VAR_5)
{
 struct pci_devinfo *VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 != ((void*)0))
  FUNC_0(VAR_1, VAR_6);

 return (VAR_6);
}
