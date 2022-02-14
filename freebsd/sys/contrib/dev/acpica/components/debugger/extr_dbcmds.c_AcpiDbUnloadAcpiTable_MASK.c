
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_STATUS ;
typedef char ACPI_NAMESPACE_NODE ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (int ) ;

void
FUNC_6 (
    char *VAR_1)
{
    ACPI_NAMESPACE_NODE *VAR_2;
    ACPI_STATUS VAR_3;




    VAR_2 = FUNC_2 (VAR_1);
    if (!VAR_2)
    {
        return;
    }

    VAR_3 = FUNC_5 (FUNC_0 (VAR_0, VAR_2));
    if (FUNC_1 (VAR_3))
    {
        FUNC_4 ("Parent of [%s] (%p) unloaded and uninstalled\n",
            VAR_1, VAR_2);
    }
    else
    {
        FUNC_4 ("%s, while unloading parent table of [%s]\n",
            FUNC_3 (VAR_3), VAR_1);
    }
}
