
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_10__ {char* TableSignature; char* TableId; } ;
struct TYPE_7__ {char* String; scalar_t__* Buffer; } ;
struct TYPE_8__ {void* ParseOpcode; TYPE_3__* Next; TYPE_1__ Value; int Filename; TYPE_3__* Child; } ;
struct TYPE_9__ {TYPE_2__ Asl; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_SIZE ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,TYPE_3__*,char*) ;
 char* VAR_9 ;
 TYPE_5__* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 void* VAR_15 ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12 (
    ACPI_PARSE_OBJECT *VAR_16)
{
    ACPI_PARSE_OBJECT *VAR_17;
    ACPI_SIZE VAR_18;
    UINT32 VAR_19;
    char *VAR_20;
    ACPI_STATUS VAR_21;
    VAR_17 = VAR_16->Asl.Child;
    if (VAR_17->Asl.Value.Buffer &&
        *VAR_17->Asl.Value.Buffer &&
        (VAR_14))
    {




        FUNC_5 (VAR_16->Asl.Filename);





        VAR_20 = FUNC_7 (FUNC_11 (VAR_9) +
            FUNC_11 ((char *) VAR_17->Asl.Value.Buffer) + 1);



        FUNC_10 (VAR_20, VAR_9);
        FUNC_9 (VAR_20, (char *) VAR_17->Asl.Value.Buffer);

        VAR_11 = VAR_20;
        FUNC_6 (VAR_11);
        FUNC_2 (VAR_4);
        FUNC_3 (VAR_4);
        VAR_21 = FUNC_4 (VAR_11);
        if (FUNC_0 (VAR_21))
        {
            FUNC_1 (VAR_3, VAR_7, ((void*)0), ((void*)0));
            return;
        }
    }

    VAR_17->Asl.ParseOpcode = VAR_15;



    VAR_17 = VAR_17->Asl.Next;
    VAR_17->Asl.ParseOpcode = VAR_15;
    if (VAR_17->Asl.Value.String)
    {
        VAR_10->TableSignature = VAR_17->Asl.Value.String;
        VAR_13 = VAR_17->Asl.Value.String;
        if (FUNC_11 (VAR_13) != VAR_0)
        {
            FUNC_1 (VAR_3, VAR_8, VAR_17,
                "Length must be exactly 4 characters");
        }

        for (VAR_19 = 0; VAR_19 < VAR_0; VAR_19++)
        {
            if (!FUNC_8 ((int) VAR_13[VAR_19]))
            {
                FUNC_1 (VAR_3, VAR_8, VAR_17,
                    "Contains non-alphanumeric characters");
            }
        }
    }



    VAR_17 = VAR_17->Asl.Next;
    VAR_17->Asl.ParseOpcode = VAR_15;







    VAR_17 = VAR_17->Asl.Next;
    VAR_17->Asl.ParseOpcode = VAR_15;
    if (VAR_17->Asl.Value.String &&
        FUNC_11 (VAR_17->Asl.Value.String) > VAR_1)
    {
        FUNC_1 (VAR_3, VAR_5, VAR_17,
            "Length cannot exceed 6 characters");
    }



    VAR_17 = VAR_17->Asl.Next;
    VAR_17->Asl.ParseOpcode = VAR_15;
    if (VAR_17->Asl.Value.String)
    {
        VAR_18 = FUNC_11 (VAR_17->Asl.Value.String);
        if (VAR_18 > VAR_2)
        {
            FUNC_1 (VAR_3, VAR_6, VAR_17,
                "Length cannot exceed 8 characters");
        }

        VAR_12 = FUNC_7 (VAR_18 + 1);
        FUNC_10 (VAR_12, VAR_17->Asl.Value.String);
        VAR_10->TableId = VAR_12;





        for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++)
        {
            if (!FUNC_8 ((int) VAR_12[VAR_19]))
            {
                VAR_12[VAR_19] = '_';
            }
        }
    }



    VAR_17 = VAR_17->Asl.Next;
    VAR_17->Asl.ParseOpcode = VAR_15;
}
