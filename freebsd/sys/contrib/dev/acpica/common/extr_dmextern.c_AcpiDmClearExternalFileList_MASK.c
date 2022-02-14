
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Path; struct TYPE_4__* Next; } ;
typedef TYPE_1__ ACPI_EXTERNAL_FILE ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

void
FUNC_1 (
    void)
{
    ACPI_EXTERNAL_FILE *VAR_1;


    while (VAR_0)
    {
        VAR_1 = VAR_0->Next;
        FUNC_0 (VAR_0->Path);
        FUNC_0 (VAR_0);
        VAR_0 = VAR_1;
    }
}
