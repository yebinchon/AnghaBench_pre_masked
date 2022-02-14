
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* String; int Integer; } ;
struct TYPE_11__ {scalar_t__ AmlOpcode; int ParseOpcode; int * ExternalName; TYPE_1__ Value; TYPE_3__* Child; TYPE_3__* Parent; } ;
struct TYPE_12__ {TYPE_2__ Asl; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,TYPE_3__*,int *) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*) ;





 int VAR_7 ;



 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_5 (
    ACPI_PARSE_OBJECT *VAR_8)
{
    ACPI_PARSE_OBJECT *VAR_9;


    if (VAR_8->Asl.AmlOpcode == VAR_0)
    {
        return;
    }

    switch (VAR_8->Asl.ParseOpcode)
    {
    case 135:

        FUNC_2 (VAR_8);
        break;

    case 130:

        FUNC_3 (VAR_8);
        break;

    case 133:




        VAR_6 = 0;
        break;

    case 134:

        FUNC_1 (VAR_8);
        break;

    case 128:



        VAR_8->Asl.ParseOpcode = VAR_7;
        FUNC_4 (VAR_8);



        VAR_9 = VAR_8;
        while (VAR_9)
        {
            if (VAR_9->Asl.ParseOpcode == 133)
            {


                VAR_9 = VAR_9->Asl.Child;
                VAR_8->Asl.Value.String = VAR_9->Asl.Value.String;
                return;
            }

            VAR_9 = VAR_9->Asl.Parent;
        }



        VAR_8->Asl.Value.String = "\\";
        break;

    case 129:

        FUNC_0 (VAR_5, VAR_3, VAR_8, ((void*)0));
        break;

    case 131:



        if (VAR_8->Asl.Child->Asl.Value.Integer > 1000)
        {
            FUNC_0 (VAR_4, VAR_2, VAR_8, ((void*)0));
        }
        break;

    case 132:

        FUNC_0 (VAR_5, VAR_1, VAR_8, VAR_8->Asl.ExternalName);

        break;

    default:



        break;
    }
}
