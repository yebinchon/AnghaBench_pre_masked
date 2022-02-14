
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ FileEnd; scalar_t__ FileStart; struct TYPE_3__* Parent; } ;
typedef TYPE_1__ ACPI_FILE_NODE ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (char*,int ) ;

__attribute__((used)) static void
FUNC_1 (
    char *VAR_1,
    char *VAR_2)
{
    ACPI_FILE_NODE *VAR_3;
    ACPI_FILE_NODE *VAR_4;


    VAR_3 = FUNC_0 (VAR_1, VAR_0);
    VAR_4 = FUNC_0 (VAR_2, VAR_0);

    if (VAR_3 && VAR_4)
    {
        VAR_3->Parent = VAR_4;

        while (VAR_3->Parent)
        {
            if (VAR_3->Parent->FileEnd < VAR_3->FileStart)
            {
                VAR_3->Parent->FileEnd = VAR_3->FileStart;
            }

            VAR_3 = VAR_3->Parent;
        }
    }
}
