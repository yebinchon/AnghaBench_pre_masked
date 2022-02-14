
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOLEAN ;
typedef scalar_t__ ACPI_STATUS ;
typedef int ACPI_PARSE_OBJECT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int *,char*) ;

BOOLEAN
FUNC_1 (
    char *VAR_5,
    ACPI_PARSE_OBJECT *VAR_6)
{
    ACPI_STATUS VAR_7;


    VAR_7 = FUNC_0 (VAR_6, VAR_1,
        VAR_2, ((void*)0), VAR_5);

    if (VAR_7 == VAR_0)
    {
        return (VAR_4);
    }

    return (VAR_3);
}
