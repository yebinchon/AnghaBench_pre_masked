
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char UINT8 ;
typedef size_t UINT32 ;
struct TYPE_8__ {struct TYPE_8__* Parent; } ;
struct TYPE_6__ {TYPE_3__* Node; TYPE_2__* Parent; } ;
struct TYPE_7__ {TYPE_1__ Common; } ;
typedef scalar_t__ ACPI_SIZE ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;
typedef TYPE_3__ ACPI_NAMESPACE_NODE ;


 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 char VAR_1 ;
 char* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static char *
FUNC_6 (
    ACPI_PARSE_OBJECT *VAR_2,
    char *VAR_3)
{
    ACPI_NAMESPACE_NODE *VAR_4;
    char *VAR_5;
    char *VAR_6;
    ACPI_SIZE VAR_7;
    UINT32 VAR_8 = 0;


    if (!VAR_2)
    {
        return (((void*)0));
    }



    VAR_2 = VAR_2->Common.Parent;
    while (VAR_2)
    {
        if (VAR_2->Common.Node)
        {
            break;
        }

        VAR_2 = VAR_2->Common.Parent;
    }

    if (!VAR_2)
    {
        return (((void*)0));
    }






    VAR_4 = VAR_2->Common.Node;
    while (VAR_4 && (*VAR_3 == (UINT8) VAR_0))
    {
        VAR_4 = VAR_4->Parent;
        VAR_3++;
    }

    if (!VAR_4)
    {
        return (((void*)0));
    }



    VAR_6 = FUNC_2 (VAR_4);
    if (!VAR_6)
    {
        return (((void*)0));
    }

    VAR_7 = (FUNC_5 (VAR_6) + FUNC_5 (VAR_3) + 1);
    if (VAR_6[1])
    {




        VAR_7++;



        if (*VAR_6 == VAR_1)
        {
            VAR_8 = 1;
        }
    }

    VAR_5 = FUNC_0 (VAR_7);
    if (!VAR_5)
    {
        goto Cleanup;
    }







    FUNC_4 (VAR_5, &VAR_6[VAR_8]);





    if (VAR_6[1])
    {
        FUNC_3 (VAR_5, ".");
    }



    FUNC_3 (VAR_5, VAR_3);

Cleanup:
    FUNC_1 (VAR_6);
    return (VAR_5);
}
