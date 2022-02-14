
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_3__ {char* Tag; scalar_t__ BitIndex; } ;
typedef TYPE_1__ ACPI_RESOURCE_TAG ;



__attribute__((used)) static char *
FUNC_0 (
    UINT32 VAR_0,
    const ACPI_RESOURCE_TAG *VAR_1)
{





    for ( ; VAR_1->Tag; VAR_1++)
    {
        if (VAR_0 == VAR_1->BitIndex)
        {
            return (VAR_1->Tag);
        }
    }



    return (((void*)0));
}
