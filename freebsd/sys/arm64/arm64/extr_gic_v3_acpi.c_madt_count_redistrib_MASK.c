
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nregions; } ;
struct gic_v3_softc {TYPE_1__ gic_redists; } ;
struct TYPE_5__ {scalar_t__ Type; } ;
typedef TYPE_2__ ACPI_SUBTABLE_HEADER ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(ACPI_SUBTABLE_HEADER *VAR_1, void *VAR_2)
{
 struct gic_v3_softc *VAR_3 = VAR_2;

 if (VAR_1->Type == VAR_0)
  VAR_3->gic_redists.nregions++;
}
