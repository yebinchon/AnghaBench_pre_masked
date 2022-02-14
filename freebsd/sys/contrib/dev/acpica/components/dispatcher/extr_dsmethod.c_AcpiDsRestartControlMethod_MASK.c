
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * ReturnDesc; scalar_t__ ReturnUsed; int * ImplicitReturnObj; int Results; int MethodCallOp; int MethodNode; } ;
typedef TYPE_1__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef int ACPI_OPERAND_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ) ;

ACPI_STATUS
FUNC_8 (
    ACPI_WALK_STATE *VAR_4,
    ACPI_OPERAND_OBJECT *VAR_5)
{
    ACPI_STATUS VAR_6;
    int VAR_7;


    FUNC_2 (VAR_2, VAR_4);


    FUNC_0 (*(VAR_0,
        "****Restart [%4.4s] Op %p ReturnValueFromCallee %p\n",
        FUNC_5 (VAR_4->MethodNode),
        VAR_4->MethodCallOp, VAR_5));

    FUNC_0 ((VAR_0,
        "    ReturnFromThisMethodUsed?=%X ResStack %p Walk %p\n",
        VAR_4->ReturnUsed,
        VAR_4->Results, VAR_4));



    if (VAR_5)
    {


        VAR_7 = (VAR_4->ImplicitReturnObj == VAR_5);



        if (VAR_4->ReturnUsed)
        {


            VAR_6 = FUNC_4 (VAR_5, VAR_4);
            if (FUNC_1 (VAR_6))
            {
                FUNC_6 (VAR_5);
                FUNC_7 (VAR_6);
            }





            VAR_4->ReturnDesc = VAR_5;
        }
        else if (!FUNC_3 (VAR_5, VAR_4, VAR_3) ||
                 VAR_7)
        {





            FUNC_6 (VAR_5);
        }
    }

    FUNC_7 (VAR_1);
}
