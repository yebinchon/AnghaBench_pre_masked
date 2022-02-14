
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_23__ {int Size; TYPE_6__* Arg; } ;
struct TYPE_24__ {TYPE_2__ Value; int AmlOpcode; TYPE_6__* Next; } ;
struct TYPE_22__ {int Data; } ;
struct TYPE_27__ {TYPE_3__ Common; TYPE_1__ Named; } ;
struct TYPE_26__ {int PkgEnd; int Aml; } ;
struct TYPE_25__ {int ArgCount; } ;
typedef TYPE_4__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_5__ ACPI_PARSE_STATE ;
typedef TYPE_6__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_5__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_6__* FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_6__*) ;
 TYPE_6__* FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_4__*,TYPE_5__*,TYPE_6__*,int ) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*,int,TYPE_6__*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (int) ;
 int VAR_12 ;
 int FUNC_15 (int ) ;

ACPI_STATUS
FUNC_16 (
    ACPI_WALK_STATE *VAR_13,
    ACPI_PARSE_STATE *VAR_14,
    UINT32 VAR_15,
    ACPI_PARSE_OBJECT **VAR_16)
{
    ACPI_PARSE_OBJECT *VAR_17 = ((void*)0);
    ACPI_PARSE_OBJECT *VAR_18 = ((void*)0);
    ACPI_PARSE_OBJECT *VAR_19;
    UINT32 VAR_20;
    ACPI_STATUS VAR_21 = VAR_7;


    FUNC_2 (VAR_12, VAR_14);


    FUNC_0 ((VAR_0,
        "Expected argument type ARGP: %s (%2.2X)\n",
        FUNC_14 (VAR_15), VAR_15));

    switch (VAR_15)
    {
    case 145:
    case 128:
    case 140:
    case 143:
    case 138:
    case 137:



        VAR_17 = FUNC_6 (VAR_8, VAR_14->Aml);
        if (!VAR_17)
        {
            FUNC_15 (VAR_6);
        }

        FUNC_11 (VAR_14, VAR_15, VAR_17);
        break;

    case 134:



        VAR_14->PkgEnd = FUNC_10 (VAR_14);
        break;

    case 139:

        if (VAR_14->Aml < VAR_14->PkgEnd)
        {


            while (VAR_14->Aml < VAR_14->PkgEnd)
            {
                VAR_19 = FUNC_8 (VAR_14);
                if (!VAR_19)
                {
                    FUNC_15 (VAR_6);
                }

                if (VAR_18)
                {
                    VAR_18->Common.Next = VAR_19;
                }
                else
                {
                    VAR_17 = VAR_19;
                }
                VAR_18 = VAR_19;
            }



            VAR_14->Aml = VAR_14->PkgEnd;
        }
        break;

    case 144:

        if (VAR_14->Aml < VAR_14->PkgEnd)
        {


            VAR_17 = FUNC_6 (VAR_9,
                VAR_14->Aml);
            if (!VAR_17)
            {
                FUNC_15 (VAR_6);
            }



            VAR_17->Common.Value.Size = (UINT32)
                FUNC_5 (VAR_14->PkgEnd, VAR_14->Aml);
            VAR_17->Named.Data = VAR_14->Aml;



            VAR_14->Aml = VAR_14->PkgEnd;
        }
        break;

    case 133:
    case 136:

        FUNC_0 ((VAR_0,
            "**** SimpleName/NameOrRef: %s (%2.2X)\n",
            FUNC_14 (VAR_15), VAR_15));

        VAR_20 = FUNC_13 (VAR_14);
        if (VAR_20 == 0 ||
            FUNC_12 (VAR_20) ||
            FUNC_4 (VAR_20) ||
            FUNC_3 (VAR_20))
        {


            VAR_17 = FUNC_6 (VAR_11, VAR_14->Aml);
            if (!VAR_17)
            {
                FUNC_15 (VAR_6);
            }

            VAR_21 = FUNC_9 (VAR_13, VAR_14,
                VAR_17, VAR_1);
        }
        else
        {


            VAR_13->ArgCount = 1;
        }
        break;

    case 131:
    case 132:

        FUNC_0 ((VAR_0,
            "**** Target/Supername: %s (%2.2X)\n",
            FUNC_14 (VAR_15), VAR_15));

        VAR_20 = FUNC_13 (VAR_14);
        if (VAR_20 == 0 ||
            FUNC_12 (VAR_20) ||
            FUNC_4 (VAR_20) ||
            FUNC_3 (VAR_20))
        {


            VAR_17 = FUNC_6 (VAR_11, VAR_14->Aml);
            if (!VAR_17)
            {
                FUNC_15 (VAR_6);
            }

            VAR_21 = FUNC_9 (VAR_13, VAR_14,
                VAR_17, VAR_2);

            if (VAR_17->Common.AmlOpcode == VAR_10)
            {


                FUNC_7 (VAR_17->Common.Value.Arg);
                FUNC_7 (VAR_17);
                VAR_17 = ((void*)0);
                VAR_13->ArgCount = 1;
            }
        }
        else
        {


            VAR_13->ArgCount = 1;
        }
        break;

    case 142:
    case 130:

        FUNC_0 ((VAR_0,
            "**** TermArg/DataObj: %s (%2.2X)\n",
            FUNC_14 (VAR_15), VAR_15));



        VAR_13->ArgCount = 1;
        break;

    case 141:
    case 129:
    case 135:

        if (VAR_14->Aml < VAR_14->PkgEnd)
        {


            VAR_13->ArgCount = VAR_3;
        }
        break;

    default:

        FUNC_1 ((VAR_5, "Invalid ArgType: 0x%X", VAR_15));
        VAR_21 = VAR_4;
        break;
    }

    *VAR_16 = VAR_17;
    FUNC_15 (VAR_21);
}
