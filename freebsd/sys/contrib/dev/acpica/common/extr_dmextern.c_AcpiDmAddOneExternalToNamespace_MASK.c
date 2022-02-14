
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;
typedef int ACPI_STATUS ;
typedef int ACPI_NAMESPACE_NODE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int **,int ) ;
 int FUNC_2 (char*,int ,int **) ;

void
FUNC_3 (
    char *VAR_0,
    UINT8 VAR_1,
    UINT32 VAR_2)
{
    ACPI_STATUS VAR_3;
    ACPI_NAMESPACE_NODE *VAR_4;


    VAR_3 = FUNC_2 (VAR_0, VAR_1, &VAR_4);

    if (FUNC_0 (VAR_3))
    {
        return;
    }

    FUNC_1 (VAR_1, &VAR_4, VAR_2);

}
