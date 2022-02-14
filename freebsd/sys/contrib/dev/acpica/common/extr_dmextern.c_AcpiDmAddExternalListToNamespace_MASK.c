
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* Next; int Value; int Type; int InternalPath; } ;
typedef TYPE_1__ ACPI_EXTERNAL_LIST ;


 int FUNC_0 (int ,int ,int ) ;
 TYPE_1__* VAR_0 ;

void
FUNC_1 (
    void)
{
    ACPI_EXTERNAL_LIST *VAR_1 = VAR_0;


    while (VAR_1)
    {
        FUNC_0 (VAR_1->InternalPath,
            VAR_1->Type, VAR_1->Value);
        VAR_1 = VAR_1->Next;
    }
}
