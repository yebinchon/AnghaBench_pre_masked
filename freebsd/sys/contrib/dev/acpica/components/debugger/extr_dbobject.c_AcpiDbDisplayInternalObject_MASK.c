
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_18__ {size_t Value; int Class; TYPE_6__* Node; TYPE_6__* Object; TYPE_6__** Where; int TargetType; } ;
struct TYPE_15__ {int Type; } ;
struct TYPE_20__ {TYPE_4__ Reference; TYPE_1__ Common; } ;
struct TYPE_19__ {TYPE_3__* Arguments; TYPE_2__* LocalVariables; } ;
struct TYPE_17__ {TYPE_6__* Object; } ;
struct TYPE_16__ {TYPE_6__* Object; } ;
typedef TYPE_5__ ACPI_WALK_STATE ;
typedef TYPE_6__ ACPI_OPERAND_OBJECT ;
typedef TYPE_6__ ACPI_NAMESPACE_NODE ;





 int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;


 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;

void
FUNC_6 (
    ACPI_OPERAND_OBJECT *VAR_1,
    ACPI_WALK_STATE *VAR_2)
{
    UINT8 VAR_3;


    FUNC_3 ("%p ", VAR_1);

    if (!VAR_1)
    {
        FUNC_3 ("<Null Object>\n");
        return;
    }



    switch (FUNC_0 (VAR_1))
    {
    case 138:

        FUNC_3 ("<Parser>  ");
        break;

    case 140:

        FUNC_2 ((ACPI_NAMESPACE_NODE *) VAR_1);
        break;

    case 139:

        VAR_3 = VAR_1->Common.Type;
        if (VAR_3 > VAR_0)
        {
            FUNC_3 (" Type %X [Invalid Type]", (UINT32) VAR_3);
            return;
        }



        switch (VAR_1->Common.Type)
        {
        case 129:

            FUNC_3 ("[%s] ", FUNC_5 (VAR_1));



            switch (VAR_1->Reference.Class)
            {
            case 134:

                FUNC_3 ("%X ", VAR_1->Reference.Value);
                if (VAR_2)
                {
                    VAR_1 = VAR_2->LocalVariables
                        [VAR_1->Reference.Value].Object;
                    FUNC_3 ("%p", VAR_1);
                    FUNC_1 (VAR_1);
                }
                break;

            case 137:

                FUNC_3 ("%X ", VAR_1->Reference.Value);
                if (VAR_2)
                {
                    VAR_1 = VAR_2->Arguments
                        [VAR_1->Reference.Value].Object;
                    FUNC_3 ("%p", VAR_1);
                    FUNC_1 (VAR_1);
                }
                break;

            case 135:

                switch (VAR_1->Reference.TargetType)
                {
                case 130:

                    FUNC_3 ("%p", VAR_1->Reference.Object);
                    FUNC_1 (VAR_1->Reference.Object);
                    break;

                case 128:

                    FUNC_3 ("%p", VAR_1->Reference.Where);
                    if (!VAR_1->Reference.Where)
                    {
                        FUNC_3 (" Uninitialized WHERE pointer");
                    }
                    else
                    {
                        FUNC_1 (
                            *(VAR_1->Reference.Where));
                    }
                    break;

                default:

                    FUNC_3 ("Unknown index target type");
                    break;
                }
                break;

            case 132:

                if (!VAR_1->Reference.Object)
                {
                    FUNC_3 (
                        "Uninitialized reference subobject pointer");
                    break;
                }



                switch (FUNC_0 (VAR_1->Reference.Object))
                {
                case 140:

                    FUNC_2 (VAR_1->Reference.Object);
                    break;

                case 139:

                    FUNC_1 (VAR_1->Reference.Object);
                    break;

                default:
                    break;
                }
                break;

            case 133:

                FUNC_2 (VAR_1->Reference.Node);
                break;

            case 136:
            case 131:

                FUNC_3 ("\n");
                break;

            default:

                FUNC_3 ("%2.2X\n", VAR_1->Reference.Class);
                break;
            }
            break;

        default:

            FUNC_3 ("<Obj>            ");
            FUNC_1 (VAR_1);
            break;
        }
        break;

    default:

        FUNC_3 ("<Not a valid ACPI Object Descriptor> [%s]",
            FUNC_4 (VAR_1));
        break;
    }

    FUNC_3 ("\n");
}
