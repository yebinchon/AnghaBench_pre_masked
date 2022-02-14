
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int (*) ()) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 scalar_t__* VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int VAR_24 ;
 void* VAR_25 ;
 int VAR_26 ;
 void* VAR_27 ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int ) ;

ACPI_STATUS
FUNC_10 (
    void)
{
    ACPI_STATUS VAR_28;


    FUNC_2 (FUNC_10);




    VAR_10 = ((void*)0);
    VAR_13 = ((void*)0);
    VAR_16 = VAR_25;

    VAR_12 = VAR_3;
    VAR_11 = VAR_4 | VAR_2;
    VAR_15 = VAR_0;

    VAR_14 = VAR_25;

    VAR_10 = FUNC_3 (VAR_1);
    if (!VAR_10)
    {
        FUNC_9 (VAR_6);
    }
    FUNC_8 (VAR_10, 0, VAR_1);



    VAR_17 [0] = VAR_8;
    VAR_17 [1] = 0;
    VAR_18 = VAR_23;



    VAR_19 = VAR_25;






    if (VAR_22 & VAR_24)
    {


        VAR_28 = FUNC_6 ();
        if (FUNC_1 (VAR_28))
        {
            FUNC_7 ("Could not get debugger mutex\n");
            FUNC_9 (VAR_28);
        }



        VAR_21 = VAR_25;
        VAR_28 = FUNC_4 (VAR_26,
            VAR_9, ((void*)0));
        if (FUNC_1 (VAR_28))
        {
            FUNC_0 ((VAR_5, VAR_28,
                "Could not start debugger thread"));
            VAR_21 = VAR_27;
            FUNC_9 (VAR_28);
        }
    }
    else
    {
        VAR_20 = FUNC_5 ();
    }

    FUNC_9 (VAR_7);
}
