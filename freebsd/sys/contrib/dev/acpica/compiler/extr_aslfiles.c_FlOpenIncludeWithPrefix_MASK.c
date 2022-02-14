
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT32 ;
typedef int FILE ;
typedef int ACPI_PARSE_OBJECT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int *,char*) ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,char*) ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 char* FUNC_4 (char*,char*) ;
 int VAR_7 ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static FILE *
FUNC_7 (
    char *VAR_8,
    ACPI_PARSE_OBJECT *VAR_9,
    char *VAR_10)
{
    FILE *VAR_11;
    char *VAR_12;
    UINT32 VAR_13;




    VAR_12 = FUNC_4 (VAR_8, VAR_10);

    FUNC_2 (VAR_3, "Include: Opening file - \"%s\"\n\n",
        VAR_12);



    VAR_11 = FUNC_5 (VAR_12, "r");
    if (!VAR_11)
    {
        return (((void*)0));
    }
    VAR_5--;
    VAR_13 = VAR_5;

    while (FUNC_3 (VAR_11, VAR_6) != VAR_0)
    {
        if (VAR_4[0] == '#')
        {
            FUNC_0 (VAR_1, VAR_2,
                VAR_9, "use #include instead");
        }
    }

    VAR_5 = VAR_13;



    FUNC_6 (VAR_11, 0, VAR_7);



    FUNC_1 (VAR_11, VAR_12);
    return (VAR_11);
}
