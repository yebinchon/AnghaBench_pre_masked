
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_5__ {scalar_t__ Address; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_GENERIC_ADDRESS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static ACPI_STATUS
FUNC_2 (
    UINT32 VAR_0,
    ACPI_GENERIC_ADDRESS *VAR_1,
    ACPI_GENERIC_ADDRESS *VAR_2)
{
    ACPI_STATUS VAR_3;




    VAR_3 = FUNC_1 (VAR_0, VAR_1);
    if (FUNC_0 (VAR_3))
    {
        return (VAR_3);
    }
    if (VAR_2->Address)
    {
        VAR_3 = FUNC_1 (VAR_0, VAR_2);
    }

    return (VAR_3);
}
