
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_tz_softc {int tz_flags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct acpi_tz_softc *VAR_2, int VAR_3)
{
    FUNC_0(VAR_1);
    VAR_2->tz_flags |= VAR_3;
    FUNC_1(VAR_1);
    FUNC_2(&VAR_0);
}
