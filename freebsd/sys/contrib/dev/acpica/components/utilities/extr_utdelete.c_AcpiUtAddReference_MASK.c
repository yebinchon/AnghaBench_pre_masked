
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ReferenceCount; } ;
struct TYPE_7__ {TYPE_1__ Common; } ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_4 (
    ACPI_OPERAND_OBJECT *VAR_3)
{

    FUNC_1 (VAR_2);




    if (!FUNC_3 (VAR_3))
    {
        return;
    }

    FUNC_0 ((VAR_0,
        "Obj %p Current Refs=%X [To Be Incremented]\n",
        VAR_3, VAR_3->Common.ReferenceCount));



    (void) FUNC_2 (VAR_3, VAR_1);
    return;
}
