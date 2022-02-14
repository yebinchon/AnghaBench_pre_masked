
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_devinfo {int dummy; } ;
struct acpi_pci_devinfo {struct pci_devinfo ap_dinfo; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct acpi_pci_devinfo* FUNC_0 (int,int ,int) ;

__attribute__((used)) static struct pci_devinfo *
FUNC_1(device_t VAR_3)
{
 struct acpi_pci_devinfo *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0, VAR_1 | VAR_2);
 return (&VAR_4->ap_dinfo);
}
