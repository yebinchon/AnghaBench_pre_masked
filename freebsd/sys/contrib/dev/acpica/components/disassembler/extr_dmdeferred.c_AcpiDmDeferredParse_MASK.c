
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_17__ {TYPE_5__* Arg; } ;
struct TYPE_18__ {int AmlOpcode; TYPE_5__* Parent; TYPE_2__ Value; TYPE_5__* Next; int AmlOpName; } ;
struct TYPE_16__ {int Name; } ;
struct TYPE_20__ {TYPE_3__ Common; TYPE_1__ Named; } ;
struct TYPE_19__ {int ParseFlags; } ;
typedef TYPE_4__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_5__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 TYPE_4__* FUNC_4 (int ,TYPE_5__*,int *,int *) ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*,int *,int *,int ,int *,int ) ;
 TYPE_5__* FUNC_6 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int VAR_6 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_9 (
    ACPI_PARSE_OBJECT *VAR_7,
    UINT8 *VAR_8,
    UINT32 VAR_9)
{
    ACPI_WALK_STATE *VAR_10;
    ACPI_STATUS VAR_11;
    ACPI_PARSE_OBJECT *VAR_12;
    ACPI_PARSE_OBJECT *VAR_13;
    ACPI_PARSE_OBJECT *VAR_14;
    ACPI_PARSE_OBJECT *VAR_15;


    FUNC_3 (VAR_6);


    if (!VAR_8 || !VAR_9)
    {
        FUNC_8 (VAR_5);
    }

    FUNC_0 ((VAR_0, "Parsing deferred opcode %s [%4.4s]\n",
        VAR_7->Common.AmlOpName, (char *) &VAR_7->Named.Name));



    VAR_10 = FUNC_4 (0, VAR_7, ((void*)0), ((void*)0));
    if (!VAR_10)
    {
        FUNC_8 (VAR_4);
    }

    VAR_11 = FUNC_5 (VAR_10, VAR_7, ((void*)0), VAR_8,
        VAR_9, ((void*)0), VAR_1);
    if (FUNC_1 (VAR_11))
    {
        FUNC_8 (VAR_11);
    }



    VAR_10->ParseFlags &= ~VAR_2;
    VAR_10->ParseFlags |= VAR_3;
    VAR_11 = FUNC_7 (VAR_10);
    if (FUNC_1 (VAR_11))
    {
        FUNC_8(VAR_11);
    }

    VAR_13 = (VAR_7->Common.Value.Arg)->Common.Next;
    VAR_12 = VAR_13;
    while (VAR_12)
    {
        VAR_12 = FUNC_6 (VAR_13, VAR_12);
    }





    switch (VAR_7->Common.AmlOpcode)
    {
    case 130:
    case 129:
    case 128:

        switch (VAR_7->Common.AmlOpcode)
        {
        case 129:

            VAR_15 = VAR_7->Common.Value.Arg;
            VAR_14 = VAR_15->Common.Next;
            FUNC_2 (VAR_15);
            break;

        case 128:
        case 130:
        default:

            VAR_14 = VAR_7->Common.Value.Arg;
            break;
        }

        VAR_7->Common.Value.Arg = VAR_14->Common.Value.Arg;



        VAR_13 = VAR_7;
        VAR_12 = VAR_13;
        while (VAR_12)
        {
            if (VAR_12->Common.Parent == VAR_14)
            {
                VAR_12->Common.Parent = VAR_7;
            }

            VAR_12 = FUNC_6 (VAR_13, VAR_12);
        }

        FUNC_2 (VAR_14);
        break;

    default:

        break;
    }

    FUNC_8 (VAR_5);
}
