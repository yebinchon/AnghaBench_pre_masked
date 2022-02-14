
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ParseOpcode; TYPE_2__* Child; TYPE_2__* Parent; } ;
struct TYPE_5__ {TYPE_1__ Asl; } ;
typedef int BOOLEAN ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;







 int VAR_1 ;

BOOLEAN
FUNC_0 (
    ACPI_PARSE_OBJECT *VAR_2)
{
    ACPI_PARSE_OBJECT *VAR_3;


    switch (VAR_2->Asl.ParseOpcode)
    {
    case 130:
    case 134:



        return (VAR_1);

    default:

        break;
    }



    VAR_3 = VAR_2->Asl.Parent;
    switch (VAR_3->Asl.ParseOpcode)
    {


    case 131:
    case 128:



        if (VAR_3->Asl.Child == VAR_2)
        {
            return (VAR_1);
        }

        return (VAR_0);



    case 129:
    case 133:
    case 132:

        return (VAR_0);

    default:



        return (VAR_1);
    }
}
