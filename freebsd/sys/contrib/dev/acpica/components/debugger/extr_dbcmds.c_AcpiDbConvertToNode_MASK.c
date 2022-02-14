
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_SIZE ;
typedef char ACPI_NAMESPACE_NODE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (char*) ;
 char* VAR_1 ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int *,int) ;

ACPI_NAMESPACE_NODE *
FUNC_7 (
    char *VAR_2)
{
    ACPI_NAMESPACE_NODE *VAR_3;
    ACPI_SIZE VAR_4;


    if ((*VAR_2 >= 0x30) && (*VAR_2 <= 0x39))
    {


        VAR_4 = FUNC_6 (VAR_2, ((void*)0), 16);
        VAR_3 = FUNC_1 (VAR_4);
        if (!FUNC_4 (VAR_3, sizeof (ACPI_NAMESPACE_NODE)))
        {
            FUNC_3 ("Address %p is invalid", VAR_3);
            return (((void*)0));
        }



        if (FUNC_0 (VAR_3) != VAR_0)
        {
            FUNC_3 ("Address %p is not a valid namespace node [%s]\n",
                VAR_3, FUNC_5 (VAR_3));
            return (((void*)0));
        }
    }
    else
    {




        VAR_3 = FUNC_2 (VAR_2);
        if (!VAR_3)
        {
            FUNC_3 (
                "Could not find [%s] in namespace, defaulting to root node\n",
                VAR_2);
            VAR_3 = VAR_1;
        }
    }

    return (VAR_3);
}
