
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_9__ ;
typedef struct TYPE_41__ TYPE_8__ ;
typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_1__ ;
typedef struct TYPE_33__ TYPE_10__ ;


typedef int UINT8 ;
typedef size_t UINT32 ;
struct TYPE_42__ {size_t BitOffset; int Level; TYPE_8__* MappingOp; } ;
struct TYPE_37__ {int Integer; int Name; TYPE_8__* Arg; int String; } ;
struct TYPE_38__ {int DisasmFlags; int DisasmOpcode; int AmlOpcode; TYPE_4__ Value; int Parent; } ;
struct TYPE_34__ {int * Data; int Name; } ;
struct TYPE_41__ {TYPE_5__ Common; TYPE_1__ Named; } ;
struct TYPE_40__ {int ResultCount; TYPE_3__* Results; } ;
struct TYPE_39__ {char* Description; } ;
struct TYPE_35__ {int * ObjDesc; } ;
struct TYPE_36__ {TYPE_2__ Results; } ;
struct TYPE_33__ {char* Name; } ;
typedef TYPE_6__ AH_DEVICE_ID ;
typedef TYPE_7__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_8__ ACPI_PARSE_OBJECT ;
typedef TYPE_9__ ACPI_OP_WALK_INFO ;
typedef TYPE_10__ ACPI_OPCODE_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* FUNC_0 (int) ;
 char* FUNC_1 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int FUNC_2 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;


 int VAR_17 ;
 int VAR_18 ;




 int VAR_19 ;




 int FUNC_3 (TYPE_8__*,int ,int *,int ) ;
 TYPE_6__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_9__*,TYPE_8__*) ;
 int FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (TYPE_8__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (size_t) ;
 size_t FUNC_11 (int ) ;
 int FUNC_12 (TYPE_8__*,int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (TYPE_8__*) ;
 int FUNC_15 (TYPE_7__*,TYPE_8__*) ;
 int FUNC_16 (TYPE_8__*) ;
 int FUNC_17 (TYPE_8__*) ;
 int FUNC_18 (TYPE_8__*) ;
 int FUNC_19 (TYPE_8__*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (TYPE_9__*,int ,int *,size_t) ;
 char** VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_22 (char*,...) ;
 int FUNC_23 (TYPE_8__*,int ) ;
 TYPE_8__* FUNC_24 (int *,TYPE_8__*) ;
 TYPE_10__* FUNC_25 (int) ;
 int FUNC_26 (int ,int ) ;

void
FUNC_27 (
    ACPI_WALK_STATE *VAR_24,
    ACPI_OP_WALK_INFO *VAR_25,
    ACPI_PARSE_OBJECT *VAR_26)
{
    const ACPI_OPCODE_INFO *VAR_27 = ((void*)0);
    UINT32 VAR_28;
    UINT32 VAR_29;
    ACPI_PARSE_OBJECT *VAR_30;
    ACPI_STATUS VAR_31;
    UINT8 *VAR_32;
    const AH_DEVICE_ID *VAR_33;


    if (!VAR_26)
    {
        FUNC_22 ("<NULL OP PTR>");
        return;
    }

    if (VAR_26->Common.DisasmFlags & VAR_11)
    {
        return;
    }

    switch (VAR_26->Common.DisasmOpcode)
    {
    case 150:

        FUNC_19 (VAR_26);
        return;

    case 151:

        if (!VAR_21)
        {
            switch (VAR_26->Common.AmlOpcode)
            {
            case 135:
                FUNC_22 ("LNotEqual");
                break;

            case 134:
                FUNC_22 ("LLessEqual");
                break;

            case 133:
                FUNC_22 ("LGreaterEqual");
                break;

            default:
                break;
            }
        }

        VAR_26->Common.DisasmOpcode = 0;
        VAR_26->Common.DisasmFlags |= VAR_12;
        return;

    default:
        break;
    }

    VAR_27 = FUNC_25 (VAR_26->Common.AmlOpcode);



    switch (VAR_26->Common.AmlOpcode)
    {
    case 132:

        VAR_30 = VAR_26->Common.Value.Arg;
        if ((VAR_30->Common.AmlOpcode == 135) ||
            (VAR_30->Common.AmlOpcode == 134) ||
            (VAR_30->Common.AmlOpcode == 133))
        {
            VAR_30->Common.DisasmOpcode = 151;
            VAR_26->Common.DisasmOpcode = VAR_4;
        }
        else
        {
            FUNC_22 ("%s", VAR_27->Name);
        }
        break;

    case 148:

        FUNC_22 ("0x%2.2X", (UINT32) VAR_26->Common.Value.Integer);
        break;

    case 128:

        if (VAR_26->Common.DisasmOpcode == VAR_2)
        {
            FUNC_10 ((UINT32) VAR_26->Common.Value.Integer);
        }
        else
        {
            FUNC_22 ("0x%4.4X", (UINT32) VAR_26->Common.Value.Integer);
        }
        break;

    case 147:

        if (VAR_26->Common.DisasmOpcode == VAR_2)
        {
            FUNC_10 ((UINT32) VAR_26->Common.Value.Integer);
        }
        else
        {
            FUNC_22 ("0x%8.8X", (UINT32) VAR_26->Common.Value.Integer);
        }
        break;

    case 131:

        FUNC_22 ("0x%8.8X%8.8X",
            FUNC_1 (VAR_26->Common.Value.Integer));
        break;

    case 130:

        FUNC_26 (VAR_26->Common.Value.String, VAR_14);



        if (VAR_26->Common.DisasmOpcode == VAR_3)
        {


            VAR_33 = FUNC_4 (VAR_26->Common.Value.String);
            if (VAR_33)
            {
                FUNC_22 (" /* %s */", VAR_33->Description);
            }
        }
        break;

    case 149:
        if (!VAR_23)
        {
            VAR_31 = FUNC_15 (VAR_24, VAR_26);
            if (FUNC_2 (VAR_31))
            {
                VAR_26->Common.DisasmOpcode = VAR_6;
                FUNC_22 ("ResourceTemplate");
                break;
            }
            else if (VAR_31 == VAR_15)
            {
                FUNC_22 (
                    "/**** Is ResourceTemplate, "
                    "but EndTag not at buffer end ****/ ");
            }
        }

        if (FUNC_18 (VAR_26))
        {
            VAR_26->Common.DisasmOpcode = VAR_10;
            FUNC_22 ("ToUUID (");
        }
        else if (FUNC_17 (VAR_26))
        {
            VAR_26->Common.DisasmOpcode = VAR_9;
            FUNC_22 ("Unicode (");
        }
        else if (FUNC_16 (VAR_26))
        {
            VAR_26->Common.DisasmOpcode = VAR_7;
            FUNC_22 ("Buffer");
        }
        else if (FUNC_14 (VAR_26))
        {
            VAR_26->Common.DisasmOpcode = VAR_5;
            FUNC_22 ("ToPLD (");
        }
        else
        {
            VAR_26->Common.DisasmOpcode = VAR_0;
            FUNC_22 ("Buffer");
        }
        break;

    case 137:

        FUNC_20 (VAR_26->Common.Value.Name);
        break;

    case 138:

        VAR_29 = FUNC_11 (VAR_26->Named.Name);

        FUNC_22 (",");
        FUNC_3 (VAR_26, VAR_19, ((void*)0), 0);
        FUNC_22 ("%*.s  %u", (unsigned) (5 - VAR_29), " ",
            (UINT32) VAR_26->Common.Value.Integer);

        FUNC_7 (VAR_26);

        VAR_25->BitOffset += (UINT32) VAR_26->Common.Value.Integer;
        break;

    case 136:



        VAR_28 = (UINT32) VAR_26->Common.Value.Integer;
        VAR_25->BitOffset += VAR_28;

        if (VAR_25->BitOffset % 8 == 0)
        {
            FUNC_22 ("Offset (0x%.2X)", FUNC_0 (VAR_25->BitOffset));
        }
        else
        {
            FUNC_22 ("    ,   %u", VAR_28);
        }

        FUNC_7 (VAR_26);
        break;

    case 143:
    case 140:

        FUNC_22 ("AccessAs (%s, ",
            VAR_20 [(UINT32) (VAR_26->Common.Value.Integer & 0x7)]);

        FUNC_9 ((UINT8) (VAR_26->Common.Value.Integer >> 8));

        if (VAR_26->Common.AmlOpcode == 140)
        {
            FUNC_22 (" (0x%2.2X)", (unsigned)
                ((VAR_26->Common.Value.Integer >> 16) & 0xFF));
        }

        FUNC_22 (")");
        FUNC_7 (VAR_26);
        FUNC_3 (VAR_26, VAR_17, ((void*)0), 0);
        break;

    case 141:




        FUNC_22 ("Connection (");
        VAR_30 = VAR_26->Common.Value.Arg;

        if (VAR_30->Common.AmlOpcode == 142)
        {
            FUNC_22 ("\n");

            VAR_32 = VAR_30->Named.Data;
            VAR_29 = (UINT32) VAR_30->Common.Value.Integer;

            VAR_25->Level += 1;
            VAR_25->MappingOp = VAR_26;
            VAR_26->Common.DisasmOpcode = VAR_6;

            FUNC_21 (VAR_25, VAR_26->Common.Parent, VAR_32, VAR_29);

            VAR_25->Level -= 1;
            FUNC_13 (VAR_25->Level);
        }
        else
        {
            FUNC_20 (VAR_30->Common.Value.Name);
        }

        FUNC_22 (")");
        FUNC_7 (VAR_26);
        FUNC_3 (VAR_26, VAR_17, ((void*)0), 0);
        FUNC_3 (VAR_26, VAR_16, ((void*)0), 0);
        FUNC_22 ("\n");

        VAR_26->Common.DisasmFlags |= VAR_12;
        VAR_30->Common.DisasmFlags |= VAR_12;
        break;

    case 142:

        FUNC_6 (VAR_25, VAR_26);
        break;

    case 139:

        VAR_26 = FUNC_24 (((void*)0), VAR_26);
        VAR_26->Common.DisasmFlags |= VAR_12;

        FUNC_20 (VAR_26->Common.Value.Name);
        break;

    case 129:

        if (VAR_26->Common.DisasmOpcode == VAR_8)
        {
            FUNC_22 ("%s", "Switch");
            break;
        }

        FUNC_22 ("%s", VAR_27->Name);
        break;

    case 144:

        if (VAR_26->Common.DisasmOpcode == VAR_1)
        {
            FUNC_22 ("%s", "Case");
            break;
        }

        FUNC_22 ("%s", VAR_27->Name);
        break;

    case 146:

        FUNC_8 (VAR_26);
        break;

    case 145:

        if (VAR_22)
        {
            FUNC_12 (VAR_26, FUNC_23(VAR_26, 0));
        }

        break;

    default:



        FUNC_22 ("%s", VAR_27->Name);
        break;
    }
}
