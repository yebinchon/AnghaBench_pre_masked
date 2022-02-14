
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_10__ {scalar_t__ Integer; int String; } ;
struct TYPE_11__ {scalar_t__ ParseOpcode; int AmlLength; TYPE_1__ Value; int AmlOpcode; TYPE_3__* Next; TYPE_3__* Child; } ;
struct TYPE_12__ {TYPE_2__ Asl; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,TYPE_3__*,char*) ;
 int FUNC_2 (TYPE_3__*) ;







 char* FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7 (
    ACPI_PARSE_OBJECT *VAR_7)
{
    ACPI_PARSE_OBJECT *VAR_8;
    ACPI_PARSE_OBJECT *VAR_9;



    UINT32 VAR_10 = 0;





    VAR_9 = VAR_7->Asl.Child;
    VAR_8 = VAR_9->Asl.Next;






    if ((VAR_9->Asl.ParseOpcode != 131) &&
        (VAR_9->Asl.ParseOpcode != 133))
    {
        return;
    }






    switch (VAR_8->Asl.ParseOpcode)
    {
    case 131:
    case 134:
    case 128:
    case 132:



        while (VAR_8)
        {


            VAR_8->Asl.AmlOpcode = VAR_2;
            VAR_8->Asl.AmlLength = 1;
            VAR_8->Asl.ParseOpcode = 130;

            VAR_10++;
            VAR_8 = FUNC_0 (VAR_8);
        }
        break;

    case 129:





        VAR_10 = FUNC_6 (VAR_8->Asl.Value.String) + 1;

        VAR_8->Asl.AmlOpcode = VAR_1;
        VAR_8->Asl.AmlLength = VAR_10;
        VAR_8->Asl.ParseOpcode = 130;
        break;

    case 130:


        return;

    case 133:
        break;

    default:

        FUNC_1 (VAR_3, VAR_5, VAR_8,
            "Unknown buffer initializer opcode");
        FUNC_5 ("Unknown buffer initializer opcode [%s]\n",
            FUNC_3 (VAR_8->Asl.ParseOpcode));
        return;
    }



    if (VAR_9->Asl.Value.Integer > VAR_10)
    {
        VAR_10 = (UINT32) VAR_9->Asl.Value.Integer;
    }

    if (!VAR_10)
    {


        FUNC_1 (VAR_6, VAR_4, VAR_9, ((void*)0));


    }





    VAR_9->Asl.ParseOpcode = 131;
    VAR_9->Asl.AmlOpcode = VAR_0;
    VAR_9->Asl.Value.Integer = VAR_10;

    (void) FUNC_2 (VAR_9);
    FUNC_4 (VAR_9);


}
