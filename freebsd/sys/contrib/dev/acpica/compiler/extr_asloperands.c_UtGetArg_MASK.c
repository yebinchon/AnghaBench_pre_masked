
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_5__ {TYPE_2__* Next; TYPE_2__* Child; } ;
struct TYPE_6__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;



ACPI_PARSE_OBJECT *
FUNC_0 (
    ACPI_PARSE_OBJECT *VAR_0,
    UINT32 VAR_1)
{
    ACPI_PARSE_OBJECT *VAR_2 = ((void*)0);




    VAR_2 = VAR_0->Asl.Child;
    while (VAR_2 && VAR_1)
    {
        VAR_1--;
        VAR_2 = VAR_2->Asl.Next;
    }

    return (VAR_2);
}
