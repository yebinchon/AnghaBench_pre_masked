
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,int *,int *,int *) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;

ACPI_STATUS
FUNC_3 (
    void)
{
    ACPI_WALK_STATE *VAR_6;






    VAR_6 = FUNC_1 (0, ((void*)0), ((void*)0), ((void*)0));
    if (!VAR_6)
    {
        return (VAR_0);
    }



    FUNC_2 (VAR_3, VAR_2,
        VAR_4, VAR_5, VAR_6);

    FUNC_0 (VAR_6);
    return (VAR_1);
}
