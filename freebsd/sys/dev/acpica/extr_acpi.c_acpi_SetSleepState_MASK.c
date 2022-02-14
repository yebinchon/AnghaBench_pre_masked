
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_softc {int acpi_dev; } ;
typedef int ACPI_STATUS ;


 int FUNC_0 (struct acpi_softc*,int) ;
 int FUNC_1 (int ,char*) ;

ACPI_STATUS
FUNC_2(struct acpi_softc *VAR_0, int VAR_1)
{
    static int VAR_2;

    if (!VAR_2) {
 FUNC_1(VAR_0->acpi_dev,
"warning: acpi_SetSleepState() deprecated, need to update your software\n");
 VAR_2 = 1;
    }
    return (FUNC_0(VAR_0, VAR_1));
}
