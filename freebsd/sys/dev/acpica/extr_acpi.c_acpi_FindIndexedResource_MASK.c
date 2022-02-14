
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_8__ {int Length; scalar_t__ Pointer; } ;
struct TYPE_7__ {scalar_t__ Type; scalar_t__ Length; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_RESOURCE ;
typedef TYPE_2__ ACPI_BUFFER ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

ACPI_STATUS
FUNC_1(ACPI_BUFFER *VAR_4, int VAR_5, ACPI_RESOURCE **VAR_6)
{
    ACPI_RESOURCE *VAR_7;
    int VAR_8;

    VAR_7 = (ACPI_RESOURCE *)VAR_4->Pointer;
    VAR_8 = VAR_5;
    while (VAR_8-- > 0) {

 if (VAR_7 > (ACPI_RESOURCE *)((u_int8_t *)VAR_4->Pointer + VAR_4->Length))
     return (VAR_1);


 if (VAR_7->Type == VAR_0 || VAR_7->Length == 0)
     return (VAR_2);
 VAR_7 = FUNC_0(VAR_7);
    }
    if (VAR_6 != ((void*)0))
 *VAR_6 = VAR_7;

    return (VAR_3);
}
