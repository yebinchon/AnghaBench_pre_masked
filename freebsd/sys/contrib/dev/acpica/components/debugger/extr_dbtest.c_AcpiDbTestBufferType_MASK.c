
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_6__ {int Length; int* Pointer; } ;
struct TYPE_7__ {TYPE_1__ Buffer; int Type; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;


 int* FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,int ,TYPE_2__**) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (char*,...) ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (int*,int*,int) ;
 int FUNC_10 (int*,int ,int) ;

__attribute__((used)) static ACPI_STATUS
FUNC_11 (
    ACPI_NAMESPACE_NODE *VAR_5,
    UINT32 VAR_6)
{
    ACPI_OBJECT *VAR_7 = ((void*)0);
    ACPI_OBJECT *VAR_8 = ((void*)0);
    ACPI_OBJECT *VAR_9 = ((void*)0);
    UINT8 *VAR_10;
    ACPI_OBJECT VAR_11;
    ACPI_STATUS VAR_12;
    UINT32 VAR_13;
    UINT32 VAR_14;
    UINT8 VAR_15;


    VAR_13 = FUNC_4 (VAR_6);
    if (VAR_13 == 0)
    {
        FUNC_8 (" Ignoring zero length buffer");
        return (VAR_3);
    }



    VAR_10 = FUNC_0 (VAR_13);
    if (!VAR_10)
    {
        return (VAR_2);
    }



    VAR_12 = FUNC_5 (VAR_5, VAR_1, &VAR_7);
    if (FUNC_1 (VAR_12))
    {
        goto Exit;
    }



    FUNC_8 (VAR_0, VAR_6, VAR_7->Buffer.Length);
    for (VAR_14 = 0; ((VAR_14 < 8) && (VAR_14 < VAR_13)); VAR_14++)
    {
        FUNC_8 (" %2.2X", VAR_7->Buffer.Pointer[VAR_14]);
    }
    FUNC_8 ("...  ");
    FUNC_10 (VAR_10, VAR_4, VAR_13);
    VAR_15 = VAR_6 % 8;
    if (VAR_15)
    {
        VAR_10 [VAR_13 - 1] = FUNC_3 (VAR_15);
    }

    VAR_11.Type = VAR_1;
    VAR_11.Buffer.Length = VAR_13;
    VAR_11.Buffer.Pointer = VAR_10;

    VAR_12 = FUNC_6 (VAR_5, &VAR_11);
    if (FUNC_1 (VAR_12))
    {
        goto Exit;
    }



    VAR_12 = FUNC_5 (VAR_5, VAR_1, &VAR_8);
    if (FUNC_1 (VAR_12))
    {
        goto Exit;
    }

    if (FUNC_9 (VAR_8->Buffer.Pointer, VAR_10, VAR_13))
    {
        FUNC_8 (" MISMATCH 2: New buffer value");
    }



    VAR_11.Buffer.Length = VAR_13;
    VAR_11.Buffer.Pointer = VAR_7->Buffer.Pointer;

    VAR_12 = FUNC_6 (VAR_5, &VAR_11);
    if (FUNC_1 (VAR_12))
    {
        goto Exit;
    }



    VAR_12 = FUNC_5 (VAR_5, VAR_1, &VAR_9);
    if (FUNC_1 (VAR_12))
    {
        goto Exit;
    }

    if (FUNC_9 (VAR_7->Buffer.Pointer,
            VAR_9->Buffer.Pointer, VAR_13))
    {
        FUNC_8 (" MISMATCH 3: While restoring original buffer");
    }

Exit:
    FUNC_2 (VAR_10);
    if (VAR_7) {FUNC_7 (VAR_7);}
    if (VAR_8) {FUNC_7 (VAR_8);}
    if (VAR_9) {FUNC_7 (VAR_9);}
    return (VAR_12);
}
