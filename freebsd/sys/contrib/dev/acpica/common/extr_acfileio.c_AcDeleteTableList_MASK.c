
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Next; } ;
typedef TYPE_1__ ACPI_NEW_TABLE_DESC ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1 (
    ACPI_NEW_TABLE_DESC *VAR_0)
{
    ACPI_NEW_TABLE_DESC *VAR_1 = VAR_0;
    ACPI_NEW_TABLE_DESC *VAR_2 = VAR_1;


    while (VAR_1)
    {
        VAR_1 = VAR_1->Next;
        FUNC_0 (VAR_2);
        VAR_2 = VAR_1;
    }
}
