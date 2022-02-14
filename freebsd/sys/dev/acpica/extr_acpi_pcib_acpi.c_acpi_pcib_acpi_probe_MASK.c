
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_4__ {int Flags; } ;
typedef int * ACPI_HANDLE ;
typedef TYPE_1__ ACPI_DEVICE_INFO ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2)
{
    ACPI_DEVICE_INFO *VAR_3;
    ACPI_HANDLE VAR_4;
    int VAR_5;

    if (FUNC_3("pcib") || (VAR_4 = FUNC_4(VAR_2)) == ((void*)0) ||
 FUNC_0(FUNC_1(VAR_4, &VAR_3)))
 return (VAR_1);
    VAR_5 = (VAR_3->Flags & VAR_0) != 0;
    FUNC_2(VAR_3);
    if (!VAR_5 || FUNC_6() == 0)
 return (VAR_1);

    FUNC_5(VAR_2, "ACPI Host-PCI bridge");
    return (0);
}
