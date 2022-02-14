
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_9__ {scalar_t__ Integer; int String; } ;
struct TYPE_10__ {char* ExternalName; char* Namepath; scalar_t__ ParseOpcode; int CompileFlags; TYPE_3__* Parent; TYPE_3__* Next; TYPE_3__* Child; scalar_t__ LogicalLineNumber; scalar_t__ LineNumber; int AmlOpcode; TYPE_1__ Value; int AmlLength; int Node; } ;
struct TYPE_11__ {TYPE_2__ Asl; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;
typedef scalar_t__ ACPI_OBJECT_TYPE ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,TYPE_3__*,char*) ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7 (
    ACPI_PARSE_OBJECT *VAR_13)
{
    ACPI_PARSE_OBJECT *VAR_14;
    ACPI_PARSE_OBJECT *VAR_15;
    ACPI_PARSE_OBJECT *VAR_16;
    ACPI_PARSE_OBJECT *VAR_17;
    ACPI_PARSE_OBJECT *VAR_18;
    ACPI_PARSE_OBJECT *VAR_19;
    char *VAR_20;
    ACPI_OBJECT_TYPE VAR_21;
    ACPI_STATUS VAR_22;
    UINT32 VAR_23;


    if (!VAR_5)
    {
        return;
    }



    VAR_17 = VAR_5;
    while (VAR_17)
    {




        VAR_15 = VAR_17->Asl.Child;



        VAR_20 = FUNC_1 (VAR_15->Asl.Node, VAR_12);
        VAR_15->Asl.ExternalName = VAR_20;
        VAR_15->Asl.Namepath = VAR_20;



        VAR_15->Asl.LineNumber = 0;
        VAR_15->Asl.LogicalLineNumber = 0;

        VAR_19 = VAR_15->Asl.Child;
        VAR_19->Asl.LineNumber = 0;
        VAR_19->Asl.LogicalLineNumber = 0;

        if (VAR_19->Asl.ParseOpcode == VAR_9)
        {
            VAR_19->Asl.ParseOpcode = VAR_10;
        }

        VAR_19->Asl.ExternalName = VAR_20;
        VAR_22 = FUNC_4 (VAR_20, &VAR_19->Asl.Value.String);
        if (FUNC_0 (VAR_22))
        {
            FUNC_2 (VAR_3, VAR_4,
                VAR_19, "Could not internalize namestring");
            return;
        }

        VAR_19->Asl.AmlLength = FUNC_6 (VAR_19->Asl.Value.String);

        VAR_19 = VAR_19->Asl.Next;
        VAR_19->Asl.LineNumber = 0;
        VAR_19->Asl.LogicalLineNumber = 0;

        VAR_19 = VAR_19->Asl.Next;
        VAR_19->Asl.LineNumber = 0;
        VAR_19->Asl.LogicalLineNumber = 0;

        VAR_19 = VAR_19->Asl.Next;
        VAR_19->Asl.LineNumber = 0;
        VAR_19->Asl.LogicalLineNumber = 0;

        VAR_14 = VAR_15->Asl.Parent;
        VAR_18 = VAR_19 = VAR_14->Asl.Child;



        while (VAR_19 != VAR_15)
        {
            VAR_18 = VAR_19;
            VAR_19 = VAR_19->Asl.Next;
        }



        if (VAR_18 == VAR_15)
        {


            VAR_14->Asl.Child = VAR_15->Asl.Next;
        }

        VAR_18->Asl.Next = VAR_15->Asl.Next;
        VAR_15->Asl.Next = ((void*)0);
        VAR_15->Asl.Parent = VAR_5;



        if (VAR_17->Asl.Next)
        {
            VAR_15->Asl.Next = VAR_17->Asl.Next->Asl.Child;
        }

        VAR_17 = VAR_17->Asl.Next;
    }





    VAR_18 = VAR_5->Asl.Child;
    VAR_19 = VAR_18;
    while (VAR_19)
    {
        VAR_21 = (ACPI_OBJECT_TYPE)
            VAR_19->Asl.Child->Asl.Next->Asl.Value.Integer;

        if (VAR_21 == VAR_0 &&
            !(VAR_19->Asl.CompileFlags & VAR_7))
        {
            if (VAR_19 == VAR_18)
            {
                VAR_5->Asl.Child = VAR_19->Asl.Next;
                VAR_19->Asl.Next = ((void*)0);
                VAR_18 = VAR_5->Asl.Child;
                VAR_19 = VAR_18;
                continue;
            }
            else
            {
                VAR_18->Asl.Next = VAR_19->Asl.Next;
                VAR_19->Asl.Next = ((void*)0);
                VAR_19 = VAR_18->Asl.Next;
                continue;
            }
        }

        VAR_18 = VAR_19;
        VAR_19 = VAR_19->Asl.Next;
    }



    if (!VAR_5->Asl.Child)
    {
        return;
    }



    VAR_5->Asl.ParseOpcode = VAR_8;
    VAR_5->Asl.AmlOpcode = VAR_1;
    VAR_5->Asl.CompileFlags = VAR_6;
    FUNC_5 (VAR_5);



    VAR_16 = FUNC_3 (VAR_11);
    VAR_16->Asl.AmlOpcode = VAR_2;

    VAR_16->Asl.Parent = VAR_5;
    VAR_16->Asl.Child = ((void*)0);
    VAR_16->Asl.Next = VAR_5->Asl.Child;
    VAR_5->Asl.Child = VAR_16;



    VAR_5->Asl.LineNumber = 0;
    VAR_5->Asl.LogicalLineNumber = 0;

    VAR_16->Asl.LineNumber = 0;
    VAR_16->Asl.LogicalLineNumber = 0;



    VAR_18 = VAR_13->Asl.Child;
    VAR_19 = VAR_18;



    for (VAR_23 = 0; VAR_23 < 6; VAR_23++)
    {
        VAR_18 = VAR_19;
        VAR_19 = VAR_18->Asl.Next;
    }

    if (VAR_19)
    {


        VAR_5->Asl.Next = VAR_19;
    }
    else
    {


        VAR_5->Asl.Next = ((void*)0);
    }

    VAR_18->Asl.Next = VAR_5;
    VAR_5->Asl.Parent = VAR_18->Asl.Parent;
}
