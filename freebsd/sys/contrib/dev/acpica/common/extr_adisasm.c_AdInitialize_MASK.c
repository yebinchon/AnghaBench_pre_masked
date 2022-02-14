
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int MaxTableCount; int Tables; scalar_t__ CurrentTableCount; } ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_2 ;
 int FUNC_6 (int ,char*,char*) ;
 int VAR_3 ;

ACPI_STATUS
FUNC_7 (
    void)
{
    ACPI_STATUS VAR_4;




    VAR_4 = FUNC_3 ();
    if (FUNC_0 (VAR_4))
    {
        FUNC_6 (VAR_3, "Could not initialize ACPICA subsystem: %s\n",
            FUNC_1 (VAR_4));

        return (VAR_4);
    }

    VAR_4 = FUNC_4 ();
    if (FUNC_0 (VAR_4))
    {
        FUNC_6 (VAR_3, "Could not initialize ACPICA globals: %s\n",
            FUNC_1 (VAR_4));

        return (VAR_4);
    }

    VAR_4 = FUNC_5 ();
    if (FUNC_0 (VAR_4))
    {
        FUNC_6 (VAR_3, "Could not initialize ACPICA mutex objects: %s\n",
            FUNC_1 (VAR_4));

        return (VAR_4);
    }

    VAR_4 = FUNC_2 ();
    if (FUNC_0 (VAR_4))
    {
        FUNC_6 (VAR_3, "Could not initialize ACPICA namespace: %s\n",
            FUNC_1 (VAR_4));

        return (VAR_4);
    }



    VAR_1.MaxTableCount = 1;
    VAR_1.CurrentTableCount = 0;
    VAR_1.Tables = VAR_2;

    return (VAR_0);
}
