
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
struct TYPE_31__ {int Flags; scalar_t__ Type; int Value; TYPE_5__* Op; } ;
struct TYPE_30__ {scalar_t__ Class; } ;
struct TYPE_25__ {char* Name; scalar_t__ Integer; } ;
struct TYPE_27__ {int AmlOpcode; char* ExternalName; int ParseOpcode; int CompileFlags; char* Namepath; int AcpiBtype; scalar_t__ Extra; TYPE_7__* Node; TYPE_5__* Parent; TYPE_1__ Value; TYPE_5__* Next; TYPE_5__* Child; int ParseOpName; } ;
struct TYPE_29__ {TYPE_3__ Asl; } ;
struct TYPE_28__ {int ScopeInfo; TYPE_2__* OpInfo; } ;
struct TYPE_26__ {int Flags; } ;
typedef scalar_t__ BOOLEAN ;
typedef TYPE_4__ ACPI_WALK_STATE ;
typedef scalar_t__ ACPI_STATUS ;
typedef TYPE_5__ ACPI_PARSE_OBJECT ;
typedef TYPE_6__ ACPI_OPCODE_INFO ;
typedef scalar_t__ ACPI_OBJECT_TYPE ;
typedef TYPE_7__ ACPI_NAMESPACE_NODE ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__ (*) (TYPE_5__*,int,void*)) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;



 int VAR_11 ;



 int VAR_12 ;


 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;

 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;



 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ FUNC_4 (TYPE_7__*,int const,TYPE_4__*) ;
 TYPE_7__* VAR_31 ;
 scalar_t__ FUNC_5 (int ,char*,scalar_t__,int ,int,TYPE_4__*,TYPE_7__**) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 void* FUNC_7 (int) ;
 char* FUNC_8 (scalar_t__) ;
 int FUNC_9 (TYPE_5__*,scalar_t__,char*,scalar_t__) ;
 int FUNC_10 (int ,int ,TYPE_5__*,char*,int ,TYPE_5__*,char*) ;
 int FUNC_11 (int ,int ,TYPE_5__*,char*) ;
 char* VAR_32 ;
 int VAR_33 ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ VAR_34 ;
 int FUNC_13 (TYPE_7__*,TYPE_5__*) ;
 scalar_t__ FUNC_14 (int ,TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_15 (TYPE_5__*,TYPE_4__*) ;
 int VAR_35 ;
 int VAR_36 ;


 int VAR_37 ;

 int VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;

 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (char*,char*,char*,char*) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static ACPI_STATUS
FUNC_19 (
    ACPI_PARSE_OBJECT *VAR_43,
    UINT32 VAR_44,
    void *VAR_45)
{
    ACPI_WALK_STATE *VAR_46 = (ACPI_WALK_STATE *) VAR_45;
    ACPI_NAMESPACE_NODE *VAR_47;
    ACPI_PARSE_OBJECT *VAR_48;
    ACPI_STATUS VAR_49;
    ACPI_OBJECT_TYPE VAR_50;
    ACPI_OBJECT_TYPE VAR_51 = VAR_10;
    char *VAR_52;
    UINT32 VAR_53 = VAR_7;
    ACPI_PARSE_OBJECT *VAR_54;
    UINT32 VAR_55;
    BOOLEAN VAR_56 = VAR_34;
    const ACPI_OPCODE_INFO *VAR_57;
    ACPI_PARSE_OBJECT *VAR_58;


    FUNC_3 (FUNC_19);


    FUNC_1 ((VAR_0, "Op %p [%s]\n",
        VAR_43, VAR_43->Asl.ParseOpName));





    switch (VAR_43->Asl.AmlOpcode)
    {
    case 133:

        VAR_49 = FUNC_14 (VAR_11, VAR_43, VAR_46);
        return (VAR_49);

    case 135:
    case 134:

        VAR_49 = FUNC_14 (VAR_12, VAR_43, VAR_46);
        return (VAR_49);

    case 132:

        if (VAR_43->Asl.Child->Asl.AmlOpcode != VAR_19)
        {
            break;
        }

        VAR_54 = VAR_43->Asl.Child;
        VAR_49 = FUNC_5 (VAR_46->ScopeInfo, VAR_54->Asl.ExternalName,
            VAR_10, VAR_1, VAR_9,
            VAR_46, &VAR_47);
        if (FUNC_2 (VAR_49))
        {
            break;
        }

        break;

    default:



        break;
    }



    if (VAR_43->Asl.Node)
    {
        return (VAR_15);
    }



    if ((VAR_43->Asl.ParseOpcode == VAR_38) ||
        (VAR_43->Asl.ParseOpcode == VAR_39))
    {





        VAR_58 = VAR_43->Asl.Parent;
        VAR_57 = FUNC_7 (VAR_58->Asl.AmlOpcode);







        if (VAR_57->Class == VAR_16)
        {
            return (VAR_15);
        }
        VAR_49 = FUNC_5 (VAR_46->ScopeInfo,
            VAR_43->Asl.Value.Name, VAR_10, VAR_1,
            VAR_9 | VAR_4,
            VAR_46, &VAR_47);
        if (VAR_49 == VAR_14)
        {
            if ((VAR_58->Asl.ParseOpcode != VAR_40) &&
                (VAR_58->Asl.ParseOpcode != VAR_41))
            {
                VAR_43->Asl.CompileFlags |= VAR_36;
            }

            return (VAR_15);
        }

        return (VAR_49);
    }

    VAR_52 = VAR_43->Asl.Namepath;
    if (!VAR_52)
    {
        return (VAR_15);
    }



    switch (VAR_43->Asl.ParseOpcode)
    {
    case 129:

        VAR_54 = VAR_43->Asl.Child;
        VAR_54 = VAR_54->Asl.Next;






        if (VAR_43->Asl.CompileFlags & VAR_35)
        {
            VAR_56 = VAR_42;
        }





        VAR_50 = 1;
        for (VAR_55 = 1; VAR_55 < VAR_54->Asl.AcpiBtype; VAR_55 *= 2)
        {
            VAR_50++;
        }
        break;

    case 130:







        VAR_51 = (UINT8) VAR_43->Asl.Child->Asl.Next->Asl.Value.Integer;
        VAR_50 = VAR_10;
        VAR_53 |= VAR_6;
        break;

    case 131:

        if (VAR_43->Asl.CompileFlags == VAR_35)
        {
            VAR_49 = FUNC_15 (VAR_43, VAR_46);
            FUNC_16 (VAR_49);
        }

        VAR_50 = FUNC_12 (VAR_43->Asl.AmlOpcode);
        break;

    case 128:






        VAR_49 = FUNC_5 (VAR_46->ScopeInfo, VAR_52, VAR_10,
            VAR_1, VAR_9, VAR_46, &VAR_47);
        if (FUNC_2 (VAR_49))
        {
            if (VAR_49 == VAR_14)
            {


                VAR_49 = FUNC_5 (VAR_46->ScopeInfo, VAR_52,
                    140, VAR_2,
                    VAR_53, VAR_46, &VAR_47);
                if (FUNC_2 (VAR_49))
                {
                    FUNC_16 (VAR_49);
                }



                if (FUNC_18 (VAR_43->Asl.ExternalName) == VAR_3)
                {
                    FUNC_11 (VAR_22, VAR_28, VAR_43,
                        VAR_43->Asl.ExternalName);
                }
                else
                {
                    FUNC_11 (VAR_22, VAR_26, VAR_43,
                        VAR_43->Asl.ExternalName);
                }

                goto FinishNode;
            }

            FUNC_9 (VAR_43, VAR_49,
                "Failure from namespace lookup", VAR_34);

            FUNC_16 (VAR_49);
        }
        else
        {







            if ((VAR_47->Flags & VAR_21) &&
                (FUNC_0 (VAR_33, "DSDT")))
            {


                VAR_48 = VAR_43->Asl.Parent;
                while (VAR_48 &&
                      (VAR_48->Asl.ParseOpcode != VAR_37))
                {
                    VAR_48 = VAR_48->Asl.Parent;
                }

                if (!VAR_48)
                {


                    FUNC_11 (VAR_22, VAR_24, VAR_43, ((void*)0));
                }
            }
        }



        switch (VAR_47->Type)
        {
        case 140:
        case 142:
        case 139:
        case 138:
        case 136:


            break;

        case 141:
        case 137:
        case 143:
            FUNC_17 (VAR_32, "%s [%s], changing type to [Scope]",
                VAR_43->Asl.ExternalName, FUNC_8 (VAR_47->Type));
            FUNC_11 (VAR_30, VAR_29, VAR_43, VAR_32);



            VAR_47->Type = 140;
            VAR_49 = FUNC_4 (VAR_47, 140,
                VAR_46);
            if (FUNC_2 (VAR_49))
            {
                FUNC_16 (VAR_49);
            }
            break;

        default:



            FUNC_17 (VAR_32, "%s [%s]", VAR_43->Asl.ExternalName,
                FUNC_8 (VAR_47->Type));
            FUNC_11 (VAR_22, VAR_29, VAR_43, VAR_32);






            VAR_47->Type = 140;
            VAR_49 = FUNC_4 (VAR_47, 140,
                VAR_46);
            if (FUNC_2 (VAR_49))
            {
                FUNC_16 (VAR_49);
            }
            break;
        }

        VAR_49 = VAR_15;
        goto FinishNode;

    default:

        VAR_50 = FUNC_12 (VAR_43->Asl.AmlOpcode);
        break;
    }

    FUNC_1 ((VAR_0, "Loading name: %s, (%s)\n",
        VAR_43->Asl.ExternalName, FUNC_8 (VAR_50)));



    VAR_53 |= VAR_5;





    VAR_46->OpInfo = FUNC_7 (VAR_43->Asl.AmlOpcode);
    if (((VAR_46->OpInfo->Flags & VAR_20) ||
        (VAR_46->OpInfo->Flags & VAR_17)) &&
        (VAR_43->Asl.AmlOpcode != VAR_18))
    {
        VAR_53 |= VAR_8;
    }







    VAR_49 = FUNC_5 (VAR_46->ScopeInfo, VAR_52, VAR_50,
        VAR_2, VAR_53, VAR_46, &VAR_47);
    if (FUNC_2 (VAR_49))
    {
        if (VAR_49 == VAR_13)
        {


            if (VAR_47->Type == 140)
            {


                VAR_47->Type = (UINT8) VAR_50;
                VAR_49 = VAR_15;
            }
            else if ((VAR_47->Flags & VAR_21) &&
                     (VAR_43->Asl.ParseOpcode != 130))
            {




                VAR_47->Flags &= ~VAR_21;
                VAR_47->Type = (UINT8) VAR_50;



                if (FUNC_6 (VAR_50))
                {
                    VAR_49 = FUNC_4 (VAR_47, VAR_50, VAR_46);
                    if (FUNC_2 (VAR_49))
                    {
                        FUNC_16 (VAR_49);
                    }
                }

                VAR_49 = VAR_15;
            }
            else if (!(VAR_47->Flags & VAR_21) &&
                     (VAR_43->Asl.ParseOpcode == 130))
            {





                VAR_49 = VAR_15;
            }
            else if ((VAR_47->Flags & VAR_21) &&
                     (VAR_43->Asl.ParseOpcode == 130) &&
                     (VAR_50 == VAR_10))
            {


                if (FUNC_6 (VAR_51))
                {
                    VAR_47->Type = (UINT8) VAR_51;
                    VAR_49 = VAR_15;
                }
                else
                {
                    FUNC_17 (VAR_32, "%s [%s]", VAR_43->Asl.ExternalName,
                        FUNC_8 (VAR_47->Type));
                    FUNC_11 (VAR_22, VAR_29, VAR_43, VAR_32);
                    FUNC_16 (VAR_15);
                }
            }
            else
            {


                FUNC_10 (VAR_22, VAR_27, VAR_43,
                    VAR_43->Asl.ExternalName, VAR_25, VAR_47->Op,
                    VAR_47->Op->Asl.ExternalName);
                FUNC_16 (VAR_15);
            }
        }
        else if (VAR_14)
        {





            VAR_47 = VAR_31;
            VAR_49 = VAR_15;
        }
        else
        {


            FUNC_9 (VAR_43, VAR_49,
                "Failure from namespace lookup", VAR_34);
            FUNC_16 (VAR_49);
        }
    }



    FUNC_13 (VAR_47, VAR_43);

    if (VAR_56)
    {
        VAR_49 = FUNC_4 (VAR_47, VAR_50, VAR_46);
        if (FUNC_2 (VAR_49))
        {
            FUNC_16 (VAR_49);
        }
    }

FinishNode:




    VAR_43->Asl.Node = VAR_47;
    VAR_47->Op = VAR_43;



    if (VAR_51 != VAR_10)
    {
        VAR_47->Type = (UINT8) VAR_51;
        VAR_47->Value = VAR_23;
    }

    if (VAR_43->Asl.ParseOpcode == VAR_37)
    {




        VAR_47->Value = (UINT32) VAR_43->Asl.Extra;
    }

    FUNC_16 (VAR_49);
}
