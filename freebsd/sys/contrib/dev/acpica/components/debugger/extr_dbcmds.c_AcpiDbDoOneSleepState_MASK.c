
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT8 ;
typedef int ACPI_STATUS ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int ) ;
 int * VAR_2 ;
 int FUNC_5 (size_t,size_t*,size_t*) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (size_t) ;
 int FUNC_8 (char*,size_t,...) ;

__attribute__((used)) static void
FUNC_9 (
    UINT8 VAR_3)
{
    ACPI_STATUS VAR_4;
    UINT8 VAR_5;
    UINT8 VAR_6;




    if (VAR_3 > VAR_0)
    {
        FUNC_8 ("Sleep state %d out of range (%d max)\n",
            VAR_3, VAR_0);
        return;
    }

    FUNC_8 ("\n---- Invoking sleep state S%d (%s):\n",
        VAR_3, VAR_2[VAR_3]);



    VAR_4 = FUNC_5 (VAR_3, &VAR_5, &VAR_6);
    if (FUNC_1 (VAR_4))
    {
        FUNC_8 ("Could not evaluate [%s] method, %s\n",
            VAR_2[VAR_3],
            FUNC_4 (VAR_4));
        return;
    }

    FUNC_8 (
        "Register values for sleep state S%d: Sleep-A: %.2X, Sleep-B: %.2X\n",
        VAR_3, VAR_5, VAR_6);



    FUNC_8 ("**** Sleep: Prepare to sleep (S%d) ****\n",
        VAR_3);
    VAR_4 = FUNC_3 (VAR_3);
    if (FUNC_1 (VAR_4))
    {
        goto ErrorExit;
    }

    FUNC_8 ("**** Sleep: Going to sleep (S%d) ****\n",
        VAR_3);
    VAR_4 = FUNC_2 (VAR_3);
    if (FUNC_1 (VAR_4))
    {
        goto ErrorExit;
    }

    FUNC_8 ("**** Wake: Prepare to return from sleep (S%d) ****\n",
        VAR_3);
    VAR_4 = FUNC_7 (VAR_3);
    if (FUNC_1 (VAR_4))
    {
        goto ErrorExit;
    }

    FUNC_8 ("**** Wake: Return from sleep (S%d) ****\n",
        VAR_3);
    VAR_4 = FUNC_6 (VAR_3);
    if (FUNC_1 (VAR_4))
    {
        goto ErrorExit;
    }

    return;


ErrorExit:
    FUNC_0 ((VAR_1, VAR_4, "During invocation of sleep state S%d",
        VAR_3));
}
