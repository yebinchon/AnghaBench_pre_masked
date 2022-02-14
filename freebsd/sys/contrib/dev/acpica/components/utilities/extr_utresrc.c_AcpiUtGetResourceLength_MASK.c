
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT16 ;
typedef scalar_t__ ACPI_RS_LENGTH ;


 int FUNC_0 (int ,void*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (void*) ;
 int FUNC_3 (scalar_t__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

UINT16
FUNC_4 (
    void *VAR_3)
{
    ACPI_RS_LENGTH VAR_4;


    FUNC_1 ();






    if (FUNC_2 (VAR_3) & VAR_0)
    {


        FUNC_3 (&VAR_4, FUNC_0 (VAR_2, VAR_3, 1));

    }
    else
    {


        VAR_4 = (UINT16) (FUNC_2 (VAR_3) &
            VAR_1);
    }

    return (VAR_4);
}
