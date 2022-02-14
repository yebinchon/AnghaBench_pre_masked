
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int gas ;
struct TYPE_10__ {scalar_t__ SpaceId; int BitWidth; int BitOffset; int AccessWidth; int Address; } ;
struct TYPE_8__ {int Length; scalar_t__ Pointer; } ;
struct TYPE_7__ {TYPE_3__* Elements; } ;
struct TYPE_9__ {scalar_t__ Type; TYPE_2__ Buffer; TYPE_1__ Package; } ;
typedef TYPE_3__ ACPI_OBJECT ;
typedef TYPE_4__ ACPI_GENERIC_ADDRESS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,scalar_t__,int) ;

int
FUNC_1(ACPI_OBJECT *VAR_4, int VAR_5, int *VAR_6, int *VAR_7,
    uint64_t *VAR_8, int *VAR_9)
{
    ACPI_GENERIC_ADDRESS VAR_10;
    ACPI_OBJECT *VAR_11;

    VAR_11 = &VAR_4->Package.Elements[VAR_5];
    if (VAR_11 == ((void*)0) || VAR_11->Type != VAR_1 ||
 VAR_11->Buffer.Length < sizeof(ACPI_GENERIC_ADDRESS) + 3)
 return (VAR_2);

    FUNC_0(&VAR_10, VAR_11->Buffer.Pointer + 3, sizeof(VAR_10));
    if (VAR_10.SpaceId != VAR_0)
 return (VAR_3);
    *VAR_6 = VAR_10.BitWidth;
    *VAR_7 = VAR_10.BitOffset;
    *VAR_8 = VAR_10.Address;
    *VAR_9 = VAR_10.AccessWidth;
    return (0);
}
