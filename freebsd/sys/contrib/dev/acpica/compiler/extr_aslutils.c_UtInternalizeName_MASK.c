
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* ExternalName; char* InternalName; int Length; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_NAMESTRING_INFO ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (int ) ;

ACPI_STATUS
FUNC_4 (
    char *VAR_1,
    char **VAR_2)
{
    ACPI_NAMESTRING_INFO VAR_3;
    ACPI_STATUS VAR_4;


    if (!VAR_1)
    {
        return (VAR_0);
    }



    VAR_3.ExternalName = VAR_1;
    FUNC_2 (&VAR_3);



    VAR_3.InternalName = FUNC_3 (VAR_3.Length);



    VAR_4 = FUNC_1 (&VAR_3);
    if (FUNC_0 (VAR_4))
    {
        return (VAR_4);
    }

    *VAR_2 = VAR_3.InternalName;
    return (VAR_0);
}
