
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* Op; } ;
struct TYPE_6__ {char* String; int Integer; } ;
struct TYPE_7__ {int ParseOpcode; TYPE_1__ Value; TYPE_3__* Next; TYPE_3__* Child; } ;
struct TYPE_8__ {TYPE_2__ Asl; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;
typedef TYPE_4__ ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;



 char* FUNC_1 (int ) ;

char *
FUNC_2 (
    ACPI_NAMESPACE_NODE *VAR_1)
{
    ACPI_PARSE_OBJECT *VAR_2;
    ACPI_PARSE_OBJECT *VAR_3;
    char *VAR_4;


    VAR_2 = VAR_1->Op;
    if (!VAR_2)
    {


        return ("Unresolved Symbol - referenced but not defined in this table");
    }

    switch (VAR_2->Asl.ParseOpcode)
    {
    case 129:

        VAR_3 = VAR_2->Asl.Child;
        VAR_3 = VAR_3->Asl.Next;

        switch (VAR_3->Asl.ParseOpcode)
        {
        case 128:

            return (VAR_3->Asl.Value.String);

        case 130:



            VAR_4 = FUNC_1 (VAR_0);
            FUNC_0 (VAR_4, VAR_3->Asl.Value.Integer);
            return (VAR_4);

        default:

            return ("UNKNOWN");
        }

    default:
        return ("-No HID-");
    }
}
