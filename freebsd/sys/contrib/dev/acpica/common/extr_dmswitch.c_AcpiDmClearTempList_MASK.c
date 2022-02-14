
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Next; int * Op; } ;
typedef TYPE_1__ ACPI_PARSE_OBJECT_LIST ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

void
FUNC_1 (
    void)
{
    ACPI_PARSE_OBJECT_LIST *VAR_1;


    while (VAR_0)
    {
        VAR_1 = VAR_0;
        VAR_0 = VAR_0->Next;
        VAR_1->Op = ((void*)0);
        VAR_1->Next = ((void*)0);
        FUNC_0 (VAR_1);
    }
}
