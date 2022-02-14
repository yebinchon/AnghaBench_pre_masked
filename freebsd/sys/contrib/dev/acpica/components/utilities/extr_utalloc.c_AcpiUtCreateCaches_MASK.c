
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_STATUS ;
typedef int ACPI_PARSE_OBJ_NAMED ;
typedef int ACPI_PARSE_OBJ_COMMON ;
typedef int ACPI_OPERAND_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;
typedef int ACPI_GENERIC_STATE ;
typedef int ACPI_FILE_NODE ;
typedef int ACPI_COMMENT_NODE ;
typedef int ACPI_COMMENT_ADDR_NODE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (char*,int,int ,int *) ;
 int FUNC_2 (char*,int,int *) ;

ACPI_STATUS
FUNC_3 (
    void)
{
    ACPI_STATUS VAR_17;




    VAR_17 = FUNC_1 ("Acpi-Namespace", sizeof (ACPI_NAMESPACE_NODE),
        VAR_2, &VAR_10);
    if (FUNC_0 (VAR_17))
    {
        return (VAR_17);
    }

    VAR_17 = FUNC_1 ("Acpi-State", sizeof (ACPI_GENERIC_STATE),
        VAR_5, &VAR_16);
    if (FUNC_0 (VAR_17))
    {
        return (VAR_17);
    }

    VAR_17 = FUNC_1 ("Acpi-Parse", sizeof (ACPI_PARSE_OBJ_COMMON),
        VAR_4, &VAR_13);
    if (FUNC_0 (VAR_17))
    {
        return (VAR_17);
    }

    VAR_17 = FUNC_1 ("Acpi-ParseExt", sizeof (ACPI_PARSE_OBJ_NAMED),
        VAR_1, &VAR_14);
    if (FUNC_0 (VAR_17))
    {
        return (VAR_17);
    }

    VAR_17 = FUNC_1 ("Acpi-Operand", sizeof (ACPI_OPERAND_OBJECT),
        VAR_3, &VAR_12);
    if (FUNC_0 (VAR_17))
    {
        return (VAR_17);
    }
    return (VAR_6);
}
