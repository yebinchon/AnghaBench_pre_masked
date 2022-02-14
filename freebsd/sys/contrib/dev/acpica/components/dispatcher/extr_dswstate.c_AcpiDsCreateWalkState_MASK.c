
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * StartOp; } ;
struct TYPE_9__ {TYPE_1__ ParserState; int * Thread; int * Origin; int OwnerId; int * MethodDesc; int DescriptorType; } ;
typedef TYPE_2__ ACPI_WALK_STATE ;
typedef int ACPI_THREAD_STATE ;
typedef int ACPI_PARSE_OBJECT ;
typedef int ACPI_OWNER_ID ;
typedef int ACPI_OPERAND_OBJECT ;


 TYPE_2__* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*) ;

ACPI_WALK_STATE *
FUNC_5 (
    ACPI_OWNER_ID VAR_2,
    ACPI_PARSE_OBJECT *VAR_3,
    ACPI_OPERAND_OBJECT *VAR_4,
    ACPI_THREAD_STATE *VAR_5)
{
    ACPI_WALK_STATE *VAR_6;


    FUNC_1 (VAR_1);


    VAR_6 = FUNC_0 (sizeof (ACPI_WALK_STATE));
    if (!VAR_6)
    {
        FUNC_4 (((void*)0));
    }

    VAR_6->DescriptorType = VAR_0;
    VAR_6->MethodDesc = VAR_4;
    VAR_6->OwnerId = VAR_2;
    VAR_6->Origin = VAR_3;
    VAR_6->Thread = VAR_5;

    VAR_6->ParserState.StartOp = VAR_3;




    FUNC_2 (VAR_6);




    if (VAR_5)
    {
        FUNC_3 (VAR_6, VAR_5);
    }

    FUNC_4 (VAR_6);
}
