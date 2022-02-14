
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef size_t ACPI_OBJECT_TYPE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_2 (size_t) ;
 int VAR_4 ;
 int FUNC_3 (int) ;

UINT32
FUNC_4 (
    ACPI_OBJECT_TYPE VAR_5)
{
    FUNC_0 (VAR_4);


    if (!FUNC_2 (VAR_5))
    {


        FUNC_1 ((VAR_2, "Invalid Object Type 0x%X", VAR_5));
        FUNC_3 (VAR_1);
    }

    FUNC_3 (VAR_3[VAR_5] & VAR_0);
}
