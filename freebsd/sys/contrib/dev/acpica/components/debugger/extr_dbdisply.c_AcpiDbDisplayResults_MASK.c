
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_6__ {TYPE_3__* Next; int ** ObjDesc; } ;
struct TYPE_8__ {TYPE_1__ Results; } ;
struct TYPE_7__ {int ResultCount; TYPE_3__* Results; int * MethodNode; } ;
typedef TYPE_2__ ACPI_WALK_STATE ;
typedef int ACPI_OPERAND_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;
typedef TYPE_3__ ACPI_GENERIC_STATE ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *) ;

void
FUNC_4 (
    void)
{
    UINT32 VAR_2;
    ACPI_WALK_STATE *VAR_3;
    ACPI_OPERAND_OBJECT *VAR_4;
    UINT32 VAR_5 = 0;
    ACPI_NAMESPACE_NODE *VAR_6;
    ACPI_GENERIC_STATE *VAR_7;
    UINT32 VAR_8;


    VAR_3 = FUNC_1 (VAR_1);
    if (!VAR_3)
    {
        FUNC_2 ("There is no method currently executing\n");
        return;
    }

    VAR_6 = VAR_3->MethodNode;

    if (VAR_3->Results)
    {
        VAR_5 = VAR_3->ResultCount;
    }

    FUNC_2 ("Method [%4.4s] has %X stacked result objects\n",
        FUNC_3 (VAR_6), VAR_5);



    VAR_7 = VAR_3->Results;
    VAR_8 = (VAR_5 - 1) % VAR_0;

    for (VAR_2 = 0; VAR_2 < VAR_5; VAR_2++)
    {
        VAR_4 = VAR_7->Results.ObjDesc[VAR_8];
        FUNC_2 ("Result%u: ", VAR_2);
        FUNC_0 (VAR_4, VAR_3);

        if (VAR_8 == 0)
        {
            VAR_7 = VAR_7->Results.Next;
            VAR_8 = VAR_0;
        }

        VAR_8--;
    }
}
