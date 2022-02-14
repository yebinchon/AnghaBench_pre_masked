
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_9__ {scalar_t__ Pointer; } ;
struct TYPE_7__ {int Length; int* Pointer; } ;
struct TYPE_6__ {int Value; } ;
struct TYPE_8__ {scalar_t__ Type; TYPE_2__ Buffer; TYPE_1__ Integer; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_OBJECT ;
typedef TYPE_4__ ACPI_BUFFER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

ACPI_STATUS
FUNC_0(ACPI_BUFFER *VAR_5, UINT32 *VAR_6)
{
    ACPI_OBJECT *VAR_7;
    UINT8 *VAR_8;
    int VAR_9;

    VAR_7 = (ACPI_OBJECT *)VAR_5->Pointer;
    if (VAR_7->Type == VAR_1) {
 *VAR_6 = VAR_7->Integer.Value;
 return (VAR_3);
    }
    if (VAR_7->Type != VAR_0)
 return (VAR_4);
    if (VAR_7->Buffer.Length > sizeof(int))
 return (VAR_2);

    *VAR_6 = 0;
    VAR_8 = VAR_7->Buffer.Pointer;
    for (VAR_9 = 0; VAR_9 < VAR_7->Buffer.Length; VAR_9++)
 *VAR_6 += VAR_8[VAR_9] << (VAR_9 * 8);
    return (VAR_3);
}
