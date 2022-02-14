
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Count; } ;
struct TYPE_6__ {TYPE_1__ Package; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,TYPE_2__**) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_4 (
    ACPI_NAMESPACE_NODE *VAR_1)
{
    ACPI_OBJECT *VAR_2 = ((void*)0);
    ACPI_STATUS VAR_3;




    VAR_3 = FUNC_1 (VAR_1, VAR_0, &VAR_2);
    if (FUNC_0 (VAR_3))
    {
        return (VAR_3);
    }

    FUNC_3 (" %.2X Elements", VAR_2->Package.Count);
    FUNC_2 (VAR_2);
    return (VAR_3);
}
