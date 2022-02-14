
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_STATUS ;
typedef int ACPI_OPERAND_OBJECT ;
typedef int ACPI_EVALUATE_INFO ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int,int,int ,char*) ;

__attribute__((used)) static ACPI_STATUS
FUNC_1 (
    ACPI_EVALUATE_INFO *VAR_1,
    ACPI_OPERAND_OBJECT **VAR_2)
{
    ACPI_OPERAND_OBJECT *VAR_3 = *VAR_2;
    ACPI_STATUS VAR_4;


    VAR_4 = FUNC_0 (VAR_1, VAR_3, 0, 2, 1,
        VAR_0, "AmbientIlluminance");

    return (VAR_4);
}
