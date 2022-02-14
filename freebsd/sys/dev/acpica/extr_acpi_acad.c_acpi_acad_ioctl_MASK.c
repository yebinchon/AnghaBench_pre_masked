
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct acpi_acad_softc {int status; } ;
typedef scalar_t__ device_t ;
typedef scalar_t__ caddr_t ;



 int FUNC_0 (scalar_t__) ;
 struct acpi_acad_softc* FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(u_long VAR_0, caddr_t VAR_1, void *VAR_2)
{
    struct acpi_acad_softc *VAR_3;
    device_t VAR_4;

    VAR_4 = (device_t)VAR_2;
    VAR_3 = FUNC_1(VAR_4);





    switch (VAR_0) {
    case 128:
 FUNC_0(VAR_4);
 *(int *)VAR_1 = VAR_3->status;
 break;
    default:
 break;
    }

    return (0);
}
