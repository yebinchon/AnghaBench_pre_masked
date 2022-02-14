
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_16__ {int TargetType; size_t Value; TYPE_5__* Object; TYPE_5__** Where; int Class; } ;
struct TYPE_15__ {int * Pointer; } ;
struct TYPE_14__ {int Value; } ;
struct TYPE_13__ {int Type; int ReferenceCount; } ;
struct TYPE_17__ {TYPE_4__ Reference; TYPE_3__ Buffer; TYPE_2__ Integer; TYPE_1__ Common; } ;
typedef int ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_5__ ACPI_OPERAND_OBJECT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;



 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_5__**,int *) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int VAR_6 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_8 (
    ACPI_OPERAND_OBJECT *VAR_7,
    ACPI_OPERAND_OBJECT *VAR_8,
    ACPI_WALK_STATE *VAR_9)
{
    ACPI_STATUS VAR_10 = VAR_5;
    ACPI_OPERAND_OBJECT *VAR_11;
    ACPI_OPERAND_OBJECT *VAR_12;
    UINT8 VAR_13 = 0;
    UINT32 VAR_14;


    FUNC_2 (VAR_6);






    switch (VAR_8->Reference.TargetType)
    {
    case 129:
        VAR_11 = *(VAR_8->Reference.Where);

        if (VAR_7->Common.Type == VAR_1 &&
            VAR_7->Reference.Class == VAR_0)
        {


            FUNC_3 (VAR_7);
            VAR_12 = VAR_7;
        }
        else
        {


            VAR_10 = FUNC_4 (
                VAR_7, &VAR_12, VAR_9);
            if (FUNC_1 (VAR_10))
            {
                FUNC_7 (VAR_10);
            }
        }

        if (VAR_11)
        {


            for (VAR_14 = 0;
                 VAR_14 < ((ACPI_OPERAND_OBJECT *)
                        VAR_8->Reference.Object)->Common.ReferenceCount;
                 VAR_14++)
            {
                FUNC_6 (VAR_11);
            }
        }

        *(VAR_8->Reference.Where) = VAR_12;



        for (VAR_14 = 1;
             VAR_14 < ((ACPI_OPERAND_OBJECT *)
                    VAR_8->Reference.Object)->Common.ReferenceCount;
             VAR_14++)
        {
            FUNC_3 (VAR_12);
        }

        break;

    case 131:
        VAR_11 = VAR_8->Reference.Object;
        if ((VAR_11->Common.Type != 132) &&
            (VAR_11->Common.Type != 128))
        {
            FUNC_7 (VAR_2);
        }





        switch (VAR_7->Common.Type)
        {
        case 130:



            VAR_13 = (UINT8) (VAR_7->Integer.Value);
            break;

        case 132:
        case 128:



            VAR_13 = VAR_7->Buffer.Pointer[0];
            break;

        default:



            FUNC_0 ((VAR_4,
                "Source must be type [Integer/Buffer/String], found [%s]",
                FUNC_5 (VAR_7)));
            FUNC_7 (VAR_2);
        }



        VAR_11->Buffer.Pointer[VAR_8->Reference.Value] = VAR_13;
        break;

    default:
        FUNC_0 ((VAR_4,
            "Target is not of type [Package/BufferField]"));
        VAR_10 = VAR_3;
        break;
    }

    FUNC_7 (VAR_10);
}
