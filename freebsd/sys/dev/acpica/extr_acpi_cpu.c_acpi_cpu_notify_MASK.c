
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_cpu_softc {int cpu_handle; } ;
typedef int UINT32 ;
typedef int ACPI_HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct acpi_cpu_softc*) ;
 int FUNC_4 (struct acpi_cpu_softc*) ;
 int FUNC_5 (struct acpi_cpu_softc*) ;
 int VAR_1 ;
 int FUNC_6 (struct acpi_cpu_softc*) ;
 int FUNC_7 (struct acpi_cpu_softc*) ;

__attribute__((used)) static void
FUNC_8(ACPI_HANDLE VAR_2, UINT32 VAR_3, void *VAR_4)
{
    struct acpi_cpu_softc *VAR_5 = (struct acpi_cpu_softc *)VAR_4;

    if (VAR_3 != VAR_0)
 return;
    FUNC_0(VAR_1);
    FUNC_6(VAR_5);


    FUNC_3(VAR_5);
    FUNC_4(VAR_5);
    FUNC_5(VAR_5);

    FUNC_7(VAR_5);
    FUNC_1(VAR_1);

    FUNC_2("PROCESSOR", VAR_5->cpu_handle, VAR_3);
}
