
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_pci_devinfo {int ap_handle; } ;
typedef scalar_t__ device_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 struct acpi_pci_devinfo* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_1, device_t VAR_2)
{
 struct acpi_pci_devinfo *VAR_3 = FUNC_2(VAR_2);

 if (FUNC_1(VAR_3->ap_handle) == VAR_2)
  FUNC_0(VAR_3->ap_handle, VAR_0);
 FUNC_3(VAR_1, VAR_2);
}
