
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int AmlOpcode; scalar_t__ DisasmOpcode; char* OperatorSymbol; TYPE_4__* Next; int DisasmFlags; TYPE_2__* Parent; } ;
struct TYPE_18__ {TYPE_3__ Common; } ;
struct TYPE_15__ {int AmlOpcode; } ;
struct TYPE_16__ {TYPE_1__ Common; } ;
typedef int BOOLEAN ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;
typedef int ACPI_OP_WALK_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int VAR_7 ;
 int VAR_8 ;



 int VAR_9 ;

 int VAR_10 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_4__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (char*) ;
 TYPE_4__* FUNC_6 (TYPE_4__*,int ) ;
 int VAR_13 ;
 int VAR_14 ;

BOOLEAN
FUNC_7 (
    ACPI_PARSE_OBJECT *VAR_15,
    ACPI_OP_WALK_INFO *VAR_16)
{
    char *VAR_17 = ((void*)0);
    ACPI_PARSE_OBJECT *VAR_18;
    ACPI_PARSE_OBJECT *VAR_19;
    ACPI_PARSE_OBJECT *VAR_20;
    ACPI_PARSE_OBJECT *VAR_21;




    if (!VAR_11)
    {
        return (VAR_13);
    }



    VAR_18 = FUNC_6 (VAR_15, 0);
    if (!VAR_18)
    {
        return (VAR_13);
    }



    VAR_19 = VAR_18->Common.Next;



    switch (VAR_15->Common.AmlOpcode)
    {
    case 148:
        VAR_17 = " + ";
        break;

    case 128:
        VAR_17 = " - ";
        break;

    case 132:
        VAR_17 = " * ";
        break;

    case 142:
        VAR_17 = " / ";
        break;

    case 133:
        VAR_17 = " % ";
        break;

    case 131:
        VAR_17 = " << ";
        break;

    case 130:
        VAR_17 = " >> ";
        break;

    case 147:
        VAR_17 = " & ";
        break;

    case 145:
        VAR_17 = " | ";
        break;

    case 144:
        VAR_17 = " ^ ";
        break;



    case 139:
        VAR_17 = " && ";
        break;

    case 138:
        VAR_17 = " == ";
        break;

    case 137:
        VAR_17 = " > ";
        break;

    case 136:
        VAR_17 = " < ";
        break;

    case 134:
        VAR_17 = " || ";
        break;

    case 135:





        switch (VAR_18->Common.AmlOpcode)
        {
        case 138:
            VAR_17 = " != ";
            break;

        case 137:
            VAR_17 = " <= ";
            break;

        case 136:
            VAR_17 = " >= ";
            break;

        default:



            FUNC_5 ("!");
            return (VAR_14);
        }

        VAR_18->Common.DisasmOpcode = VAR_1;
        VAR_15->Common.DisasmOpcode = VAR_0;



        VAR_19 = FUNC_6 (VAR_18, 0);
        if (!VAR_19)
        {
            return (VAR_13);
        }

        VAR_19->Common.OperatorSymbol = VAR_17;
        return (VAR_14);

    case 140:






        if ((VAR_18->Common.AmlOpcode == VAR_9) ||
            (VAR_18->Common.AmlOpcode == VAR_7) ||
            (VAR_18->Common.AmlOpcode == VAR_8) ||
            (VAR_18->Common.AmlOpcode == VAR_10))
        {
            VAR_15->Common.DisasmFlags |= VAR_3;
            return (VAR_13);
        }



        VAR_18->Common.OperatorSymbol = " [";
        VAR_19->Common.OperatorSymbol = "]";
        break;



    case 143:
        VAR_17 = "--";
        break;

    case 141:
        VAR_17 = "++";
        break;

    case 146:
    case 129:
        VAR_17 = ((void*)0);
        break;

    default:
        return (VAR_13);
    }

    if (VAR_18->Common.DisasmOpcode == VAR_1)
    {
        return (VAR_14);
    }







    if (!VAR_18->Common.OperatorSymbol)
    {
        VAR_18->Common.OperatorSymbol = VAR_17;
    }
    switch (VAR_15->Common.AmlOpcode)
    {
    case 148:
    case 128:
    case 132:
    case 142:
    case 133:
    case 131:
    case 130:
    case 147:
    case 145:
    case 144:



        VAR_20 = VAR_19->Common.Next;
        if (VAR_15->Common.AmlOpcode == 142)
        {
            VAR_21 = VAR_20->Common.Next;






            if (!VAR_12)
            {
                if (FUNC_3 (VAR_20))
                {
                    VAR_18->Common.OperatorSymbol = ((void*)0);
                    VAR_15->Common.DisasmFlags |= VAR_6;
                    return (VAR_13);
                }

                VAR_20->Common.DisasmFlags |= VAR_5;
                VAR_20 = VAR_21;
            }
            else
            {





                if (FUNC_3 (VAR_20) &&
                    FUNC_3 (VAR_21))
                {
                    VAR_18->Common.OperatorSymbol = ((void*)0);
                    VAR_15->Common.DisasmFlags |= VAR_6;
                    return (VAR_13);
                }

                if (FUNC_3 (VAR_20))
                {


                    VAR_15->Common.AmlOpcode = 133;

                    VAR_18->Common.OperatorSymbol = " % ";
                    VAR_21->Common.DisasmFlags |= VAR_5;
                }
                else
                {
                    VAR_20->Common.DisasmFlags |= VAR_5;
                    VAR_20 = VAR_21;
                }
            }
        }



        if (!VAR_20)
        {
            return (VAR_13);
        }

        if (!FUNC_3 (VAR_20))
        {

            break;
        }







        FUNC_4 (VAR_15, VAR_20);



        switch (VAR_15->Common.AmlOpcode)
        {


        case 148:
        case 132:
        case 147:
        case 145:
        case 144:
            if ((FUNC_2 (VAR_20, VAR_18, VAR_14)) ||
                (FUNC_2 (VAR_20, VAR_19, VAR_14)))
            {
                VAR_20->Common.OperatorSymbol =
                    FUNC_0 (VAR_15->Common.AmlOpcode);



                VAR_15->Common.DisasmFlags |= VAR_4;
                VAR_18->Common.OperatorSymbol = ((void*)0);
                return (VAR_14);
            }
            break;



        case 128:
        case 142:
        case 133:
        case 131:
        case 130:
            if ((FUNC_2 (VAR_20, VAR_18, VAR_14)))
            {
                VAR_20->Common.OperatorSymbol =
                    FUNC_0 (VAR_15->Common.AmlOpcode);



                VAR_15->Common.DisasmFlags |= VAR_4;
                VAR_18->Common.OperatorSymbol = ((void*)0);
                return (VAR_14);
            }
            break;

        default:
            break;
        }





        switch (VAR_15->Common.Parent->Common.AmlOpcode)
        {
        case 148:
        case 128:
        case 132:
        case 142:
        case 133:
        case 131:
        case 130:
        case 147:
        case 145:
        case 144:
        case 139:
        case 138:
        case 137:
        case 136:
        case 134:

            VAR_15->Common.DisasmFlags |= VAR_2;
            FUNC_5 ("(");
            break;

        default:
            break;
        }



        VAR_20->Common.OperatorSymbol = " = (";
        return (VAR_14);



    case 143:
    case 141:
        return (VAR_14);

    case 140:



        VAR_20 = VAR_19->Common.Next;
        if (FUNC_3 (VAR_20))
        {
            FUNC_4 (VAR_15, VAR_20);

            if (!VAR_20->Common.OperatorSymbol)
            {
                VAR_20->Common.OperatorSymbol = " = ";
            }
        }
        return (VAR_14);

    case 129:







        if (FUNC_1 (VAR_15, VAR_18))
        {
            return (VAR_13);
        }






        VAR_20 = VAR_18->Common.Next;
        if (!VAR_20)
        {
            return (VAR_13);
        }

        FUNC_4 (VAR_15, VAR_20);
        if (!VAR_20->Common.OperatorSymbol)
        {
            VAR_20->Common.OperatorSymbol = " = ";
        }
        return (VAR_14);

    case 146:



        VAR_20 = VAR_18->Common.Next;
        if (!VAR_20)
        {
            return (VAR_13);
        }

        if (FUNC_3 (VAR_20))
        {


            FUNC_4 (VAR_15, VAR_20);
            VAR_20->Common.OperatorSymbol = " = ~";
        }
        else
        {


            FUNC_5 ("~");
        }
        return (VAR_14);

    default:
        break;
    }



    FUNC_5 ("(");
    return (VAR_14);
}
