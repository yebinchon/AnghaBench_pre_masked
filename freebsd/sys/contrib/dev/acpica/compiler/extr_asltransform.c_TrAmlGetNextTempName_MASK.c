
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int *) ;
 char* FUNC_1 (int) ;

__attribute__((used)) static char *
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_2,
    UINT8 *VAR_3)
{
    char *VAR_4;


    if (*VAR_3 >= (10 + 26))
    {


        FUNC_0 (VAR_0, VAR_1, VAR_2, ((void*)0));
        return (((void*)0));
    }

    VAR_4 = FUNC_1 (5);

    if (*VAR_3 < 10)
    {
        VAR_4[3] = (char) (*VAR_3 + '0');
    }
    else
    {
        VAR_4[3] = (char) (*VAR_3 + ('A' - 10));
    }

    (*VAR_3)++;



    VAR_4[0] = '_';
    VAR_4[1] = 'T';
    VAR_4[2] = '_';

    return (VAR_4);
}
