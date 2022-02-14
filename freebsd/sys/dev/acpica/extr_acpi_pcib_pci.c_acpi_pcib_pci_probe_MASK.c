
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{

    if (FUNC_4(VAR_3) != VAR_1 ||
 FUNC_5(VAR_3) != VAR_2 ||
 FUNC_0("pci"))
 return (VAR_0);
    if (FUNC_1(VAR_3) == ((void*)0))
 return (VAR_0);
    if (FUNC_3() == 0)
 return (VAR_0);

    FUNC_2(VAR_3, "ACPI PCI-PCI bridge");
    return (-1000);
}
