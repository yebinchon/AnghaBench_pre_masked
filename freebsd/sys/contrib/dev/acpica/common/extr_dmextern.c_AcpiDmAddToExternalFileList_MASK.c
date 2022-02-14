
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* Path; struct TYPE_4__* Next; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_EXTERNAL_FILE ;


 char* FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

ACPI_STATUS
FUNC_5 (
    char *VAR_3)
{
    ACPI_EXTERNAL_FILE *VAR_4;
    char *VAR_5;


    if (!VAR_3)
    {
        return (VAR_1);
    }

    VAR_5 = FUNC_0 (FUNC_4 (VAR_3) + 1);
    if (!VAR_5)
    {
        return (VAR_0);
    }

    VAR_4 = FUNC_1 (sizeof (ACPI_EXTERNAL_FILE));
    if (!VAR_4)
    {
        FUNC_2 (VAR_5);
        return (VAR_0);
    }



    FUNC_3 (VAR_5, VAR_3);
    VAR_4->Path = VAR_5;

    if (VAR_2)
    {
        VAR_4->Next = VAR_2;
    }

    VAR_2 = VAR_4;
    return (VAR_1);
}
