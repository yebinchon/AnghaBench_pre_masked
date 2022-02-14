
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_STATUS ;
typedef int ACPI_NAMESPACE_NODE ;
typedef int ACPI_HANDLE ;
typedef int ACPI_BUFFER ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int (*) (int ,int *)) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *,int **) ;
 int FUNC_4 (int ) ;

ACPI_STATUS
FUNC_5 (
    ACPI_HANDLE VAR_0,
    ACPI_BUFFER *VAR_1)
{
    ACPI_STATUS VAR_2;
    ACPI_NAMESPACE_NODE *VAR_3;


    FUNC_1 (FUNC_5);




    VAR_2 = FUNC_3 (VAR_0, VAR_1, &VAR_3);
    if (FUNC_0 (VAR_2))
    {
        FUNC_4 (VAR_2);
    }

    VAR_2 = FUNC_2 (VAR_3, VAR_1);
    FUNC_4 (VAR_2);
}
