
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_20__ {scalar_t__ Class; scalar_t__ RuntimeArgs; int Flags; char* Name; } ;
struct TYPE_18__ {int AmlOpcode; TYPE_5__* Next; int ParseOpcode; TYPE_3__* Node; TYPE_2__* Parent; TYPE_5__* Child; } ;
struct TYPE_19__ {TYPE_4__ Asl; } ;
struct TYPE_17__ {int Type; } ;
struct TYPE_15__ {scalar_t__ AmlOpcode; } ;
struct TYPE_16__ {TYPE_1__ Asl; } ;
typedef int ACPI_STATUS ;
typedef TYPE_5__ ACPI_PARSE_OBJECT ;
typedef TYPE_6__ ACPI_OPCODE_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;





 scalar_t__ VAR_4 ;


 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;







 scalar_t__ VAR_8 ;




 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_6__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,TYPE_6__ const*,TYPE_5__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,TYPE_5__*,char*) ;
 char* VAR_15 ;
 char* VAR_16 ;
 char* VAR_17 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

 int VAR_21 ;
 int FUNC_10 (char*,char*,char*,char*,char*) ;

ACPI_STATUS
FUNC_11 (
    ACPI_PARSE_OBJECT *VAR_22,
    UINT32 VAR_23,
    void *VAR_24)
{
    const ACPI_OPCODE_INFO *VAR_25;
    UINT32 VAR_26;
    UINT32 VAR_27;
    UINT32 VAR_28;
    UINT32 VAR_29;
    UINT32 VAR_30;
    UINT32 VAR_31;
    ACPI_PARSE_OBJECT *VAR_32;
    UINT32 VAR_33;


    switch (VAR_22->Asl.AmlOpcode)
    {
    case 163:
    case 159:
    case 161:
    case 160:
    case 164:
    case 162:
    case 166:
    case 155:
    case 169:



        return (VAR_3);

    default:

        break;
    }

    VAR_25 = FUNC_0 (VAR_22->Asl.AmlOpcode);
    if (!VAR_25)
    {
        return (VAR_3);
    }

    VAR_32 = VAR_22->Asl.Child;
    VAR_31 = VAR_25->Class;
    VAR_26 = VAR_25->RuntimeArgs;
    switch (VAR_22->Asl.AmlOpcode)
    {
    case 167:
    case 153:
    case 157:

        if (VAR_32->Asl.ParseOpcode == VAR_19)
        {


            if (FUNC_4 (VAR_32))
            {
                return (VAR_3);
            }



            VAR_28 = FUNC_5 (151);
            if (VAR_22->Asl.AmlOpcode == 157)
            {
                VAR_28 = 0xFFFFFFFF;
            }

            VAR_29 = FUNC_3 (VAR_32);
            if (VAR_29 == VAR_2)
            {
                return (VAR_3);
            }

            FUNC_1 (VAR_22, VAR_25, VAR_32,
                VAR_28, VAR_29);
        }
        return (VAR_3);

    case 168:




        return (VAR_3);

    default:

        break;
    }



    if (VAR_26 == VAR_8)
    {
        return (VAR_3);
    }




    switch (VAR_22->Asl.AmlOpcode)
    {


    case 176:

        VAR_31 = 172;
        VAR_32 = VAR_32->Asl.Next;
        VAR_32 = VAR_32->Asl.Next;
        break;



    case 158:

        VAR_31 = 172;
        VAR_32 = VAR_32->Asl.Next;
        VAR_32 = VAR_32->Asl.Next;
        break;



    case 170:

        VAR_31 = 172;
        VAR_32 = VAR_32->Asl.Next;
        break;



    case 175:
    case 165:
    case 154:



        if ((VAR_32->Asl.ParseOpcode == VAR_18) ||
            (VAR_32->Asl.ParseOpcode == VAR_20))
        {
            return (VAR_3);
        }
        break;



    case 156:





        if (VAR_32->Asl.Next->Asl.AmlOpcode == VAR_5)
        {
            return (VAR_3);
        }
        break;

    default:
        break;
    }

    switch (VAR_31)
    {
    case 172:
    case 173:
    case 174:
    case 171:



        VAR_27 = 0;
        while ((VAR_33 = FUNC_8 (VAR_26)))
        {
            VAR_27 <<= VAR_9;
            VAR_27 |= VAR_33;
            FUNC_9 (VAR_26);
        }



        while ((VAR_33 = FUNC_8 (VAR_27)))
        {


            VAR_28 = FUNC_5 (VAR_33);

            if (!VAR_32)
            {
                FUNC_7 (VAR_10, VAR_11, VAR_22,
                    "Null ArgOp in argument loop");
                FUNC_6 ();
            }



            VAR_29 = FUNC_3 (VAR_32);
            if (VAR_29 == VAR_2)
            {
                goto NextArgument;
            }



            switch (VAR_33)
            {
            case 146:

                if (VAR_32->Asl.ParseOpcode == VAR_21)
                {


                    VAR_29 = VAR_28;
                    break;
                }



            case 147:

                if (VAR_32->Asl.ParseOpcode == VAR_18)
                {






                    if ((VAR_32->Asl.Node->Type == VAR_1) ||
                        (VAR_32->Asl.Node->Type == VAR_0))
                    {
                        FUNC_7 (VAR_10, VAR_14,
                            VAR_32, ((void*)0));
                    }
                    else
                    {
                        FUNC_7 (VAR_10, VAR_12,
                            VAR_32, ((void*)0));
                    }
                }
                break;
            case 151:
            default:

                break;
            }




            VAR_30 = VAR_29 & VAR_28;

            if (VAR_32->Asl.ParseOpcode == VAR_19)
            {
                if (FUNC_4 (VAR_32))
                {
                    return (VAR_3);
                }



                FUNC_1 (VAR_22, VAR_25, VAR_32,
                    VAR_28, VAR_29);
            }





            else if (!VAR_30)
            {


                FUNC_2 (VAR_16, VAR_29);
                FUNC_2 (VAR_17, VAR_28);

                FUNC_10 (VAR_15, "[%s] found, %s operator requires [%s]",
                    VAR_16, VAR_25->Name, VAR_17);

                FUNC_7 (VAR_10, VAR_12,
                    VAR_32, VAR_15);
            }

        NextArgument:
            VAR_32 = VAR_32->Asl.Next;
            FUNC_9 (VAR_27);
        }
        break;

    default:

        break;
    }

    return (VAR_3);
}
