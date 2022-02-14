
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef size_t UINT32 ;
typedef int UINT16 ;
struct TYPE_32__ {TYPE_11__* Object; int Class; } ;
struct TYPE_31__ {TYPE_11__* DataObj; TYPE_11__* IndexObj; } ;
struct TYPE_30__ {TYPE_11__* RegionObj; TYPE_11__* BankObj; } ;
struct TYPE_29__ {TYPE_11__* RegionObj; } ;
struct TYPE_28__ {TYPE_11__* BufferObj; } ;
struct TYPE_27__ {int Type; } ;
struct TYPE_26__ {size_t Count; TYPE_11__** Elements; } ;
struct TYPE_25__ {TYPE_11__** Next; } ;
struct TYPE_24__ {TYPE_11__** NotifyList; } ;
struct TYPE_21__ {TYPE_11__* Object; } ;
struct TYPE_23__ {TYPE_10__ Update; } ;
struct TYPE_22__ {TYPE_9__ Reference; TYPE_8__ IndexField; TYPE_7__ BankField; TYPE_6__ Field; TYPE_5__ BufferField; TYPE_4__ Common; TYPE_3__ Package; TYPE_2__ Notify; TYPE_1__ CommonNotify; } ;
typedef int ACPI_STATUS ;
typedef TYPE_11__ ACPI_OPERAND_OBJECT ;
typedef TYPE_12__ ACPI_GENERIC_STATE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_11__*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_11__*,int ,TYPE_12__**) ;
 int FUNC_6 (TYPE_12__*) ;
 TYPE_12__* FUNC_7 (TYPE_12__**) ;
 int FUNC_8 (TYPE_11__*,int ) ;
 int VAR_7 ;

ACPI_STATUS
FUNC_9 (
    ACPI_OPERAND_OBJECT *VAR_8,
    UINT16 VAR_9)
{
    ACPI_STATUS VAR_10 = VAR_6;
    ACPI_GENERIC_STATE *VAR_11 = ((void*)0);
    ACPI_OPERAND_OBJECT *VAR_12 = ((void*)0);
    ACPI_OPERAND_OBJECT *VAR_13;
    ACPI_GENERIC_STATE *VAR_14;
    UINT32 VAR_15;


    FUNC_3 (VAR_7);


    while (VAR_8)
    {


        if (FUNC_4 (VAR_8) == VAR_1)
        {
            FUNC_0 ((VAR_0,
                "Object %p is NS handle\n", VAR_8));
            return (VAR_6);
        }





        switch (VAR_8->Common.Type)
        {
        case 139:
        case 131:
        case 132:
        case 128:




            for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++)
            {
                VAR_13 = VAR_8->CommonNotify.NotifyList[VAR_15];
                while (VAR_13)
                {
                    VAR_12 = VAR_13->Notify.Next[VAR_15];
                    FUNC_8 (VAR_13, VAR_9);
                    VAR_13 = VAR_12;
                }
            }
            break;

        case 133:




            for (VAR_15 = 0; VAR_15 < VAR_8->Package.Count; VAR_15++)
            {




                VAR_12 = VAR_8->Package.Elements[VAR_15];
                if (!VAR_12)
                {
                    continue;
                }

                switch (VAR_12->Common.Type)
                {
                case 138:
                case 129:
                case 141:





                    FUNC_8 (VAR_12, VAR_9);
                    break;

                default:




                    VAR_10 = FUNC_5 (
                        VAR_12, VAR_9, &VAR_11);
                    if (FUNC_2 (VAR_10))
                    {
                        goto ErrorExit;
                    }
                    break;
                }
            }
            VAR_12 = ((void*)0);
            break;

        case 140:

            VAR_12 = VAR_8->BufferField.BufferObj;
            break;

        case 134:

            VAR_12 = VAR_8->Field.RegionObj;
            break;

        case 137:

            VAR_12 = VAR_8->BankField.BankObj;
            VAR_10 = FUNC_5 (
                VAR_8->BankField.RegionObj, VAR_9, &VAR_11);
            if (FUNC_2 (VAR_10))
            {
                goto ErrorExit;
            }
            break;

        case 136:

            VAR_12 = VAR_8->IndexField.IndexObj;
            VAR_10 = FUNC_5 (
                VAR_8->IndexField.DataObj, VAR_9, &VAR_11);
            if (FUNC_2 (VAR_10))
            {
                goto ErrorExit;
            }
            break;

        case 135:





            if ((VAR_8->Reference.Class == VAR_3) ||
                (VAR_8->Reference.Class== VAR_4))
            {
                VAR_12 = VAR_8->Reference.Object;
            }
            break;

        case 130:
        default:

            break;
        }






        FUNC_8 (VAR_8, VAR_9);
        VAR_8 = ((void*)0);



        if (VAR_12)
        {
            VAR_8 = VAR_12;
            VAR_12 = ((void*)0);
        }
        else if (VAR_11)
        {
            VAR_14 = FUNC_7 (&VAR_11);
            VAR_8 = VAR_14->Update.Object;
            FUNC_6 (VAR_14);
        }
    }

    return (VAR_6);


ErrorExit:

    FUNC_1 ((VAR_5, VAR_10,
        "Could not update object reference count"));



    while (VAR_11)
    {
        VAR_14 = FUNC_7 (&VAR_11);
        FUNC_6 (VAR_14);
    }

    return (VAR_10);
}
