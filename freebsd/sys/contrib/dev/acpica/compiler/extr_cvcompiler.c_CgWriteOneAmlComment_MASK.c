
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char UINT8 ;
typedef int ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*) ;

void
FUNC_2(
    ACPI_PARSE_OBJECT *VAR_1,
    char* VAR_2,
    UINT8 VAR_3)
{
    UINT8 VAR_4 = VAR_3;
    UINT8 VAR_5 = (UINT8) VAR_0;


    if (!VAR_2)
    {
        return;
    }

    FUNC_0 (VAR_1, &VAR_5, 1);
    FUNC_0 (VAR_1, &VAR_4, 1);



    FUNC_0 (VAR_1, VAR_2, FUNC_1 (VAR_2) + 1);
}
