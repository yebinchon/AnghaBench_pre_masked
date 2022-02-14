
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ImplicitReturnObj; } ;
typedef TYPE_1__ ACPI_WALK_STATE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

void
FUNC_3 (
    ACPI_WALK_STATE *VAR_3)
{
    FUNC_1 (VAR_2);





    if (!VAR_1)
    {
        return;
    }

    if (VAR_3->ImplicitReturnObj)
    {





        FUNC_0 (*(VAR_0,
            "Removing reference on stale implicit return obj %p\n",
            VAR_3->ImplicitReturnObj));

        FUNC_2 (VAR_3->ImplicitReturnObj);
        VAR_3->ImplicitReturnObj = ((void*)0);
    }
}
