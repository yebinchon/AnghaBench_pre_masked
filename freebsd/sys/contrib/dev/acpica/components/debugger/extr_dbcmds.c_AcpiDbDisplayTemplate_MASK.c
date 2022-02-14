
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_8__ {int Length; scalar_t__ Pointer; } ;
struct TYPE_11__ {TYPE_1__ Buffer; } ;
struct TYPE_10__ {int Pointer; int Length; } ;
struct TYPE_9__ {scalar_t__ Type; TYPE_4__* Object; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_NAMESPACE_NODE ;
typedef TYPE_3__ ACPI_BUFFER ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 TYPE_2__* VAR_9 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int VAR_10 ;

void
FUNC_9 (
    char *VAR_11)
{
    ACPI_NAMESPACE_NODE *VAR_12;
    ACPI_STATUS VAR_13;
    ACPI_BUFFER VAR_14;




    VAR_12 = FUNC_2 (VAR_11);
    if (!VAR_12 || (VAR_12 == VAR_9))
    {
        FUNC_5 ("Invalid argument: %s\n", VAR_11);
        return;
    }



    if (VAR_12->Type != VAR_5)
    {
        FUNC_5 ("Not a Buffer object, cannot be a template: %s\n",
            VAR_11);
        return;
    }

    VAR_14.Length = VAR_2;
    VAR_14.Pointer = VAR_8;



    VAR_13 = FUNC_6 (VAR_12->Object, &VAR_14);

    FUNC_3 (VAR_1);
    VAR_7 |= VAR_3;

    if (FUNC_1 (VAR_13))
    {
        FUNC_5 (
            "Could not convert Buffer to a resource list: %s, %s\n",
            VAR_11, FUNC_4 (VAR_13));
        goto DumpBuffer;
    }



    FUNC_7 (FUNC_0 (VAR_4,
        VAR_14.Pointer));

DumpBuffer:
    FUNC_5 ("\nRaw data buffer:\n");
    FUNC_8 ((UINT8 *) VAR_12->Object->Buffer.Pointer,
        VAR_12->Object->Buffer.Length,
        VAR_10, VAR_6);

    FUNC_3 (VAR_0);
    return;
}
