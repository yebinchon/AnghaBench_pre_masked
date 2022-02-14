
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_10__ {scalar_t__ Type; } ;
struct TYPE_9__ {TYPE_1__* LocalVariables; TYPE_3__* MethodNode; } ;
struct TYPE_8__ {int * Object; } ;
typedef scalar_t__ BOOLEAN ;
typedef TYPE_2__ ACPI_WALK_STATE ;
typedef int ACPI_OPERAND_OBJECT ;
typedef TYPE_3__ ACPI_NAMESPACE_NODE ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (char*,...) ;
 size_t FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_3 (
    ACPI_WALK_STATE *VAR_5)
{
    UINT32 VAR_6;
    ACPI_OPERAND_OBJECT *VAR_7;
    ACPI_NAMESPACE_NODE *VAR_8;
    BOOLEAN VAR_9 = VAR_3;


    VAR_8 = VAR_5->MethodNode;



    if (VAR_8 == VAR_2)
    {
        return;
    }

    if (!VAR_8)
    {
        FUNC_1 (
            "No method node (Executing subtree for buffer or opregion)\n");
        return;
    }

    if (VAR_8->Type != VAR_1)
    {
        FUNC_1 ("Executing subtree for Buffer/Package/Region\n");
        return;
    }



    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
    {
        VAR_7 = VAR_5->LocalVariables[VAR_6].Object;
        if (VAR_7)
        {
            VAR_9 = VAR_4;
            break;
        }
    }



    if (VAR_9)
    {
        FUNC_1 ("\nInitialized Local Variables for Method [%4.4s]:\n",
            FUNC_2 (VAR_8));

        for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
        {
            VAR_7 = VAR_5->LocalVariables[VAR_6].Object;
            if (VAR_7)
            {
                FUNC_1 ("    Local%X: ", VAR_6);
                FUNC_0 (VAR_7, VAR_5);
            }
        }
    }
    else
    {
        FUNC_1 (
            "No Local Variables are initialized for Method [%4.4s]\n",
            FUNC_2 (VAR_8));
    }
}
