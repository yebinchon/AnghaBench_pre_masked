
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ReferenceCount; } ;
struct TYPE_8__ {TYPE_1__ Common; } ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_5 (
    ACPI_OPERAND_OBJECT *VAR_5)
{

    FUNC_1 (VAR_4);






    if (!VAR_5 ||
        (FUNC_2 (VAR_5) == VAR_1))

    {
        return;
    }



    if (!FUNC_4 (VAR_5))
    {
        return;
    }

    FUNC_0 ((VAR_0,
        "%s: Obj %p Current Refs=%X [To Be Decremented]\n",
        VAR_2, VAR_5, VAR_5->Common.ReferenceCount));






    (void) FUNC_3 (VAR_5, VAR_3);
    return;
}
