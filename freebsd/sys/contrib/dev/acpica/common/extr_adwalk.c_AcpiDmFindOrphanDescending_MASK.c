
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_13__ {int ObjectType; int Class; } ;
struct TYPE_10__ {int String; TYPE_3__* Arg; } ;
struct TYPE_11__ {int AmlOpcode; int AmlOpName; TYPE_1__ Value; int Node; TYPE_3__* Parent; TYPE_3__* Next; } ;
struct TYPE_12__ {TYPE_2__ Common; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;
typedef TYPE_4__ ACPI_OPCODE_INFO ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;

 int VAR_10 ;
 int FUNC_1 (TYPE_3__*,int ,int ,int,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int,int,TYPE_3__*) ;
 int FUNC_4 (int ,int ,int *,int *) ;
 int FUNC_5 (char*,int,int ) ;
 TYPE_4__* FUNC_6 (int) ;
 int VAR_11 ;

__attribute__((used)) static ACPI_STATUS
FUNC_7 (
    ACPI_PARSE_OBJECT *VAR_12,
    UINT32 VAR_13,
    void *VAR_14)
{
    const ACPI_OPCODE_INFO *VAR_15;
    ACPI_PARSE_OBJECT *VAR_16;
    ACPI_PARSE_OBJECT *VAR_17;
    ACPI_PARSE_OBJECT *VAR_18;
    UINT32 VAR_19;


    if (!VAR_12)
    {
        return (VAR_4);
    }





    switch (VAR_12->Common.AmlOpcode)
    {
    case 128:

        VAR_16 = VAR_12->Common.Value.Arg;
        if ((VAR_16->Common.AmlOpcode == 129) &&
            !VAR_16->Common.Node)
        {
            VAR_17 = VAR_12->Common.Next;
            if (!VAR_17)
            {


                FUNC_1 (VAR_16,
                    VAR_16->Common.Value.String, VAR_0, 0, 0);
                return (VAR_4);
            }

            VAR_19 = FUNC_3 (2, 1, VAR_17);
            if (VAR_19 <= 1)
            {


                FUNC_1 (VAR_16,
                    VAR_16->Common.Value.String, VAR_0, VAR_19, 0);
                return (VAR_4);
            }

            FUNC_1 (VAR_16,
                VAR_16->Common.Value.String, VAR_2, VAR_19, 0);
        }
        break;

    case 129:



        VAR_18 = VAR_12->Common.Parent;
        VAR_15 = FUNC_6 (VAR_18->Common.AmlOpcode);

        if ((VAR_15->Class != VAR_6) &&
            (VAR_15->Class != VAR_5) &&
            (VAR_15->ObjectType != VAR_1) &&
            (VAR_18->Common.AmlOpcode != VAR_8) &&
            !VAR_12->Common.Node)
        {
            VAR_19 = FUNC_3 (0, 0, VAR_12);





            if (VAR_19 == 0)
            {
                if (((VAR_18->Common.AmlOpcode == VAR_7) ||
                     (VAR_18->Common.AmlOpcode == VAR_10) ||
                     (VAR_18->Common.AmlOpcode == VAR_9)) &&


                     (VAR_18->Common.Value.Arg == VAR_12))
                {
                    FUNC_1 (VAR_12,
                        VAR_12->Common.Value.String, VAR_0, 0, 0);
                    break;
                }
            }






            FUNC_1 (VAR_12,
                VAR_12->Common.Value.String, VAR_2, VAR_19, 0);
        }
        break;

    default:

        break;
    }

    return (VAR_4);
}
