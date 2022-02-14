
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_9__ {TYPE_2__* Object; } ;
struct TYPE_7__ {int Type; int ReferenceCount; } ;
struct TYPE_8__ {TYPE_1__ Common; } ;
typedef int ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;
typedef TYPE_3__ ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *,TYPE_3__**) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_7 (
    UINT8 VAR_2,
    UINT32 VAR_3,
    ACPI_OPERAND_OBJECT *VAR_4,
    ACPI_WALK_STATE *VAR_5)
{
    ACPI_STATUS VAR_6;
    ACPI_NAMESPACE_NODE *VAR_7;


    FUNC_2 (VAR_1);


    FUNC_0 ((VAR_0,
        "NewObj %p Type %2.2X, Refs=%u [%s]\n", VAR_4,
        VAR_2, VAR_4->Common.ReferenceCount,
        FUNC_5 (VAR_4->Common.Type)));



    VAR_6 = FUNC_3 (VAR_2, VAR_3, VAR_5, &VAR_7);
    if (FUNC_1 (VAR_6))
    {
        FUNC_6 (VAR_6);
    }







    FUNC_4 (VAR_4);



    VAR_7->Object = VAR_4;
    FUNC_6 (VAR_6);
}
