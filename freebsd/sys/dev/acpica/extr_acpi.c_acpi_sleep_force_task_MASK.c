
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_softc {int acpi_next_sstate; int acpi_dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_softc*,int ) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
    struct acpi_softc *VAR_1 = (struct acpi_softc *)VAR_0;

    if (FUNC_0(FUNC_1(VAR_1, VAR_1->acpi_next_sstate)))
 FUNC_2(VAR_1->acpi_dev, "force sleep state S%d failed\n",
     VAR_1->acpi_next_sstate);
}
