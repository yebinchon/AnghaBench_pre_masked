
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ Invocation; } ;
typedef scalar_t__ BOOLEAN ;
typedef TYPE_1__ ACPI_DB_COMMAND_HELP ;


 scalar_t__ FUNC_0 (char const*,TYPE_1__ const*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_1 (
    const char *VAR_1,
    BOOLEAN VAR_2)
{
    const ACPI_DB_COMMAND_HELP *VAR_3;
    BOOLEAN VAR_4;


    VAR_3 = VAR_0;
    while (VAR_3->Invocation)
    {
        VAR_4 = FUNC_0 (VAR_1, VAR_3);
        if (!VAR_2 && VAR_4)
        {
            return;
        }

        VAR_3++;
    }
}
