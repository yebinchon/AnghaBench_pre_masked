
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Next; int Flags; void* Name; } ;
typedef int ACPI_STRING ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_INTERFACE_INFO ;


 void* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (int ) ;

ACPI_STATUS
FUNC_4 (
    ACPI_STRING VAR_4)
{
    ACPI_INTERFACE_INFO *VAR_5;




    VAR_5 = FUNC_0 (sizeof (ACPI_INTERFACE_INFO));
    if (!VAR_5)
    {
        return (VAR_1);
    }

    VAR_5->Name = FUNC_0 (FUNC_3 (VAR_4) + 1);
    if (!VAR_5->Name)
    {
        FUNC_1 (VAR_5);
        return (VAR_1);
    }



    FUNC_2 (VAR_5->Name, VAR_4);
    VAR_5->Flags = VAR_0;
    VAR_5->Next = VAR_3;

    VAR_3 = VAR_5;
    return (VAR_2);
}
