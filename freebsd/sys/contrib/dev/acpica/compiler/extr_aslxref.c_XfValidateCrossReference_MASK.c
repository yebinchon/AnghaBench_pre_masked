
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int Flags; } ;
struct TYPE_8__ {int * Node; } ;
struct TYPE_9__ {TYPE_1__ Asl; } ;
typedef int BOOLEAN ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;
typedef TYPE_3__ ACPI_OPCODE_INFO ;
typedef int ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static BOOLEAN
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_6,
    const ACPI_OPCODE_INFO *VAR_7,
    ACPI_NAMESPACE_NODE *VAR_8)
{
    ACPI_PARSE_OBJECT *VAR_9;
    ACPI_NAMESPACE_NODE *VAR_10;




    if (VAR_7->Flags & (VAR_3 | VAR_0 | VAR_1 | VAR_2))
    {
        return (VAR_5);
    }





    VAR_9 = FUNC_1 (VAR_6);
    VAR_10 = FUNC_0 (VAR_8);

    if (!VAR_9 && !VAR_10)
    {




        return (VAR_5);
    }

    if (!VAR_9 && VAR_10)
    {




        return (VAR_4);
    }
    else if (VAR_9 && !VAR_10)
    {




        return (VAR_5);
    }
    else if (VAR_9->Asl.Node == VAR_10)
    {




        return (VAR_5);
    }
    else
    {




        return (VAR_4);
    }
}
