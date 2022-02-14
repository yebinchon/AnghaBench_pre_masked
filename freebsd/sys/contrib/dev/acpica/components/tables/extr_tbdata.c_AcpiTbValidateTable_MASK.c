
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Pointer; int Flags; int Length; } ;
typedef TYPE_1__ ACPI_TABLE_DESC ;
typedef int ACPI_STATUS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *,int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

ACPI_STATUS
FUNC_3 (
    ACPI_TABLE_DESC *VAR_3)
{
    ACPI_STATUS VAR_4 = VAR_1;


    FUNC_0 (VAR_2);




    if (!VAR_3->Pointer)
    {
        VAR_4 = FUNC_1 (VAR_3, &VAR_3->Pointer,
            &VAR_3->Length, &VAR_3->Flags);
        if (!VAR_3->Pointer)
        {
            VAR_4 = VAR_0;
        }
    }

    FUNC_2 (VAR_4);
}
