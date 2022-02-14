
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_17__ {scalar_t__ ReturnBtype; int NodeFlags; int FullPathname; } ;
struct TYPE_14__ {int Ascii; } ;
struct TYPE_15__ {int Type; TYPE_1__ Name; } ;
struct TYPE_16__ {TYPE_2__ Node; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;
typedef TYPE_4__ ACPI_EVALUATE_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*,scalar_t__,scalar_t__,TYPE_3__**) ;
 int FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ) ;

ACPI_STATUS
FUNC_9 (
    ACPI_EVALUATE_INFO *VAR_7,
    ACPI_OPERAND_OBJECT **VAR_8,
    UINT32 VAR_9,
    UINT32 VAR_10)
{
    ACPI_OPERAND_OBJECT *VAR_11 = *VAR_8;
    ACPI_STATUS VAR_12 = VAR_6;
    char VAR_13[96];




    if (VAR_11 &&
        FUNC_0 (VAR_11) == VAR_0)
    {
        FUNC_2 ((VAR_5, VAR_7->FullPathname, VAR_7->NodeFlags,
            "Invalid return type - Found a Namespace node [%4.4s] type %s",
            VAR_11->Node.Name.Ascii,
            FUNC_8 (VAR_11->Node.Type)));
        return (VAR_4);
    }
    VAR_7->ReturnBtype = FUNC_4 (VAR_11);
    if (VAR_7->ReturnBtype == VAR_2)
    {

        goto TypeErrorExit;
    }



    if ((VAR_7->ReturnBtype & VAR_9) == VAR_3)
    {
        VAR_12 = FUNC_3 (VAR_7, VAR_11);
        return (VAR_12);
    }



    VAR_12 = FUNC_5 (VAR_7, VAR_9,
        VAR_10, VAR_8);
    if (FUNC_1 (VAR_12))
    {
        return (VAR_6);
    }


TypeErrorExit:



    FUNC_6 (VAR_13, VAR_9);

    if (!VAR_11)
    {
        FUNC_2 ((VAR_5, VAR_7->FullPathname, VAR_7->NodeFlags,
            "Expected return object of type %s",
            VAR_13));
    }
    else if (VAR_10 == VAR_1)
    {
        FUNC_2 ((VAR_5, VAR_7->FullPathname, VAR_7->NodeFlags,
            "Return type mismatch - found %s, expected %s",
            FUNC_7 (VAR_11), VAR_13));
    }
    else
    {
        FUNC_2 ((VAR_5, VAR_7->FullPathname, VAR_7->NodeFlags,
            "Return Package type mismatch at index %u - "
            "found %s, expected %s", VAR_10,
            FUNC_7 (VAR_11), VAR_13));
    }

    return (VAR_4);
}
