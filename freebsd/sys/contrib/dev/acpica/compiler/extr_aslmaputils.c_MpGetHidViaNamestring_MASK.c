
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_STATUS ;
typedef int ACPI_NAMESPACE_NODE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int ,int **) ;
 char* FUNC_2 (int *) ;

char *
FUNC_3 (
    char *VAR_1)
{
    ACPI_NAMESPACE_NODE *VAR_2;
    ACPI_STATUS VAR_3;


    VAR_3 = FUNC_1 (((void*)0), VAR_1, VAR_0,
        &VAR_2);
    if (FUNC_0 (VAR_3))
    {
        goto ErrorExit;
    }

    return (FUNC_2 (VAR_2));


ErrorExit:
    return ("-No HID-");
}
