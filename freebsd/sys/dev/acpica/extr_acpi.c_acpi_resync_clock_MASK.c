
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct acpi_softc {scalar_t__ acpi_sleep_delay; } ;
struct TYPE_4__ {int (* tc_get_timecount ) (TYPE_1__*) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct acpi_softc *VAR_2)
{




    (void)VAR_1->tc_get_timecount(VAR_1);
    (void)VAR_1->tc_get_timecount(VAR_1);
    FUNC_0(VAR_0 + VAR_2->acpi_sleep_delay);
}
