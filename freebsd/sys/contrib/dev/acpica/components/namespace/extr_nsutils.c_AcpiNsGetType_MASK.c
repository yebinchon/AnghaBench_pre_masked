
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Type; } ;
typedef int ACPI_OBJECT_TYPE ;
typedef TYPE_1__ ACPI_NAMESPACE_NODE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

ACPI_OBJECT_TYPE
FUNC_3 (
    ACPI_NAMESPACE_NODE *VAR_3)
{
    FUNC_0 (VAR_2);


    if (!VAR_3)
    {
        FUNC_1 ((VAR_1, "Null Node parameter"));
        FUNC_2 (VAR_0);
    }

    FUNC_2 (VAR_3->Type);
}
