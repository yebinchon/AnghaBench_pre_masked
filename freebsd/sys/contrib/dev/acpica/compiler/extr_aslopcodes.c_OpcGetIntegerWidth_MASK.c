
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
struct TYPE_5__ {scalar_t__ Integer; } ;
struct TYPE_6__ {TYPE_1__ Value; TYPE_3__* Next; TYPE_3__* Child; } ;
struct TYPE_7__ {TYPE_2__ Asl; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;

void
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_1)
{
    ACPI_PARSE_OBJECT *VAR_2;


    if (!VAR_1)
    {
        return;
    }

    if (VAR_0)
    {
        FUNC_0 (VAR_0);
    }
    else
    {
        VAR_2 = VAR_1->Asl.Child;
        VAR_2 = VAR_2->Asl.Next;
        VAR_2 = VAR_2->Asl.Next;



        FUNC_0 ((UINT8) VAR_2->Asl.Value.Integer);
    }
}
