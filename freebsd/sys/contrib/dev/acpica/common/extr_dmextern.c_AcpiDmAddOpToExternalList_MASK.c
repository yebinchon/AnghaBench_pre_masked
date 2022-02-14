
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
typedef int ACPI_STATUS ;
typedef int ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char VAR_3 ;
 int FUNC_3 (char*,char*,char,int ,int) ;
 char* FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,char*,int *,char**) ;
 int FUNC_6 (char*,char**) ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_7 (
    ACPI_PARSE_OBJECT *VAR_6,
    char *VAR_7,
    UINT8 VAR_8,
    UINT32 VAR_9,
    UINT16 VAR_10)
{
    char *VAR_11;
    char *VAR_12 = VAR_7;
    char *VAR_13;
    ACPI_STATUS VAR_14;


    FUNC_2 (VAR_4);


    if (!VAR_7)
    {
        VAR_5;
    }



    if ((*VAR_7 == VAR_3) && (VAR_7[1]))
    {
        VAR_7++;
    }



    VAR_14 = FUNC_5 (VAR_1, VAR_7,
        ((void*)0), &VAR_11);
    if (FUNC_0 (VAR_14))
    {
        VAR_5;
    }





    if (*VAR_7 == (UINT8) VAR_2)
    {
        VAR_13 = FUNC_4 (VAR_6, VAR_11);



        FUNC_1 (VAR_11);
        VAR_11 = VAR_13;
        if (!VAR_13)
        {
            VAR_5;
        }



        VAR_10 |= VAR_0;
        VAR_14 = FUNC_6 (VAR_11, &VAR_12);
        if (FUNC_0 (VAR_14))
        {
            FUNC_1 (VAR_11);
            VAR_5;
        }
    }



    VAR_14 = FUNC_3 (VAR_11, VAR_12,
        VAR_8, VAR_9, VAR_10);
    if (FUNC_0 (VAR_14))
    {
        FUNC_1 (VAR_11);
        if (VAR_10 & VAR_0)
        {
            FUNC_1 (VAR_12);
        }
    }

    VAR_5;
}
