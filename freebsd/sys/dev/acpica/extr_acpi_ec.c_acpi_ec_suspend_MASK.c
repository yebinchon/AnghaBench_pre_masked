
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec_softc {int ec_suspending; } ;
typedef int device_t ;


 int VAR_0 ;
 struct acpi_ec_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1)
{
    struct acpi_ec_softc *VAR_2;

    VAR_2 = FUNC_0(VAR_1);
    VAR_2->ec_suspending = VAR_0;
    return (0);
}
