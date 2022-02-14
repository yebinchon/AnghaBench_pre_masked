
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_acad_softc {int status; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ) ;
 struct acpi_acad_softc* FUNC_2 (int *) ;

int
FUNC_3(int *VAR_2)
{
    struct acpi_acad_softc *VAR_3;
    device_t VAR_4;

    VAR_4 = FUNC_1(VAR_1, 0);
    if (VAR_4 == ((void*)0))
 return (VAR_0);
    VAR_3 = FUNC_2(VAR_4);

    FUNC_0(VAR_4);
    *VAR_2 = VAR_3->status;

    return (0);
}
