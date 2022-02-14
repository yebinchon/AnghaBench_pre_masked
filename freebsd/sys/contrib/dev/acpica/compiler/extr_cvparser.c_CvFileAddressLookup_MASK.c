
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* FileStart; char* FileEnd; struct TYPE_4__* Next; } ;
typedef TYPE_1__ ACPI_FILE_NODE ;



__attribute__((used)) static ACPI_FILE_NODE *
FUNC_0(
    char *VAR_0,
    ACPI_FILE_NODE *VAR_1)
{
    ACPI_FILE_NODE *VAR_2 = VAR_1;


    while (VAR_2)
    {
        if ((VAR_0 >= VAR_2->FileStart) &&
            (VAR_0 < VAR_2->FileEnd ||
            !VAR_2->FileEnd))
        {
            return (VAR_2);
        }

        VAR_2 = VAR_2->Next;
    }

    return (((void*)0));
}
