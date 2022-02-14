
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;
typedef int DT_FIELD ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int *) ;
 char* VAR_3 ;
 int FUNC_3 (int ,int ,int *,char*) ;
 char* FUNC_4 (char*,int*) ;
 int FUNC_5 (char*,char*,int,int) ;

UINT32
FUNC_6 (
    UINT8 *VAR_4,
    char *VAR_5,
    DT_FIELD *VAR_6,
    UINT32 VAR_7)
{
    char *VAR_8;
    ACPI_STATUS VAR_9;
    UINT32 VAR_10;
    UINT32 VAR_11;




    VAR_5 = FUNC_4 (VAR_5, &VAR_10);
    VAR_8 = VAR_5;
    if (VAR_10 != VAR_7)
    {
        FUNC_5(VAR_3,
            "Found %u values, must match expected count: %u",
            VAR_10, VAR_7);
        FUNC_3 (VAR_0, VAR_2, VAR_6, VAR_3);
        goto Exit;
    }



    for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++, VAR_8 += 3)
    {


        if (*(&VAR_8[2]) &&
           (*(&VAR_8[2]) != ' '))
        {
            FUNC_3 (VAR_0, VAR_1, VAR_6, VAR_8);
            goto Exit;
        }



        VAR_9 = FUNC_2 (VAR_8, &VAR_4[VAR_11]);
        if (FUNC_0 (VAR_9))
        {
            FUNC_3 (VAR_0, VAR_1, VAR_6, VAR_8);
            goto Exit;
        }
    }

Exit:
    FUNC_1 (VAR_5);
    return (VAR_7 - VAR_10);
}
