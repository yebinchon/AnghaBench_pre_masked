
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ Pointer; int Length; } ;
struct TYPE_14__ {int Type; } ;
struct TYPE_11__ {int Handle; int ActualType; } ;
struct TYPE_13__ {int Type; TYPE_1__ Reference; } ;
struct TYPE_12__ {int Count; TYPE_3__* Pointer; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_OBJECT_TYPE ;
typedef TYPE_2__ ACPI_OBJECT_LIST ;
typedef TYPE_3__ ACPI_OBJECT ;
typedef TYPE_4__ ACPI_NAMESPACE_NODE ;
typedef TYPE_5__ ACPI_BUFFER ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;


 int VAR_2 ;


 int VAR_3 ;
 int FUNC_2 (int ,int *,TYPE_2__*,TYPE_5__*) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static ACPI_STATUS
FUNC_7 (
    ACPI_NAMESPACE_NODE *VAR_8,
    ACPI_OBJECT_TYPE VAR_9,
    ACPI_OBJECT **VAR_10)
{
    ACPI_OBJECT *VAR_11;
    ACPI_OBJECT_LIST VAR_12;
    ACPI_OBJECT VAR_13[2];
    ACPI_BUFFER VAR_14;
    ACPI_STATUS VAR_15;


    VAR_13[0].Type = VAR_2;
    VAR_13[0].Reference.ActualType = VAR_8->Type;
    VAR_13[0].Reference.Handle = FUNC_0 (VAR_1, VAR_8);

    VAR_12.Count = 1;
    VAR_12.Pointer = VAR_13;

    VAR_14.Length = VAR_0;

    VAR_4 = VAR_7;
    VAR_15 = FUNC_2 (VAR_6, ((void*)0),
        &VAR_12, &VAR_14);

    VAR_4 = VAR_5;
    if (FUNC_1 (VAR_15))
    {
        FUNC_5 ("Could not read from object, %s",
            FUNC_3 (VAR_15));
        return (VAR_15);
    }

    VAR_11 = (ACPI_OBJECT *) VAR_14.Pointer;

    switch (VAR_11->Type)
    {
    case 130:
    case 131:
    case 128:
    case 129:





        if (VAR_11->Type != VAR_9)
        {
            FUNC_5 (" Type mismatch:  Expected %s, Received %s",
                FUNC_6 (VAR_9),
                FUNC_6 (VAR_11->Type));

            FUNC_4 (VAR_14.Pointer);
            return (VAR_3);
        }

        *VAR_10 = VAR_11;
        break;

    default:

        FUNC_5 (" Unsupported return object type, %s",
            FUNC_6 (VAR_11->Type));

        FUNC_4 (VAR_14.Pointer);
        return (VAR_3);
    }

    return (VAR_15);
}
