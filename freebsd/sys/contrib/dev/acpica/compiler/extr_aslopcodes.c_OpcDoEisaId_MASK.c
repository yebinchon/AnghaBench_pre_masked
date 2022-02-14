
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
struct TYPE_8__ {int Integer; scalar_t__ String; } ;
struct TYPE_9__ {int ParseOpcode; int CompileFlags; TYPE_1__ Value; } ;
struct TYPE_10__ {TYPE_2__ Asl; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,TYPE_3__*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9 (
    ACPI_PARSE_OBJECT *VAR_6)
{
    UINT32 VAR_7 = 0;
    UINT32 VAR_8;
    char *VAR_9;
    ACPI_STATUS VAR_10 = VAR_1;
    UINT32 VAR_11;


    VAR_9 = (char *) VAR_6->Asl.Value.String;





    if (FUNC_8 (VAR_9) != 7)
    {
        VAR_10 = VAR_0;
    }
    else
    {


        for (VAR_11 = 0; VAR_11 < 7; VAR_11++)
        {


            if (VAR_11 < 3)
            {
                if (!FUNC_6 ((int) VAR_9[VAR_11]))
                {
                    VAR_10 = VAR_0;
                }
            }



            else if (!FUNC_7 ((int) VAR_9[VAR_11]))
            {
                VAR_10 = VAR_0;
            }
        }
    }

    if (FUNC_0 (VAR_10))
    {
        FUNC_3 (VAR_2, VAR_3, VAR_6, VAR_6->Asl.Value.String);
    }
    else
    {


        VAR_8 =
            (UINT32) ((UINT8) (VAR_9[0] - 0x40)) << 26 |
            (UINT32) ((UINT8) (VAR_9[1] - 0x40)) << 21 |
            (UINT32) ((UINT8) (VAR_9[2] - 0x40)) << 16 |

            (FUNC_1 (VAR_9[3])) << 12 |
            (FUNC_1 (VAR_9[4])) << 8 |
            (FUNC_1 (VAR_9[5])) << 4 |
             FUNC_1 (VAR_9[6]);



        VAR_7 = FUNC_2 (VAR_8);
    }





    VAR_6->Asl.Value.Integer = VAR_7;

    VAR_6->Asl.CompileFlags &= ~VAR_4;
    VAR_6->Asl.ParseOpcode = VAR_5;
    (void) FUNC_4 (VAR_6);



    FUNC_5 (VAR_6);
}
