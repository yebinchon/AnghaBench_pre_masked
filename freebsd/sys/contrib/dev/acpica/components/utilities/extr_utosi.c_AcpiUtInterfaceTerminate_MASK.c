
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Flags; struct TYPE_4__* Name; struct TYPE_4__* Next; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_INTERFACE_INFO ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

ACPI_STATUS
FUNC_4 (
    void)
{
    ACPI_STATUS VAR_7;
    ACPI_INTERFACE_INFO *VAR_8;


    VAR_7 = FUNC_2 (VAR_5, VAR_3);
    if (FUNC_0 (VAR_7))
    {
        return (VAR_7);
    }

    VAR_8 = VAR_6;
    while (VAR_8)
    {
        VAR_6 = VAR_8->Next;

        if (VAR_8->Flags & VAR_1)
        {


            FUNC_1 (VAR_8->Name);
            FUNC_1 (VAR_8);
        }
        else
        {


            if (VAR_8->Flags & VAR_0)
            {
                VAR_8->Flags |= VAR_2;
            }
            else
            {
                VAR_8->Flags &= ~VAR_2;
            }
        }

        VAR_8 = VAR_6;
    }

    FUNC_3 (VAR_5);
    return (VAR_4);
}
