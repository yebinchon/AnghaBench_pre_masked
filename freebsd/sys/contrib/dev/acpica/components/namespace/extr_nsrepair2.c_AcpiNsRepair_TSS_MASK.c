
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Node; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_OPERAND_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;
typedef TYPE_1__ ACPI_EVALUATE_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,int ,int,int,int ,char*) ;
 int FUNC_2 (int ,char*,int ,int **) ;

__attribute__((used)) static ACPI_STATUS
FUNC_3 (
    ACPI_EVALUATE_INFO *VAR_3,
    ACPI_OPERAND_OBJECT **VAR_4)
{
    ACPI_OPERAND_OBJECT *VAR_5 = *VAR_4;
    ACPI_STATUS VAR_6;
    ACPI_NAMESPACE_NODE *VAR_7;
    VAR_6 = FUNC_2 (VAR_3->Node, "^_PSS",
        VAR_0, &VAR_7);
    if (FUNC_0 (VAR_6))
    {
        return (VAR_2);
    }

    VAR_6 = FUNC_1 (VAR_3, VAR_5, 0, 5, 1,
        VAR_1, "PowerDissipation");

    return (VAR_6);
}
