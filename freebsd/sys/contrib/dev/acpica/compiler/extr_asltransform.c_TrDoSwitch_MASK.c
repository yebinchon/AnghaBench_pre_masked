
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_18__ ;


typedef int UINT64 ;
typedef int UINT32 ;
typedef size_t UINT16 ;
struct TYPE_21__ {scalar_t__ ParseOpcode; TYPE_2__* Parent; TYPE_2__* Next; TYPE_2__* Child; int CompileFlags; int ParseOpName; } ;
struct TYPE_22__ {TYPE_1__ Asl; } ;
struct TYPE_20__ {int AcpiBtype; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;





 scalar_t__ FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,TYPE_2__*,char*) ;
 int VAR_8 ;
 TYPE_18__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 char* FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_8 (int ) ;
 TYPE_2__* FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_2__*,int,TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_12 (
    ACPI_PARSE_OBJECT *VAR_38)
{
    ACPI_PARSE_OBJECT *VAR_39;
    ACPI_PARSE_OBJECT *VAR_40 = ((void*)0);
    ACPI_PARSE_OBJECT *VAR_41 = ((void*)0);
    ACPI_PARSE_OBJECT *VAR_42 = ((void*)0);
    ACPI_PARSE_OBJECT *VAR_43;
    ACPI_PARSE_OBJECT *VAR_44 = ((void*)0);
    ACPI_PARSE_OBJECT *VAR_45;
    ACPI_PARSE_OBJECT *VAR_46;
    ACPI_PARSE_OBJECT *VAR_47;
    ACPI_PARSE_OBJECT *VAR_48;
    ACPI_PARSE_OBJECT *VAR_49;
    ACPI_PARSE_OBJECT *VAR_50;
    ACPI_PARSE_OBJECT *VAR_51;
    ACPI_PARSE_OBJECT *VAR_52;
    char *VAR_53;
    UINT16 VAR_54;
    UINT32 VAR_55;




    VAR_43 = VAR_38;



    VAR_53 = FUNC_3 (VAR_38, &VAR_8);
    if (!VAR_53)
    {
        return;
    }



    VAR_39 = VAR_38->Asl.Child;





    VAR_54 = (UINT16) (VAR_39->Asl.ParseOpcode - VAR_5);
    VAR_55 = VAR_9[VAR_54].AcpiBtype;
    if ((VAR_55 != 129) &&
        (VAR_55 != 128) &&
        (VAR_55 != 130))
    {
        FUNC_2 (VAR_7, VAR_4, VAR_39, ((void*)0));
        VAR_55 = 129;
    }



    VAR_46 = VAR_39->Asl.Next;
    while (VAR_46)
    {
        VAR_39 = VAR_46;
        VAR_46 = VAR_39->Asl.Next;

        if (VAR_39->Asl.ParseOpcode == VAR_14)
        {
            if (VAR_40)
            {


                VAR_47 = FUNC_8 (VAR_18);
                VAR_47->Asl.Parent = VAR_44->Asl.Parent;
                FUNC_4 (VAR_47, VAR_47->Asl.Parent);



                FUNC_6 (VAR_44, VAR_47);
                VAR_43 = VAR_47;
            }

            VAR_40 = VAR_39;
            VAR_44 = VAR_40;
            VAR_41 = VAR_40->Asl.Child->Asl.Next;
            VAR_44->Asl.Child->Asl.Next = ((void*)0);
            VAR_45 = VAR_40->Asl.Child;

            if ((VAR_45->Asl.ParseOpcode == VAR_31) ||
                (VAR_45->Asl.ParseOpcode == VAR_35))
            {






                VAR_48 = FUNC_8 (VAR_23);
                VAR_45->Asl.Next = VAR_48;
                FUNC_4 (VAR_48, VAR_44);

                VAR_47 = VAR_48;
                VAR_48 = FUNC_9 (VAR_28,
                                        (UINT64) FUNC_0 (VAR_53));
                VAR_47->Asl.Next = VAR_48;
                FUNC_4 (VAR_48, VAR_45);

                VAR_47 = VAR_48;
                VAR_48 = FUNC_8 (VAR_24);
                VAR_47->Asl.Next = VAR_48;
                FUNC_4 (VAR_48, VAR_45);

                VAR_47 = VAR_48;
                VAR_48 = FUNC_8 (VAR_37);
                VAR_47->Asl.Next = VAR_48;
                FUNC_4 (VAR_48, VAR_45);

                VAR_47 = VAR_48;
                VAR_48 = FUNC_8 (VAR_37);
                VAR_47->Asl.Next = VAR_48;
                FUNC_4 (VAR_48, VAR_45);

                VAR_48 = FUNC_8 (VAR_22);
                VAR_48->Asl.Child = VAR_45;
                FUNC_4 (VAR_48, VAR_44);
                FUNC_7 (VAR_45, VAR_48);

                VAR_47 = VAR_48;
                VAR_48 = FUNC_8 (VAR_30);
                VAR_47->Asl.Next = VAR_48;
                FUNC_4 (VAR_48, VAR_44);

                VAR_48 = FUNC_8 (VAR_20);
                VAR_48->Asl.Child = VAR_47;
                VAR_47->Asl.Parent = VAR_48;
                FUNC_4 (VAR_48, VAR_44);
                FUNC_7 (VAR_47, VAR_48);

                VAR_47 = VAR_48;
                VAR_48 = FUNC_8 (VAR_21);
                VAR_48->Asl.Child = VAR_47;
                VAR_48->Asl.Parent = VAR_44;
                VAR_47->Asl.Parent = VAR_48;
                FUNC_4 (VAR_48, VAR_44);

                VAR_44->Asl.Child = VAR_48;
                VAR_48->Asl.Next = VAR_41;
            }
            else
            {
                VAR_47 = FUNC_9 (VAR_28,
                    (UINT64) FUNC_0 (VAR_53));
                VAR_47->Asl.Next = VAR_45;
                FUNC_4 (VAR_47, VAR_45);

                VAR_48 = FUNC_8 (VAR_20);
                VAR_48->Asl.Parent = VAR_44;
                VAR_48->Asl.Child = VAR_47;
                FUNC_4 (VAR_48, VAR_44);

                FUNC_7 (VAR_47, VAR_48);

                VAR_45 = VAR_48;
                VAR_45->Asl.Next = VAR_41;

                FUNC_7 (VAR_45, VAR_44);
                VAR_44->Asl.Child = VAR_45;
            }



            FUNC_5 (VAR_44, VAR_19);





            if (VAR_43 == VAR_38)
            {
                VAR_44->Asl.Next = ((void*)0);
            }
            else
            {




                VAR_43->Asl.Child = VAR_44;
                VAR_44->Asl.Parent = VAR_43;
                VAR_44->Asl.Next = ((void*)0);
            }
        }
        else if (VAR_39->Asl.ParseOpcode == VAR_15)
        {
            if (VAR_42)
            {




                FUNC_2 (VAR_0, VAR_1, VAR_39, ((void*)0));
            }
            else
            {


                VAR_42 = VAR_39;
            }
        }
        else
        {


            FUNC_1 ("Unknown parse opcode for switch statement: %s (%u)\n",
                VAR_39->Asl.ParseOpName, VAR_39->Asl.ParseOpcode);
        }
    }



    if (VAR_42)
    {


        if (VAR_40)
        {


            FUNC_5 (VAR_42, VAR_18);
            VAR_42->Asl.Parent = VAR_44->Asl.Parent;



            FUNC_6 (VAR_44, VAR_42);
        }
    }

    if (!VAR_40)
    {
        FUNC_2 (VAR_0, VAR_2, VAR_38, ((void*)0));
    }
    VAR_45 = VAR_38->Asl.Child;
    VAR_47 = FUNC_8 (VAR_26);
    FUNC_4 (VAR_47, VAR_38);



    VAR_39 = VAR_38;
    while ((VAR_39->Asl.ParseOpcode != VAR_25) &&
           (VAR_39->Asl.ParseOpcode != VAR_17))
    {
        VAR_39 = VAR_39->Asl.Parent;
    }
    VAR_49 = VAR_39;

    VAR_47->Asl.CompileFlags |= VAR_10;
    VAR_47->Asl.Parent = VAR_39;



    VAR_39 = VAR_39->Asl.Child;
    VAR_39 = VAR_39->Asl.Next;
    VAR_39 = VAR_39->Asl.Next;







    if (VAR_39->Asl.ParseOpcode != VAR_32)
    {
        FUNC_2 (VAR_6, VAR_3, VAR_49,
            "Due to use of Switch operator");
        VAR_39->Asl.ParseOpcode = VAR_32;
    }

    VAR_39 = VAR_39->Asl.Next;
    VAR_39 = VAR_39->Asl.Next;
    VAR_39 = VAR_39->Asl.Next;

    FUNC_6 (VAR_39, VAR_47);
    FUNC_4 (VAR_47, VAR_39);



    VAR_48 = FUNC_9 (VAR_27,
        (UINT64) FUNC_0 (VAR_53));
    FUNC_4 (VAR_48, VAR_47);
    VAR_48->Asl.CompileFlags |= VAR_11;
    VAR_47->Asl.Child = VAR_48;



    switch (VAR_55)
    {
    case 129:

        VAR_48->Asl.Next = FUNC_9 (VAR_37,
            (UINT64) 0);
        FUNC_4 (VAR_48->Asl.Next, VAR_47);
        break;

    case 128:

        VAR_48->Asl.Next = FUNC_9 (VAR_34,
            (UINT64) FUNC_0 (""));
        FUNC_4 (VAR_48->Asl.Next, VAR_47);
        break;

    case 130:

        (void) FUNC_11 (VAR_48, FUNC_9 (VAR_13,
            (UINT64) 0));
        VAR_39 = VAR_48->Asl.Next;
        FUNC_4 (VAR_39, VAR_48);

        (void) FUNC_10 (VAR_39, 1, FUNC_9 (VAR_37,
            (UINT64) 1));
        FUNC_4 (VAR_39->Asl.Child, VAR_39);

        VAR_52 = FUNC_9 (VAR_16, (UINT64) 0);
        FUNC_4 (VAR_52, VAR_39->Asl.Child);
        (void) FUNC_11 (VAR_39->Asl.Child, VAR_52);

        FUNC_7 (VAR_39->Asl.Child, VAR_39);
        break;

    default:

        break;
    }

    FUNC_7 (VAR_48, VAR_47);







    FUNC_5 (VAR_38, VAR_36);
    VAR_47 = FUNC_8 (VAR_29);
    FUNC_4 (VAR_47, VAR_38);
    VAR_47->Asl.Next = VAR_45->Asl.Next;
    VAR_47->Asl.Parent = VAR_38;
    VAR_38->Asl.Child = VAR_47;



    VAR_50 = FUNC_8 (VAR_33);
    FUNC_4 (VAR_50, VAR_47);
    VAR_50->Asl.Parent = VAR_38;
    FUNC_6 (VAR_47, VAR_50);



    VAR_50->Asl.Child = VAR_45;
    VAR_45->Asl.Parent = VAR_50;

    VAR_47 = FUNC_9 (VAR_27,
        (UINT64) FUNC_0 (VAR_53));
    FUNC_4 (VAR_47, VAR_50);
    VAR_47->Asl.Parent = VAR_50;
    VAR_45->Asl.Next = VAR_47;



    VAR_44 = VAR_38->Asl.Child;
    while (VAR_44->Asl.Next)
    {
        VAR_44 = VAR_44->Asl.Next;
    }

    VAR_51 = FUNC_8 (VAR_12);
    FUNC_4 (VAR_51, VAR_47);
    VAR_51->Asl.Parent = VAR_38;
    FUNC_6 (VAR_44, VAR_51);
}
