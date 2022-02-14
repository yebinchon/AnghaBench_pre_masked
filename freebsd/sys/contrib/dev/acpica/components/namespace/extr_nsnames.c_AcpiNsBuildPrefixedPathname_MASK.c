
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_4__ {scalar_t__ Node; } ;
struct TYPE_5__ {TYPE_1__ Scope; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_GENERIC_STATE ;


 char* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int ,char const*,int *,char**) ;
 char* FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*) ;

char *
FUNC_8 (
    ACPI_GENERIC_STATE *VAR_2,
    const char *VAR_3)
{
    ACPI_STATUS VAR_4;
    char *VAR_5 = ((void*)0);
    char *VAR_6 = ((void*)0);
    char *VAR_7 = ((void*)0);
    UINT32 VAR_8 = 0;




    if (VAR_2 && VAR_2->Scope.Node)
    {
        VAR_7 = FUNC_4 (VAR_2->Scope.Node, VAR_1);
        if (VAR_7)
        {
            VAR_8 = FUNC_7 (VAR_7);
        }
    }

    VAR_4 = FUNC_3 (VAR_0, VAR_3,
        ((void*)0), &VAR_6);
    if (FUNC_1 (VAR_4))
    {
        goto Cleanup;
    }



    VAR_5 = FUNC_0 (
        VAR_8 + FUNC_7 (VAR_6) + 2);
    if (!VAR_5)
    {
        goto Cleanup;
    }



    if (VAR_7 &&
        (*VAR_6 != '\\') &&
        (*VAR_6 != '^'))
    {
        FUNC_6 (VAR_5, VAR_7);
        if (VAR_7[1])
        {
            FUNC_6 (VAR_5, ".");
        }
    }

    FUNC_5 (VAR_6);
    FUNC_6 (VAR_5, VAR_6);

Cleanup:
    if (VAR_7)
    {
        FUNC_2 (VAR_7);
    }
    if (VAR_6)
    {
        FUNC_2 (VAR_6);
    }

    return (VAR_5);
}
