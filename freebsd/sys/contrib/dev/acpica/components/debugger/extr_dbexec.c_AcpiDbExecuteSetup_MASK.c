
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* Name; int Flags; scalar_t__* Pathname; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_DB_METHOD_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_4 (char*,scalar_t__*) ;
 scalar_t__ FUNC_5 (scalar_t__*,int,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static ACPI_STATUS
FUNC_6 (
    ACPI_DB_METHOD_INFO *VAR_11)
{
    ACPI_STATUS VAR_12;


    FUNC_1 (VAR_8);




    VAR_11->Pathname[0] = 0;
    if ((VAR_11->Name[0] != '\\') &&
        (VAR_11->Name[0] != '/'))
    {
        if (FUNC_5 (VAR_11->Pathname, sizeof (VAR_11->Pathname),
            VAR_7))
        {
            VAR_12 = VAR_3;
            goto ErrorExit;
        }
    }

    if (FUNC_5 (VAR_11->Pathname, sizeof (VAR_11->Pathname),
        VAR_11->Name))
    {
        VAR_12 = VAR_3;
        goto ErrorExit;
    }

    FUNC_2 (VAR_11->Pathname);

    FUNC_3 (VAR_1);
    FUNC_4 ("Evaluating %s\n", VAR_11->Pathname);

    if (VAR_11->Flags & VAR_9)
    {
        VAR_6 = VAR_10;
        FUNC_3 (VAR_0);
    }

    else
    {


        FUNC_3 (VAR_2);
    }

    return (VAR_5);

ErrorExit:

    FUNC_0 ((VAR_4, VAR_12, "During setup for method execution"));
    return (VAR_12);
}
