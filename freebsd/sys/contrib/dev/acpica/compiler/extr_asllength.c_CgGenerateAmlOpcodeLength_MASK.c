
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int AmlOpcode; int AmlOpcodeLength; int CompileFlags; int AmlLength; int AmlSubtreeLength; scalar_t__ AmlPkgLenBytes; } ;
struct TYPE_6__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;






 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_1)
{



    if (VAR_1->Asl.AmlOpcode > 0x00FF)
    {
        VAR_1->Asl.AmlOpcodeLength = 2;
    }
    else
    {
        VAR_1->Asl.AmlOpcodeLength = 1;
    }



    VAR_1->Asl.AmlPkgLenBytes = 0;
    if (VAR_1->Asl.CompileFlags & VAR_0)
    {
        VAR_1->Asl.AmlPkgLenBytes = FUNC_0 (
            VAR_1, VAR_1->Asl.AmlSubtreeLength);
    }



    switch (VAR_1->Asl.AmlOpcode)
    {
    case 131:

        VAR_1->Asl.AmlLength = 1;
        break;

    case 128:

        VAR_1->Asl.AmlLength = 2;
        break;

    case 130:

        VAR_1->Asl.AmlLength = 4;
        break;

    case 129:

        VAR_1->Asl.AmlLength = 8;
        break;

    default:


        break;
    }
}
