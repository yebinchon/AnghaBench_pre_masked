
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_softc {scalar_t__ acpi_sleep_disabled; } ;
typedef int ACPI_STATUS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static ACPI_STATUS
FUNC_2(struct acpi_softc *VAR_5)
{
    ACPI_STATUS VAR_6;


    if (!VAR_2)
 return (VAR_0);

    FUNC_0(VAR_4);
    VAR_6 = VAR_5->acpi_sleep_disabled ? VAR_0 : VAR_1;
    VAR_5->acpi_sleep_disabled = VAR_3;
    FUNC_1(VAR_4);

    return (VAR_6);
}
