
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * Thread; scalar_t__ DeferredNode; int * MethodNode; } ;
typedef TYPE_1__ ACPI_WALK_STATE ;
typedef int ACPI_THREAD_STATE ;
typedef int ACPI_STATUS ;
typedef int ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int * VAR_2 ;
 int FUNC_2 (char*) ;

void
FUNC_3 (
    ACPI_STATUS VAR_3,
    ACPI_WALK_STATE *VAR_4)
{
    ACPI_THREAD_STATE *VAR_5;
    ACPI_NAMESPACE_NODE *VAR_6;


    VAR_6 = VAR_4->MethodNode;



    if (VAR_6 == VAR_2)
    {
        return;
    }



    if ((VAR_3 & VAR_1) == VAR_0)
    {
        return;
    }



    if (VAR_4->DeferredNode)
    {
        FUNC_2 ("Executing subtree for Buffer/Package/Region\n");
        return;
    }






    VAR_5 = VAR_4->Thread;
    if (!VAR_5)
    {
        return;
    }



    FUNC_2 ("\n");
    FUNC_1 (VAR_4);
    FUNC_2 ("\n");
    FUNC_0 (VAR_4);
    FUNC_2 ("\n");
}
