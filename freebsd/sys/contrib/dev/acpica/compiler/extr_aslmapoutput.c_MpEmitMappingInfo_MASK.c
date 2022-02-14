
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void
FUNC_4 (
    void)
{



    if (!VAR_2)
    {
        return;
    }

    if (!VAR_1)
    {
        FUNC_0 (VAR_0,
            "\nNo GPIO devices found\n");
    }

    if (!VAR_3)
    {
        FUNC_0 (VAR_0,
            "\nNo Serial devices found (I2C/SPI/UART)\n");
    }

    if (!VAR_1 && !VAR_3)
    {
        return;
    }



    FUNC_0 (VAR_0, "\nResource Descriptor Connectivity Map\n");
    FUNC_0 (VAR_0, "------------------------------------\n");



    FUNC_2 ();
    FUNC_3 ();
    FUNC_1 ();



    VAR_3 = ((void*)0);
    VAR_1 = ((void*)0);
}
