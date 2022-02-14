
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Index; char* StringPtr; } ;
typedef TYPE_1__ ACPI_RESOURCE_SOURCE ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3 (
    ACPI_RESOURCE_SOURCE *VAR_0)
{
    FUNC_0 ();


    if (VAR_0->Index == 0xFF)
    {
        return;
    }

    FUNC_1 ("Resource Source Index",
        VAR_0->Index);

    FUNC_2 ("Resource Source",
        VAR_0->StringPtr ?
            VAR_0->StringPtr : "[Not Specified]");
}
