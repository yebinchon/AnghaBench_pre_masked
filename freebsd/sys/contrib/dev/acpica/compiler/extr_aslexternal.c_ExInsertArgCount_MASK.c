
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT16 ;
struct TYPE_6__ {scalar_t__ Integer; int String; } ;
struct TYPE_7__ {int CompileFlags; TYPE_1__ Value; TYPE_3__* Next; TYPE_3__* Child; int AmlLength; int Node; } ;
struct TYPE_8__ {TYPE_2__ Asl; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int *,char*) ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*,int *) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7 (
    ACPI_PARSE_OBJECT *VAR_5)
{
    ACPI_PARSE_OBJECT *VAR_6;
    ACPI_PARSE_OBJECT *VAR_7;
    ACPI_PARSE_OBJECT *VAR_8;
    ACPI_PARSE_OBJECT *VAR_9;
    char * VAR_10;
    char * VAR_11;
    UINT16 VAR_12 = 0;
    ACPI_STATUS VAR_13;


    VAR_11 = FUNC_2 (VAR_5->Asl.Node, VAR_4);

    VAR_6 = VAR_2;
    while (VAR_6)
    {
        VAR_12 = 0;



        if (VAR_6->Asl.Child->Asl.CompileFlags & VAR_3)
        {
            VAR_6 = VAR_6->Asl.Next;
            continue;
        }

        VAR_7 = VAR_6->Asl.Child->Asl.Child;
        VAR_10 = FUNC_2 (VAR_7->Asl.Node, VAR_4);

        if (FUNC_5 (VAR_11, VAR_10))
        {
            FUNC_1 (VAR_10);
            VAR_6 = VAR_6->Asl.Next;
            continue;
        }

        VAR_6->Asl.Child->Asl.CompileFlags |= VAR_3;





        VAR_13 = FUNC_4 (VAR_10,
            &VAR_7->Asl.Value.String);

        FUNC_1 (VAR_10);
        if (FUNC_0 (VAR_13))
        {
            FUNC_3 (VAR_0, VAR_1,
                ((void*)0), "- Could not Internalize External");
            break;
        }

        VAR_7->Asl.AmlLength = FUNC_6 (VAR_7->Asl.Value.String);



        VAR_8 = VAR_5->Asl.Child;
        while (VAR_8)
        {
            VAR_12++;
            VAR_8 = VAR_8->Asl.Next;
        }



        VAR_9 = VAR_6->Asl.Child->Asl.Child->Asl.Next->Asl.Next;
        VAR_9->Asl.Value.Integer = VAR_12;
        break;
    }

    FUNC_1 (VAR_11);
}
