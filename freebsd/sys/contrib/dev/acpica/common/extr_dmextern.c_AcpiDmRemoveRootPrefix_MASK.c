
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static ACPI_STATUS
FUNC_2 (
    char **VAR_3)
{
    char *VAR_4 = *VAR_3;


    if ((*VAR_4 == VAR_2) && (VAR_4[1]))
    {
        if (!FUNC_0(VAR_4, VAR_4+1, FUNC_1(VAR_4)))
        {
            return (VAR_0);
        }

        *VAR_3 = VAR_4;
    }

    return (VAR_1);
}
