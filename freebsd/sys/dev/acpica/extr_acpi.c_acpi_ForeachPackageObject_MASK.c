
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Count; TYPE_2__* Elements; } ;
struct TYPE_7__ {scalar_t__ Type; TYPE_1__ Package; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OBJECT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

ACPI_STATUS
FUNC_0(ACPI_OBJECT *VAR_3,
 void (*VAR_4)(ACPI_OBJECT *VAR_5, void *VAR_6), void *VAR_7)
{
    ACPI_OBJECT *VAR_8;
    int VAR_9;

    if (VAR_3 == ((void*)0) || VAR_3->Type != VAR_0)
 return (VAR_1);


    VAR_9 = 0;
    VAR_8 = VAR_3->Package.Elements;
    for (; VAR_9 < VAR_3->Package.Count; VAR_9++, VAR_8++)
 VAR_4(VAR_8, VAR_7);

    return (VAR_2);
}
