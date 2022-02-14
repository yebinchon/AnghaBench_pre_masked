
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef int ACPI_PARSE_OBJECT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_1 (int ,int *,int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *,int ,int ,int ,int *) ;

ACPI_STATUS
FUNC_4 (
    ACPI_PARSE_OBJECT *VAR_10)
{
    ACPI_WALK_STATE *VAR_11;




    VAR_11 = FUNC_1 (0, ((void*)0), ((void*)0), ((void*)0));
    if (!VAR_11)
    {
        return (VAR_3);
    }



    FUNC_3 (VAR_10, VAR_5, VAR_8,
        VAR_7, VAR_11);



    FUNC_3 (VAR_10, VAR_5, VAR_9,
        VAR_7, VAR_11);



    if (VAR_6 & VAR_0)
    {
        FUNC_2 (VAR_1, VAR_2);
    }

    FUNC_0 (VAR_11);
    return (VAR_4);
}
