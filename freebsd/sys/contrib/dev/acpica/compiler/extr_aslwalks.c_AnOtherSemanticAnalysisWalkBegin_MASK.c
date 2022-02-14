
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int UINT64 ;
typedef int UINT32 ;
struct TYPE_16__ {TYPE_3__* Op; } ;
struct TYPE_15__ {int Flags; scalar_t__ Class; } ;
struct TYPE_12__ {int Integer; } ;
struct TYPE_13__ {scalar_t__ AmlOpcode; scalar_t__ ParseOpcode; TYPE_3__* Next; TYPE_3__* Child; TYPE_1__ Value; TYPE_5__* Node; TYPE_3__* Parent; int * ExternalName; } ;
struct TYPE_14__ {TYPE_2__ Asl; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;
typedef TYPE_4__ ACPI_OPCODE_INFO ;
typedef TYPE_5__ ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_4__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int ,TYPE_3__*,int *) ;
 int VAR_15 ;



 int VAR_16 ;

 int const VAR_17 ;


 int VAR_18 ;
 scalar_t__ VAR_19 ;

ACPI_STATUS
FUNC_5 (
    ACPI_PARSE_OBJECT *VAR_20,
    UINT32 VAR_21,
    void *VAR_22)
{
    ACPI_PARSE_OBJECT *VAR_23;
    ACPI_PARSE_OBJECT *VAR_24 = ((void*)0);
    const ACPI_OPCODE_INFO *VAR_25;
    ACPI_NAMESPACE_NODE *VAR_26;


    VAR_25 = FUNC_0 (VAR_20->Asl.AmlOpcode);


    if (VAR_25->Flags & VAR_5)
    {


        FUNC_3 (VAR_20);
        return (VAR_3);
    }






    if ((VAR_25->Class == VAR_4) &&
        (VAR_25->Flags & VAR_7) &&
        (!FUNC_2 (VAR_20)))
    {
        if (VAR_25->Flags & VAR_8)
        {





            VAR_23 = VAR_20->Asl.Child;
            while (VAR_23->Asl.Next)
            {
                VAR_24 = VAR_23;
                VAR_23 = VAR_23->Asl.Next;
            }



            if (VAR_20->Asl.AmlOpcode == VAR_6)
            {
                if ((VAR_23->Asl.ParseOpcode == VAR_19) &&
                    (VAR_24) &&
                    (VAR_24->Asl.ParseOpcode == VAR_19))
                {
                    FUNC_4 (VAR_9, VAR_12,
                        VAR_20, VAR_20->Asl.ExternalName);
                }
            }

            else if (VAR_23->Asl.ParseOpcode == VAR_19)
            {
                FUNC_4 (VAR_9, VAR_12,
                    VAR_20, VAR_20->Asl.ExternalName);
            }
        }
        else
        {




            switch (VAR_20->Asl.ParseOpcode)
            {
            case 133:
            case 128:
            case 130:

                break;

            default:

                FUNC_4 (VAR_9, VAR_12,
                    VAR_20, VAR_20->Asl.ExternalName);
                break;
            }
        }
    }





    switch (VAR_20->Asl.ParseOpcode)
    {
    case 129:

        if (VAR_15)
        {
            FUNC_1 (VAR_20);
        }
        break;


    case 133:
    case 128:
        VAR_23 = VAR_20->Asl.Child;
        VAR_23 = VAR_23->Asl.Next;





        if (((VAR_23->Asl.ParseOpcode == VAR_18) ||
             (VAR_23->Asl.ParseOpcode == VAR_16)) &&
             (VAR_23->Asl.Value.Integer >= (UINT64) VAR_2))
        {
            break;
        }





        if (!FUNC_2 (VAR_20))
        {
            FUNC_4 (VAR_14, VAR_13, VAR_23,
                VAR_20->Asl.ExternalName);
        }
        break;

    case 132:




        VAR_23 = VAR_20->Asl.Parent;
        VAR_23 = VAR_23->Asl.Child;
        VAR_26 = VAR_23->Asl.Node;
        if (!VAR_26)
        {
            break;
        }

        VAR_23 = VAR_26->Op;
        VAR_23 = VAR_23->Asl.Child;
        VAR_23 = VAR_23->Asl.Next;





        if ((VAR_23->Asl.Value.Integer != VAR_0) &&
            (VAR_23->Asl.Value.Integer != VAR_1))
        {
            FUNC_4 (VAR_9, VAR_10, VAR_20, ((void*)0));
        }
        break;

    case 131:




        VAR_23 = VAR_20->Asl.Child;
        VAR_26 = VAR_23->Asl.Node;
        if (!VAR_26)
        {
            break;
        }

        VAR_23 = VAR_26->Op;
        VAR_23 = VAR_23->Asl.Child;
        VAR_23 = VAR_23->Asl.Next;



        if ((VAR_23->Asl.Value.Integer != VAR_0) &&
            (VAR_23->Asl.Value.Integer != VAR_1))
        {
            break;
        }

        VAR_23 = VAR_20->Asl.Child;
        VAR_23 = VAR_23->Asl.Next;
        VAR_23 = VAR_23->Asl.Next;
        VAR_23 = VAR_23->Asl.Next;
        VAR_23 = VAR_23->Asl.Next;



        while (VAR_23)
        {
            if (VAR_23->Asl.ParseOpcode == 132)
            {
                break;
            }
            else if (VAR_23->Asl.ParseOpcode == VAR_17)
            {
                FUNC_4 (VAR_9, VAR_11, VAR_23, ((void*)0));
                break;
            }

            VAR_23 = VAR_23->Asl.Next;
        }
        break;

    default:

        break;
    }

    return (VAR_3);
}
