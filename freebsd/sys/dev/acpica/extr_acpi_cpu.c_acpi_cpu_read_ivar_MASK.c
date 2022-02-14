
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_cpu_softc {int cpu_pcpu; int cpu_handle; } ;
typedef int device_t ;





 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct acpi_cpu_softc* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3, device_t VAR_4, int VAR_5, uintptr_t *VAR_6)
{
    struct acpi_cpu_softc *VAR_7;

    VAR_7 = FUNC_1(VAR_3);
    switch (VAR_5) {
    case 130:
 *VAR_6 = (uintptr_t)VAR_7->cpu_handle;
 break;
    case 128:
 *VAR_6 = (uintptr_t)VAR_7->cpu_pcpu;
 break;

    case 129:
 if (VAR_2) {
     *VAR_6 = (uintptr_t)(FUNC_0(&VAR_1) / 1000000);
     break;
 }


    default:
 return (VAR_0);
    }
    return (0);
}
