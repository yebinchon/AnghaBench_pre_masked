
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int ACPI_TABLE_HEADER ;
typedef int ACPI_TABLE_DESC ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ACPI_STATUS
FUNC_5 (
    ACPI_TABLE_HEADER *VAR_1,
    UINT32 *VAR_2)
{
    ACPI_STATUS VAR_3;
    ACPI_TABLE_DESC *VAR_4;


    VAR_3 = FUNC_2 (VAR_2, &VAR_4);
    if (FUNC_0 (VAR_3))
    {
        return (VAR_3);
    }



    FUNC_3 (VAR_4, FUNC_1 (VAR_1),
        VAR_0, VAR_1);
    VAR_3 = FUNC_4 (VAR_4);
    return (VAR_3);
}
