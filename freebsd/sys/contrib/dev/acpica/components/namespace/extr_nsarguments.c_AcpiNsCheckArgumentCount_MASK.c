
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_12__ {int Flags; scalar_t__ Type; TYPE_2__* Object; } ;
struct TYPE_10__ {int ArgumentList; } ;
struct TYPE_11__ {TYPE_3__ Info; } ;
struct TYPE_8__ {scalar_t__ ParamCount; } ;
struct TYPE_9__ {TYPE_1__ Method; } ;
typedef TYPE_4__ ACPI_PREDEFINED_INFO ;
typedef TYPE_5__ ACPI_NAMESPACE_NODE ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;

void
FUNC_4 (
    char *VAR_5,
    ACPI_NAMESPACE_NODE *VAR_6,
    UINT32 VAR_7,
    const ACPI_PREDEFINED_INFO *VAR_8)
{
    UINT32 VAR_9;
    UINT32 VAR_10;


    if (VAR_6->Flags & VAR_3)
    {
        return;
    }

    if (!VAR_8)
    {




        if (VAR_6->Type != VAR_0)
        {
            if (VAR_7)
            {
                FUNC_0 ((VAR_2, VAR_5, VAR_1,
                    "%u arguments were passed to a non-method ACPI object (%s)",
                    VAR_7, FUNC_2 (VAR_6->Type)));
            }

            return;
        }
        VAR_9 = VAR_6->Object->Method.ParamCount;

        if (VAR_7 < VAR_9)
        {
            FUNC_1 ((VAR_2, VAR_5, VAR_1,
                "Insufficient arguments - "
                "Caller passed %u, method requires %u",
                VAR_7, VAR_9));
        }
        else if (VAR_7 > VAR_9)
        {
            FUNC_0 ((VAR_2, VAR_5, VAR_1,
                "Excess arguments - "
                "Caller passed %u, method requires %u",
                VAR_7, VAR_9));
        }

        return;
    }
    VAR_10 =
        FUNC_3 (VAR_8->Info.ArgumentList);

    if (VAR_7 < VAR_10)
    {
        FUNC_1 ((VAR_2, VAR_5, VAR_1,
            "Insufficient arguments - "
            "Caller passed %u, ACPI requires %u",
            VAR_7, VAR_10));
    }
    else if ((VAR_7 > VAR_10) &&
        !(VAR_8->Info.ArgumentList & VAR_4))
    {
        FUNC_0 ((VAR_2, VAR_5, VAR_1,
            "Excess arguments - "
            "Caller passed %u, ACPI requires %u",
            VAR_7, VAR_10));
    }
}
