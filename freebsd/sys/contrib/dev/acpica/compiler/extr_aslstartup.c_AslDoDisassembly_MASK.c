
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Filename; } ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 () ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

ACPI_STATUS
FUNC_7 (
    void)
{
    ACPI_STATUS VAR_9;


    VAR_9 = FUNC_1 (4);
    if (FUNC_0 (VAR_9))
    {
        FUNC_4 ("Could not initialize ACPI Table Manager, %s\n",
            FUNC_3 (VAR_9));
        return (VAR_9);
    }



    VAR_3 = VAR_8;
    VAR_9 = FUNC_5 (VAR_7,
        VAR_5[VAR_2].Filename, VAR_6,
        &VAR_5[VAR_2].Filename);
    if (FUNC_0 (VAR_9))
    {
        return (VAR_9);
    }



    FUNC_2 (0);



    FUNC_6 ();





    if (VAR_4)
    {
        FUNC_4 ("\nCompiling \"%s\"\n",
            VAR_5[VAR_2].Filename);
        return (VAR_0);
    }

    return (VAR_1);
}
