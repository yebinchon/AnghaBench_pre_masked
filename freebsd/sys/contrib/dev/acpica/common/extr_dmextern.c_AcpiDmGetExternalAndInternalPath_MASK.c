
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_STATUS ;
typedef int ACPI_NAMESPACE_NODE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char*,char**) ;

__attribute__((used)) static ACPI_STATUS
FUNC_4 (
    ACPI_NAMESPACE_NODE *VAR_3,
    char **VAR_4,
    char **VAR_5)
{
    ACPI_STATUS VAR_6;


    if (!VAR_3)
    {
        return (VAR_0);
    }



    *VAR_4 = FUNC_2 (VAR_3);
    if (!*VAR_4)
    {
        return (VAR_1);
    }

    VAR_6 = FUNC_3 (*VAR_4, VAR_5);
    if (FUNC_0 (VAR_6))
    {
        FUNC_1 (*VAR_4);
        return (VAR_6);
    }

    return (VAR_2);
}
