
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ StringLength; scalar_t__ StringPtr; } ;
typedef int ACPI_RS_LENGTH ;
typedef TYPE_1__ ACPI_RESOURCE_SOURCE ;


 int FUNC_0 () ;

__attribute__((used)) static ACPI_RS_LENGTH
FUNC_1 (
    ACPI_RESOURCE_SOURCE *VAR_0)
{
    FUNC_0 ();







    if (VAR_0->StringPtr)
    {
        return ((ACPI_RS_LENGTH) (VAR_0->StringLength + 1));
    }

    return (0);
}
