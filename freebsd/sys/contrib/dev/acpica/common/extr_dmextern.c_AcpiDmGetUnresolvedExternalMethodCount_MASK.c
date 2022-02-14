
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_3__ {scalar_t__ Type; int Flags; struct TYPE_3__* Next; } ;
typedef TYPE_1__ ACPI_EXTERNAL_LIST ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

UINT32
FUNC_0 (
    void)
{
    ACPI_EXTERNAL_LIST *VAR_3 = VAR_2;
    UINT32 VAR_4 = 0;


    while (VAR_3)
    {
        if (VAR_3->Type == VAR_1 &&
            !(VAR_3->Flags & VAR_0))
        {
            VAR_4++;
        }

        VAR_3 = VAR_3->Next;
    }

    return (VAR_4);
}
