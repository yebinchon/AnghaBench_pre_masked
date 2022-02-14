
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_STATUS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ,int ,int *,char*,int *) ;
 scalar_t__ FUNC_4 (char*) ;

ACPI_STATUS
FUNC_5 (
    char *VAR_7)
{
    char VAR_8[5] = "____";
    char *VAR_9 = VAR_8;


    if (FUNC_4 (VAR_7) > VAR_1)
    {
        FUNC_1 ("Name must be no longer than 4 characters\n");
        return (VAR_5);
    }



    FUNC_2 (VAR_7);
    while (*VAR_7)
    {
        *VAR_9 = *VAR_7;
        VAR_9++;
        VAR_7++;
    }



    (void) FUNC_3 (VAR_3, VAR_2,
        VAR_4, VAR_6, ((void*)0), VAR_8, ((void*)0));

    FUNC_0 (VAR_0);
    return (VAR_5);
}
