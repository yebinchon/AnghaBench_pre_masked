
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Next; int Filename; } ;
typedef TYPE_1__ ACPI_FILE_NODE ;


 int FUNC_0 (int ,char*) ;

ACPI_FILE_NODE*
FUNC_1(
    char *VAR_0,
    ACPI_FILE_NODE *VAR_1)
{
    ACPI_FILE_NODE *VAR_2 = VAR_1;


    if (!VAR_0)
    {
        return (((void*)0));
    }

    while (VAR_2)
    {
        if (!FUNC_0 (VAR_2->Filename, VAR_0))
        {
            return (VAR_2);
        }

        VAR_2 = VAR_2->Next;
    }
    return (((void*)0));
}
