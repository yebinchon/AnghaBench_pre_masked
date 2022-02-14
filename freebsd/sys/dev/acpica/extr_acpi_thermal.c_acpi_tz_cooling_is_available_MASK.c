
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tc1; int tc2; int tsp; int psv; } ;
struct acpi_tz_softc {TYPE_1__ tz_zone; } ;



__attribute__((used)) static int
FUNC_0(struct acpi_tz_softc *VAR_0)
{
    return (VAR_0->tz_zone.tc1 != -1 && VAR_0->tz_zone.tc2 != -1 &&
 VAR_0->tz_zone.tsp != -1 && VAR_0->tz_zone.tsp != 0 &&
 VAR_0->tz_zone.psv != -1);
}
