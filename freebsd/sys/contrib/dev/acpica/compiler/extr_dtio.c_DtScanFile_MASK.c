
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int FILE ;
typedef int DT_FIELD ;
typedef scalar_t__ ACPI_STATUS ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int * (*) (int *)) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,int ) ;

DT_FIELD *
FUNC_7 (
    FILE *VAR_10)
{
    ACPI_STATUS VAR_11;
    UINT32 VAR_12;


    FUNC_1 (FUNC_7);




    VAR_8 = FUNC_3 (VAR_10);
    if (VAR_8 == VAR_1)
    {
        FUNC_2 ();
    }

    VAR_5 = 0;
    VAR_6 = 0;
    VAR_9 = 0;



    while ((VAR_12 = FUNC_5 (VAR_10, 0)) != VAR_3)
    {
        FUNC_0 ((VAR_0, "Line %2.2u/%4.4X - %s",
            VAR_5, VAR_12, VAR_4));

        VAR_11 = FUNC_6 (VAR_4,
            VAR_5, VAR_12);
        if (VAR_11 == VAR_2)
        {
            break;
        }
    }



    FUNC_4 (VAR_7);
    return (VAR_7);
}
