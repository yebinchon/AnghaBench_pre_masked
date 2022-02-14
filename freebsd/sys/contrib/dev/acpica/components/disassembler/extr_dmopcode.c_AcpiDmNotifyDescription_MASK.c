
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_11__ {int Type; } ;
struct TYPE_8__ {int Integer; TYPE_4__* Arg; } ;
struct TYPE_9__ {TYPE_5__* Node; TYPE_2__ Value; TYPE_4__* Next; } ;
struct TYPE_7__ {int AmlOpcode; } ;
struct TYPE_10__ {TYPE_3__ Asl; TYPE_1__ Common; } ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;
typedef TYPE_5__ ACPI_NAMESPACE_NODE ;


 int VAR_0 ;



 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_1)
{
    ACPI_PARSE_OBJECT *VAR_2;
    ACPI_NAMESPACE_NODE *VAR_3;
    UINT8 VAR_4;
    UINT8 VAR_5 = VAR_0;




    VAR_2 = VAR_1->Asl.Value.Arg;
    VAR_2 = VAR_2->Asl.Next;

    switch (VAR_2->Common.AmlOpcode)
    {
    case 128:
    case 129:

        VAR_4 = (UINT8) VAR_2->Common.AmlOpcode;
        break;

    case 130:

        VAR_4 = (UINT8) VAR_2->Asl.Value.Integer;
        break;

    default:
        return;
    }






    VAR_3 = VAR_1->Asl.Node;
    if (VAR_3)
    {
        VAR_5 = VAR_3->Type;
    }

    FUNC_0 (" // %s", FUNC_1 (VAR_4, VAR_5));
}
