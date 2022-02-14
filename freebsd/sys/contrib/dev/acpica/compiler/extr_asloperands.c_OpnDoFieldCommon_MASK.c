
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_7__ {int Integer; } ;
struct TYPE_8__ {int ParseOpcode; int AmlLength; int ExtraValue; TYPE_3__* Next; TYPE_1__ Value; TYPE_3__* Child; int AmlOpcode; } ;
struct TYPE_9__ {TYPE_2__ Asl; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,TYPE_3__*,char*) ;
 int VAR_6 ;

 void* VAR_7 ;


 int VAR_8 ;


__attribute__((used)) static void
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_9,
    ACPI_PARSE_OBJECT *VAR_10)
{
    ACPI_PARSE_OBJECT *VAR_11;
    ACPI_PARSE_OBJECT *VAR_12;
    UINT32 VAR_13;
    UINT32 VAR_14;
    UINT8 VAR_15;
    UINT8 VAR_16;
    UINT8 VAR_17;
    UINT8 VAR_18;
    UINT32 VAR_19;




    VAR_15 = (UINT8) VAR_10->Asl.Value.Integer;
    VAR_10->Asl.ParseOpcode = VAR_7;



    VAR_9->Asl.Value.Integer = VAR_15;



    VAR_11 = VAR_10->Asl.Next;
    VAR_16 = (UINT8) VAR_11->Asl.Value.Integer;
    VAR_11->Asl.ParseOpcode = VAR_7;



    VAR_11 = VAR_11->Asl.Next;
    VAR_17 = (UINT8) VAR_11->Asl.Value.Integer;






    VAR_18 = (UINT8) (VAR_15 | VAR_16 | VAR_17);





    VAR_11->Asl.Value.Integer = VAR_18;
    VAR_11->Asl.AmlOpcode = VAR_0;
    VAR_11->Asl.AmlLength = 1;
    VAR_11->Asl.ParseOpcode = VAR_8;



    VAR_11 = VAR_11->Asl.Next;
    VAR_13 = 0;

    while (VAR_11)
    {


        VAR_11->Asl.ExtraValue = VAR_13;

        switch (VAR_11->Asl.ParseOpcode)
        {
        case 131:

            VAR_12 = VAR_11->Asl.Child;
            VAR_15 = (UINT8) VAR_12->Asl.Value.Integer;


            break;

        case 129:



            VAR_12 = VAR_11->Asl.Child;
            VAR_14 = ((UINT32) VAR_12->Asl.Value.Integer) * 8;





            if (VAR_14 < VAR_13)
            {




                FUNC_0 (VAR_1, VAR_2, VAR_12,
                    ((void*)0));
                VAR_11->Asl.ParseOpcode = VAR_7;
                VAR_12->Asl.ParseOpcode = VAR_7;
            }
            else if (VAR_14 == VAR_13)
            {





                FUNC_0 (VAR_5, VAR_3, VAR_12, ((void*)0));

                if (VAR_6)
                {




                    VAR_11->Asl.ParseOpcode = VAR_7;
                    VAR_12->Asl.ParseOpcode = VAR_7;

                    FUNC_0 (VAR_4, VAR_3, VAR_12,
                        "Optimizer has removed statement");
                }
                else
                {


                    VAR_12->Asl.Value.Integer =
                        VAR_14 - VAR_13;
                    VAR_13 = VAR_14;
                }
            }
            else
            {




                VAR_12->Asl.Value.Integer =
                    VAR_14 - VAR_13;
                VAR_13 = VAR_14;
            }
            break;

        case 130:
        case 128:



            VAR_12 = VAR_11->Asl.Child;
            VAR_14 = (UINT32) VAR_12->Asl.Value.Integer;
            VAR_13 += VAR_14;

            if ((VAR_14 == 0) &&
                (VAR_11->Asl.ParseOpcode == 128) &&
                VAR_6)
            {






                VAR_11->Asl.ParseOpcode = VAR_7;
                VAR_12->Asl.ParseOpcode = VAR_7;
                break;
            }



            switch (VAR_15)
            {
                case 137:
                case 135:
                case 136:
                default:

                    VAR_19 = 8;
                    break;

                case 132:
                    VAR_19 = 16;
                    break;

                case 134:
                    VAR_19 = 32;
                    break;

                case 133:
                    VAR_19 = 64;
                    break;
            }

            VAR_12->Asl.ExtraValue = VAR_19;
            break;

        default:



            break;
        }



        VAR_11 = VAR_11->Asl.Next;
    }
}
