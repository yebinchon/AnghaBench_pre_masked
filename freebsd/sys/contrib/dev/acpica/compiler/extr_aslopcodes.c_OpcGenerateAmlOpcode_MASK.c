
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


typedef size_t UINT16 ;
struct TYPE_17__ {int Integer; } ;
struct TYPE_18__ {int ParseOpcode; int AmlOpcodeLength; TYPE_1__ Value; int CompileFlags; int AcpiBtype; int AmlOpcode; } ;
struct TYPE_19__ {TYPE_2__ Asl; } ;
struct TYPE_16__ {int Value; int Flags; int AcpiBtype; int AmlOpcode; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,TYPE_3__*,int *) ;
 int VAR_4 ;
 TYPE_14__* VAR_5 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int VAR_6 ;

void
FUNC_10 (
    ACPI_PARSE_OBJECT *VAR_7)
{
    UINT16 VAR_8;


    VAR_8 = (UINT16) (VAR_7->Asl.ParseOpcode - VAR_1);

    VAR_7->Asl.AmlOpcode = VAR_5[VAR_8].AmlOpcode;
    VAR_7->Asl.AcpiBtype = VAR_5[VAR_8].AcpiBtype;
    VAR_7->Asl.CompileFlags |= VAR_5[VAR_8].Flags;

    if (!VAR_7->Asl.Value.Integer)
    {
        VAR_7->Asl.Value.Integer = VAR_5[VAR_8].Value;
    }



    switch (VAR_7->Asl.ParseOpcode)
    {
    case 134:



        (void) FUNC_9 (VAR_7);
        break;

    case 133:

        VAR_7->Asl.AmlOpcodeLength = 1;
        break;

    case 139:

        FUNC_1 (VAR_7);
        break;

    case 138:

        FUNC_2 (VAR_7);
        break;

    case 137:

        FUNC_3 (VAR_7);
        break;

    case 132:

        FUNC_6 (VAR_7);
        break;

    case 136:

        FUNC_4 (VAR_7);
        break;

    case 130:

        FUNC_5 (VAR_7);
        break;

    case 129:

        FUNC_8 (VAR_7);
        break;

    case 128:

        FUNC_7 (VAR_7);
        break;

    case 135:

        VAR_4 = VAR_6;
        break;

    case 131:

        if (VAR_3 == 32)
        {
            FUNC_0 (VAR_2, VAR_0, VAR_7, ((void*)0));
        }
        break;

    default:



        break;
    }

    return;
}
