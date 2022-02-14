
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct lookup_irq_request {int rid; scalar_t__ found; int checkrid; scalar_t__ counter; int irq; int * acpi_res; } ;
typedef int device_t ;
typedef int ACPI_STATUS ;
typedef int ACPI_RESOURCE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ,struct lookup_irq_request*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct resource*) ;

ACPI_STATUS
FUNC_4(device_t VAR_2, int VAR_3, struct resource *VAR_4,
    ACPI_RESOURCE *VAR_5)
{
    struct lookup_irq_request VAR_6;
    ACPI_STATUS VAR_7;

    VAR_6.acpi_res = VAR_5;
    VAR_6.irq = FUNC_3(VAR_4);
    VAR_6.counter = 0;
    VAR_6.rid = VAR_3;
    VAR_6.found = 0;
    VAR_6.checkrid = 1;
    VAR_7 = FUNC_1(FUNC_2(VAR_2), "_CRS",
 VAR_1, &VAR_6);
    if (FUNC_0(VAR_7) && VAR_6.found == 0)
 VAR_7 = VAR_0;
    return (VAR_7);
}
