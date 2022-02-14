
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int * Child; } ;
struct TYPE_13__ {TYPE_4__* Parent; int AmlOpcode; } ;
struct TYPE_16__ {TYPE_2__ Asl; TYPE_1__ Common; } ;
struct TYPE_15__ {int ** CallerReturnDesc; } ;
typedef TYPE_3__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;
typedef int ACPI_OPERAND_OBJECT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int **,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,int *) ;
 int FUNC_6 (TYPE_4__*,int ,int ,int ,TYPE_3__*) ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static ACPI_STATUS
FUNC_8 (
    ACPI_PARSE_OBJECT *VAR_8,
    ACPI_WALK_STATE *VAR_9)
{
    ACPI_PARSE_OBJECT *VAR_10;
    ACPI_PARSE_OBJECT *VAR_11;
    ACPI_OPERAND_OBJECT *VAR_12;
    ACPI_STATUS VAR_13;


    FUNC_3 (VAR_3,
        "Simple subtree constant reduction, operator to constant\n");



    VAR_10 = FUNC_4 (VAR_7);
    if (!VAR_10)
    {
        return (VAR_0);
    }

    VAR_10->Common.AmlOpcode = VAR_2;

    VAR_11 = VAR_8->Common.Parent;
    VAR_8->Common.Parent = VAR_10;



    VAR_9->CallerReturnDesc = &VAR_12;

    VAR_13 = FUNC_6 (VAR_8, VAR_4,
        VAR_5, VAR_6, VAR_9);



    VAR_8->Common.Parent = VAR_11;

    if (FUNC_0 (VAR_13))
    {
        FUNC_3 (VAR_3,
            "Constant Subtree evaluation(1), %s\n",
            FUNC_2 (VAR_13));
        return (VAR_13);
    }



    VAR_13 = FUNC_1 (&VAR_12, VAR_9);
    if (FUNC_0 (VAR_13))
    {
        FUNC_3 (VAR_3,
            "Constant Subtree evaluation(2), %s\n",
            FUNC_2 (VAR_13));
        return (VAR_13);
    }



    VAR_8->Asl.Child = ((void*)0);
    FUNC_5 (VAR_8, VAR_12);

    FUNC_7 (VAR_8);
    return (VAR_1);
}
