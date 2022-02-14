
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
struct TYPE_13__ {scalar_t__ Class; int Object; } ;
struct TYPE_12__ {int ReferenceCount; scalar_t__ Type; } ;
struct TYPE_14__ {TYPE_2__ Reference; TYPE_1__ Common; } ;
typedef int ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (scalar_t__,int ,int *) ;
 int FUNC_5 (scalar_t__,int ,int *,int **) ;
 int FUNC_6 (scalar_t__,int ,TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_3__*,int ,int *,int ) ;
 TYPE_3__* FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*,TYPE_3__**,int *) ;
 int FUNC_10 (TYPE_3__*) ;
 int VAR_7 ;
 int FUNC_11 (int ) ;

ACPI_STATUS
FUNC_12 (
    UINT8 VAR_8,
    UINT32 VAR_9,
    ACPI_OPERAND_OBJECT *VAR_10,
    ACPI_WALK_STATE *VAR_11)
{
    ACPI_STATUS VAR_12;
    ACPI_NAMESPACE_NODE *VAR_13;
    ACPI_OPERAND_OBJECT *VAR_14;
    ACPI_OPERAND_OBJECT *VAR_15;


    FUNC_2 (VAR_7);
    FUNC_0 ((VAR_0, "Type=%2.2X Index=%u Obj=%p\n",
        VAR_8, VAR_9, VAR_10));



    if (!VAR_10)
    {
        FUNC_11 (VAR_6);
    }



    VAR_12 = FUNC_5 (VAR_8, VAR_9, VAR_11, &VAR_13);
    if (FUNC_1 (VAR_12))
    {
        FUNC_11 (VAR_12);
    }

    VAR_14 = FUNC_8 (VAR_13);
    if (VAR_14 == VAR_10)
    {
        FUNC_0 ((VAR_0, "Obj=%p already installed!\n",
            VAR_10));
        FUNC_11 (VAR_12);
    }
    VAR_15 = VAR_10;
    if (VAR_10->Common.ReferenceCount > 1)
    {
        VAR_12 = FUNC_9 (
            VAR_10, &VAR_15, VAR_11);
        if (FUNC_1 (VAR_12))
        {
            FUNC_11 (VAR_12);
        }
    }







    if (VAR_14)
    {
        if (VAR_8 == VAR_3)
        {




            if ((FUNC_3 (VAR_14) ==
                    VAR_1) &&
                (VAR_14->Common.Type ==
                    VAR_5) &&
                (VAR_14->Reference.Class ==
                    VAR_4))
            {
                FUNC_0 ((VAR_0,
                    "Arg (%p) is an ObjRef(Node), storing in node %p\n",
                    VAR_15, VAR_14));






                VAR_12 = FUNC_7 (VAR_15,
                    VAR_14->Reference.Object, VAR_11,
                    VAR_2);



                if (VAR_15 != VAR_10)
                {
                    FUNC_10 (VAR_15);
                }

                FUNC_11 (VAR_12);
            }
        }



        FUNC_4 (VAR_8, VAR_9, VAR_11);
    }






    VAR_12 = FUNC_6 (VAR_8, VAR_9, VAR_15, VAR_11);



    if (VAR_15 != VAR_10)
    {
        FUNC_10 (VAR_15);
    }

    FUNC_11 (VAR_12);
}
