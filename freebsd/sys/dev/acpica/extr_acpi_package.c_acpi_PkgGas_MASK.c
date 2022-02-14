
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct resource {int dummy; } ;
typedef int gas ;
typedef int device_t ;
struct TYPE_5__ {int Length; scalar_t__ Pointer; } ;
struct TYPE_6__ {TYPE_3__* Elements; } ;
struct TYPE_7__ {scalar_t__ Type; TYPE_1__ Buffer; TYPE_2__ Package; } ;
typedef TYPE_3__ ACPI_OBJECT ;
typedef int ACPI_GENERIC_ADDRESS ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int*,int *,struct resource**,int ) ;
 int FUNC_1 (int *,scalar_t__,int) ;

int
FUNC_2(device_t VAR_2, ACPI_OBJECT *VAR_3, int VAR_4, int *VAR_5, int *VAR_6,
    struct resource **VAR_7, u_int VAR_8)
{
    ACPI_GENERIC_ADDRESS VAR_9;
    ACPI_OBJECT *VAR_10;

    VAR_10 = &VAR_3->Package.Elements[VAR_4];
    if (VAR_10 == ((void*)0) || VAR_10->Type != VAR_0 ||
 VAR_10->Buffer.Length < sizeof(ACPI_GENERIC_ADDRESS) + 3)
 return (VAR_1);

    FUNC_1(&VAR_9, VAR_10->Buffer.Pointer + 3, sizeof(VAR_9));

    return (FUNC_0(VAR_2, VAR_5, VAR_6, &VAR_9, VAR_7, VAR_8));
}
