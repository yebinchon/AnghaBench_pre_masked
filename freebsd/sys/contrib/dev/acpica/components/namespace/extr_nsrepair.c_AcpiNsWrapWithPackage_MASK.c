
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int ReturnFlags; int FullPathname; } ;
struct TYPE_9__ {TYPE_2__** Elements; } ;
struct TYPE_10__ {TYPE_1__ Package; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;
typedef TYPE_3__ ACPI_EVALUATE_INFO ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_5 ;

ACPI_STATUS
FUNC_4 (
    ACPI_EVALUATE_INFO *VAR_6,
    ACPI_OPERAND_OBJECT *VAR_7,
    ACPI_OPERAND_OBJECT **VAR_8)
{
    ACPI_OPERAND_OBJECT *VAR_9;


    FUNC_1 (VAR_5);






    VAR_9 = FUNC_2 (1);
    if (!VAR_9)
    {
        return (VAR_3);
    }

    VAR_9->Package.Elements[0] = VAR_7;

    FUNC_0 ((VAR_0,
        "%s: Wrapped %s with expected Package object\n",
        VAR_6->FullPathname, FUNC_3 (VAR_7)));



    *VAR_8 = VAR_9;
    VAR_6->ReturnFlags |= VAR_1 | VAR_2;
    return (VAR_4);
}
