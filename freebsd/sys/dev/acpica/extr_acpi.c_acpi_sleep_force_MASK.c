
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_softc {int acpi_dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct acpi_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2)
{
    struct acpi_softc *VAR_3 = (struct acpi_softc *)VAR_2;

    FUNC_2(VAR_3->acpi_dev,
 "suspend request timed out, forcing sleep now\n");




    if (FUNC_0(FUNC_1(VAR_0,
 VAR_1, VAR_3)))
 FUNC_2(VAR_3->acpi_dev, "AcpiOsExecute() for sleeping failed\n");
}
