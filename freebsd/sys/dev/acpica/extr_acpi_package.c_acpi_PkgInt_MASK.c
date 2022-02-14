
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT64 ;
struct TYPE_6__ {int Value; } ;
struct TYPE_5__ {TYPE_3__* Elements; } ;
struct TYPE_7__ {scalar_t__ Type; TYPE_2__ Integer; TYPE_1__ Package; } ;
typedef TYPE_3__ ACPI_OBJECT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

int
FUNC_0(ACPI_OBJECT *VAR_2, int VAR_3, UINT64 *VAR_4)
{
    ACPI_OBJECT *VAR_5;

    VAR_5 = &VAR_2->Package.Elements[VAR_3];
    if (VAR_5->Type != VAR_0)
 return (VAR_1);
    *VAR_4 = VAR_5->Integer.Value;

    return (0);
}
