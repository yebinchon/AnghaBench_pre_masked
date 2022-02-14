
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_9__ ;
typedef struct TYPE_42__ TYPE_8__ ;
typedef struct TYPE_41__ TYPE_7__ ;
typedef struct TYPE_40__ TYPE_6__ ;
typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_43__ {scalar_t__ Class; int Flags; } ;
struct TYPE_42__ {scalar_t__ PreviousAml; scalar_t__ StartAml; scalar_t__ AmlOffset; scalar_t__ LastLevel; int Count; scalar_t__ Level; int Flags; int BitOffset; TYPE_2__* WalkState; } ;
struct TYPE_38__ {int Name; } ;
struct TYPE_40__ {int AmlOpcode; scalar_t__ Aml; int DisasmFlags; scalar_t__ DisasmOpcode; TYPE_4__ Value; TYPE_7__* Next; TYPE_7__* Parent; } ;
struct TYPE_39__ {TYPE_7__* Parent; } ;
struct TYPE_37__ {int Path; } ;
struct TYPE_41__ {TYPE_6__ Common; TYPE_5__ Asl; TYPE_3__ Named; } ;
struct TYPE_35__ {int AmlStart; } ;
struct TYPE_36__ {TYPE_1__ ParserState; } ;
typedef int ACPI_STATUS ;
typedef TYPE_7__ ACPI_PARSE_OBJECT ;
typedef TYPE_8__ ACPI_OP_WALK_INFO ;
typedef TYPE_9__ ACPI_OPCODE_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;



 scalar_t__ VAR_14 ;

 int VAR_15 ;


 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;



 int VAR_19 ;
 int VAR_20 ;






 int VAR_21 ;




 scalar_t__ VAR_22 ;
 int FUNC_1 (TYPE_7__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_7__*,int ,char*,scalar_t__) ;
 int FUNC_5 (scalar_t__,TYPE_7__*) ;
 int VAR_23 ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*) ;
 scalar_t__ FUNC_8 (TYPE_7__*,TYPE_8__*) ;
 int FUNC_9 (int *,TYPE_8__*,TYPE_7__*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_7__*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (TYPE_7__*) ;
 int FUNC_15 (TYPE_7__*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_7__*) ;
 int FUNC_18 (TYPE_7__*) ;
 int FUNC_19 (TYPE_7__*,int (*) (TYPE_7__*,scalar_t__,void*),int ,TYPE_8__*) ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int FUNC_20 (char*,...) ;
 int FUNC_21 (int *,TYPE_7__*) ;
 TYPE_7__* FUNC_22 (int *,TYPE_7__*) ;
 scalar_t__ FUNC_23 (TYPE_7__*) ;
 TYPE_9__* FUNC_24 (int) ;
 int FUNC_25 (scalar_t__,scalar_t__,int ,scalar_t__) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;

__attribute__((used)) static ACPI_STATUS
FUNC_26 (
    ACPI_PARSE_OBJECT *VAR_33,
    UINT32 VAR_34,
    void *VAR_35)
{
    ACPI_OP_WALK_INFO *VAR_36 = VAR_35;
    const ACPI_OPCODE_INFO *VAR_37;
    UINT32 VAR_38;
    ACPI_PARSE_OBJECT *VAR_39;
    ACPI_PARSE_OBJECT *VAR_40;
    UINT32 VAR_41;




    if (VAR_24)
    {
        FUNC_3 (VAR_33);

        if (VAR_34 != 0 && FUNC_2 (VAR_33))
        {
            FUNC_5 (VAR_34, VAR_33);
        }



        FUNC_4 (VAR_33, VAR_13, ((void*)0), VAR_34);
    }

    VAR_37 = FUNC_24 (VAR_33->Common.AmlOpcode);



    if (VAR_27)
    {


        if ((VAR_37->Class == VAR_12) ||
            (VAR_37->Class == VAR_9) ||
            (VAR_37->Class == VAR_10) ||
            ((VAR_37->Class == VAR_11) && (!VAR_33->Common.Next)))
        {
            if (VAR_27 && VAR_36->PreviousAml)
            {


                if (VAR_33->Common.Aml > VAR_36->PreviousAml)
                {
                    FUNC_20 ("\n");
                    FUNC_25 (
                        (VAR_36->StartAml + VAR_36->AmlOffset),
                        (VAR_33->Common.Aml - VAR_36->PreviousAml),
                        VAR_32, VAR_36->AmlOffset);
                    FUNC_20 ("\n");
                }

                VAR_36->AmlOffset = (VAR_33->Common.Aml - VAR_36->StartAml);
            }

            VAR_36->PreviousAml = VAR_33->Common.Aml;
        }
    }

    if (VAR_33->Common.DisasmFlags & VAR_4)
    {


        return (VAR_6);
    }

    if (VAR_33->Common.DisasmOpcode == VAR_0)
    {


        return (VAR_7);
    }

    if (VAR_33->Common.AmlOpcode == 142)
    {
        VAR_39 = FUNC_22 (((void*)0), VAR_33);
        if (VAR_39)
        {
            VAR_39->Common.DisasmFlags |= VAR_5;



            if (!VAR_26)
            {




                if (VAR_39->Common.AmlOpcode == VAR_22)
                {
                    VAR_40 = VAR_39->Common.Next;

                    if (VAR_40 &&
                        (VAR_40->Common.AmlOpcode == VAR_14))
                    {


                        VAR_33->Common.DisasmFlags |= VAR_4;
                        return (VAR_6);
                    }
                }
            }
        }
    }



    if (VAR_34 == 0)
    {


        if (VAR_36->WalkState)
        {
            VAR_41 = (UINT32) FUNC_0 (VAR_33->Common.Aml,
                VAR_36->WalkState->ParserState.AmlStart);
            if (VAR_28)
            {
                if (VAR_25)
                {
                    FUNC_20 ("%5.5X/%4.4X: ",
                        VAR_41, (UINT32) VAR_33->Common.AmlOpcode);
                }
                else
                {
                    FUNC_20 ("AML Offset %5.5X, Opcode %4.4X: ",
                        VAR_41, (UINT32) VAR_33->Common.AmlOpcode);
                }
            }
        }

        if (VAR_33->Common.AmlOpcode == 131)
        {


            FUNC_20 ("{\n");



            if (!VAR_26)
            {
                FUNC_11 ();
            }

            return (VAR_7);
        }
    }
    else if ((FUNC_6 (VAR_33->Common.Parent) & VAR_30) &&
         (!(VAR_33->Common.DisasmFlags & VAR_5)) &&
         (!(VAR_33->Common.DisasmFlags & VAR_3)) &&
         (VAR_33->Common.AmlOpcode != VAR_16))
    {




        switch (VAR_33->Common.AmlOpcode)
        {
        case 136:
            if (VAR_29)
            {
                VAR_33->Common.DisasmFlags |= VAR_4;
                return (VAR_7);
            }



        default:

            FUNC_13 (VAR_34);
            break;
        }

        VAR_36->LastLevel = VAR_34;
        VAR_36->Count = 0;
    }







    VAR_36->Count++;
    if (VAR_36->Count > 12)
    {
        VAR_36->Count = 0;
        FUNC_20 ("\n");
        FUNC_13 (VAR_36->LastLevel + 1);
    }



    if (FUNC_8 (VAR_33, VAR_36))
    {
        return (VAR_7);
    }



    FUNC_9 (((void*)0), VAR_36, VAR_33);

    if ((VAR_33->Common.DisasmOpcode == VAR_1) ||
        (VAR_33->Common.AmlOpcode == VAR_17))
    {
        return (VAR_7);
    }

    if ((VAR_33->Common.AmlOpcode == 137) ||
        (VAR_33->Common.AmlOpcode == VAR_21))
    {
        VAR_36->Level--;
    }

    if (VAR_33->Common.AmlOpcode == VAR_14)
    {
        VAR_33->Common.DisasmFlags |= VAR_4;
        return (VAR_6);
    }



    if ((VAR_37->Flags & VAR_15) ||
        (VAR_33->Common.AmlOpcode == 144))
    {


        if (FUNC_6 (VAR_33) & VAR_31)
        {
            FUNC_20 (" (");
            if (!(FUNC_6 (VAR_33) & VAR_30))
            {
                FUNC_4 (VAR_33, VAR_8, " ", 0);
            }
        }



        if (VAR_37->Flags & VAR_20)
        {
            switch (VAR_33->Common.AmlOpcode)
            {
            case 149:

                VAR_39 = FUNC_22 (((void*)0), VAR_33);
                VAR_39->Common.DisasmFlags |= VAR_4;
                FUNC_16 (VAR_39->Common.Value.Name);
                FUNC_20 (", ");



            default:

                VAR_38 = FUNC_23 (VAR_33);
                if (VAR_33->Named.Path)
                {
                    FUNC_16 (VAR_33->Named.Path);
                }
                else
                {
                    FUNC_10 (VAR_38);
                }

                if (VAR_33->Common.AmlOpcode != VAR_18)
                {
                    if (VAR_28)
                    {
                        (void) FUNC_21 (((void*)0), VAR_33);
                    }
                }
                break;
            }

            switch (VAR_33->Common.AmlOpcode)
            {
            case 139:

                FUNC_15 (VAR_33);
                FUNC_1 (VAR_33, VAR_34);



                FUNC_17 (VAR_33);
                break;

            case 137:



                FUNC_7 (VAR_33);
                FUNC_20 (", ");
                FUNC_4 (VAR_33, VAR_19, ((void*)0), 0);
                break;

            case 132:

                FUNC_18 (VAR_33);
                break;

            case 134:



                FUNC_20 (", ");
                VAR_39 = FUNC_22 (((void*)0), VAR_33);
                VAR_39->Common.DisasmFlags |= VAR_5;

                VAR_39 = VAR_39->Common.Next;
                VAR_39->Common.DisasmFlags |= VAR_5;
                return (VAR_7);

            case 133:



                FUNC_20 (", ");
                VAR_39 = FUNC_22 (((void*)0), VAR_33);
                VAR_39->Common.DisasmFlags |= VAR_5;

                VAR_39 = VAR_39->Common.Next;
                VAR_39->Common.DisasmFlags |= VAR_5;

                VAR_39 = VAR_39->Common.Next;
                VAR_39->Common.DisasmFlags |= VAR_5;
                return (VAR_7);

            case 138:
            case 146:

                FUNC_20 (", ");
                return (VAR_7);

            case 144:
            case 149:

                return (VAR_7);

            case 131:
            case 145:
            case 130:

                FUNC_1 (VAR_33, VAR_34);
                break;

            default:

                FUNC_20 ("*** Unhandled named opcode %X\n",
                    VAR_33->Common.AmlOpcode);
                break;
            }
        }

        else switch (VAR_33->Common.AmlOpcode)
        {
        case 143:
        case 148:
        case 141:

            VAR_36->BitOffset = 0;



            VAR_39 = FUNC_22 (((void*)0), VAR_33);
            FUNC_16 (VAR_39->Common.Value.Name);
            FUNC_20 (", ");
            VAR_39->Common.DisasmFlags |= VAR_4;

            switch (VAR_33->Common.AmlOpcode)
            {
            case 148:



                VAR_39 = FUNC_22 (((void*)0), VAR_39);
                FUNC_16 (VAR_39->Common.Value.Name);
                VAR_39->Common.DisasmFlags |= VAR_4;
                FUNC_20 (", ");
                VAR_39 = VAR_39->Common.Next;

                VAR_36->Flags = VAR_5;
                FUNC_19 (VAR_39, FUNC_26,
                    VAR_23, VAR_36);
                VAR_36->Flags = 0;
                VAR_36->Level = VAR_34;

                VAR_39->Common.DisasmFlags |= VAR_4;
                FUNC_20 (", ");
                break;

            case 141:



                VAR_39 = FUNC_22 (((void*)0), VAR_39);
                FUNC_16 (VAR_39->Common.Value.Name);
                FUNC_20 (", ");
                VAR_39->Common.DisasmFlags |= VAR_4;
                break;

            default:

                break;
            }

            FUNC_12 (VAR_39);
            break;

        case 147:



            VAR_39 = FUNC_22 (((void*)0), VAR_33);
            if (!VAR_39)
            {


                return (VAR_7);
            }

            if (VAR_33->Common.DisasmOpcode == VAR_2)
            {




                VAR_39->Common.DisasmFlags |= VAR_4;
                FUNC_1 (VAR_33, VAR_34);



                FUNC_17 (VAR_33->Asl.Parent);

                FUNC_20 ("\n");
                FUNC_13 (VAR_36->Level);
                FUNC_20 ("{\n");
                return (VAR_7);
            }



            VAR_39->Common.DisasmFlags |= VAR_5;
            return (VAR_7);

        case 142:
        case 129:
        case 128:



            VAR_39 = FUNC_22 (((void*)0), VAR_33);
            if (VAR_39)
            {
                VAR_39->Common.DisasmFlags |= VAR_5;
            }
            return (VAR_7);

        case 135:



            VAR_39 = FUNC_22 (((void*)0), VAR_33);
            if (VAR_39)
            {
                VAR_39->Common.DisasmFlags |= VAR_5;
            }
            return (VAR_7);

        case 140:

            FUNC_14 (VAR_33);
            break;

        default:

            break;
        }

        if (FUNC_6 (VAR_33) & VAR_30)
        {
            FUNC_20 ("\n");
            FUNC_13 (VAR_34);
            FUNC_20 ("{\n");
        }
    }

    return (VAR_7);
}
