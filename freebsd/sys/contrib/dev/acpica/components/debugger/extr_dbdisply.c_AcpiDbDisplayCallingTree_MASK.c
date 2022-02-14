
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* Next; int * MethodNode; } ;
typedef TYPE_1__ ACPI_WALK_STATE ;
typedef int ACPI_NAMESPACE_NODE ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;

void
FUNC_3 (
    void)
{
    ACPI_WALK_STATE *VAR_1;
    ACPI_NAMESPACE_NODE *VAR_2;


    VAR_1 = FUNC_0 (VAR_0);
    if (!VAR_1)
    {
        FUNC_1 ("There is no method currently executing\n");
        return;
    }

    FUNC_1 ("Current Control Method Call Tree\n");

    while (VAR_1)
    {
        VAR_2 = VAR_1->MethodNode;
        FUNC_1 ("    [%4.4s]\n", FUNC_2 (VAR_2));

        VAR_1 = VAR_1->Next;
    }
}
