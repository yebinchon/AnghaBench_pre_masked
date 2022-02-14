
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Description; scalar_t__ Invocation; } ;
typedef TYPE_1__ ACPI_DB_COMMAND_HELP ;


 int FUNC_0 (char*,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2 (
    char *VAR_2)
{
    const ACPI_DB_COMMAND_HELP *VAR_3 = VAR_0;


    if (!VAR_2)
    {


        FUNC_1 ("\nSummary of AML Debugger Commands\n\n");

        while (VAR_3->Invocation)
        {
            FUNC_1 ("%-38s%s", VAR_3->Invocation, VAR_3->Description);
            VAR_3++;
        }
        FUNC_1 ("\n");

    }
    else
    {


        FUNC_0 (VAR_2, VAR_1);
    }
}
