
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ExpectedBtypes; } ;
struct TYPE_6__ {TYPE_1__ Info; } ;
typedef TYPE_2__ ACPI_PREDEFINED_INFO ;


 int VAR_0 ;
 int VAR_1 ;

const ACPI_PREDEFINED_INFO *
FUNC_0 (
    const ACPI_PREDEFINED_INFO *VAR_2)
{





    if ((VAR_2->Info.ExpectedBtypes & VAR_1) &&
        (VAR_2->Info.ExpectedBtypes != VAR_0))
    {
        VAR_2++;
    }

    VAR_2++;
    return (VAR_2);
}
