
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_3__ {char* Invocation; int Description; scalar_t__ LineCount; } ;
typedef int BOOLEAN ;
typedef TYPE_1__ ACPI_DB_COMMAND_HELP ;


 int FUNC_0 (char*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static BOOLEAN
FUNC_2 (
    const char *VAR_2,
    const ACPI_DB_COMMAND_HELP *VAR_3)
{
    char *VAR_4 = VAR_3->Invocation;
    UINT32 VAR_5;




    if (*VAR_4 != ' ')
    {
        return (VAR_0);
    }

    while (*VAR_4 == ' ')
    {
        VAR_4++;
    }



    while ((*VAR_2) && (*VAR_4) && (*VAR_4 != ' '))
    {
        if (FUNC_1 ((int) *VAR_2) != FUNC_1 ((int) *VAR_4))
        {
            return (VAR_0);
        }

        VAR_4++;
        VAR_2++;
    }



    VAR_5 = VAR_3->LineCount;
    while (VAR_5)
    {
        FUNC_0 ("%-38s : %s", VAR_3->Invocation, VAR_3->Description);
        VAR_3++;
        VAR_5--;
    }

    return (VAR_1);
}
