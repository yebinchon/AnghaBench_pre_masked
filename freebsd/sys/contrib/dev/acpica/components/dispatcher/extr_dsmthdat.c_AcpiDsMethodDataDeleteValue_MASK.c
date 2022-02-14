
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_4__ {int * Object; } ;
typedef int ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef int ACPI_OPERAND_OBJECT ;
typedef TYPE_1__ ACPI_NAMESPACE_NODE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int *,TYPE_1__**) ;
 int * FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_6 (
    UINT8 VAR_3,
    UINT32 VAR_4,
    ACPI_WALK_STATE *VAR_5)
{
    ACPI_STATUS VAR_6;
    ACPI_NAMESPACE_NODE *VAR_7;
    ACPI_OPERAND_OBJECT *VAR_8;


    FUNC_1 (VAR_1);




    VAR_6 = FUNC_3 (VAR_3, VAR_4, VAR_5, &VAR_7);
    if (FUNC_0 (VAR_6))
    {
        VAR_2;
    }



    VAR_8 = FUNC_4 (VAR_7);






    VAR_7->Object = ((void*)0);

    if ((VAR_8) &&
        (FUNC_2 (VAR_8) == VAR_0))
    {





        FUNC_5 (VAR_8);
    }

    VAR_2;
}
