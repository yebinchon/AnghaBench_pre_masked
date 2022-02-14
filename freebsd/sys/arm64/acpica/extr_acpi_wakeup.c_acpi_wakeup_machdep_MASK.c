
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_softc {int dummy; } ;


 int FUNC_0 (int,char*) ;

int
FUNC_1(struct acpi_softc *VAR_0, int VAR_1, int VAR_2,
    int VAR_3)
{


 FUNC_0(VAR_2 == -1,
     ("acpi_wakeup_machdep: Invalid sleep result"));

 return (VAR_2);
}
