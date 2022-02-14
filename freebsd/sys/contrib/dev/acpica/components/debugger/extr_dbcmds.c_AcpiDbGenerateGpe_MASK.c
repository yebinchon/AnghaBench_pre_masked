
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int ACPI_GPE_EVENT_INFO ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int *,int ) ;

void
FUNC_5 (
    char *VAR_0,
    char *VAR_1)
{
    UINT32 VAR_2 = 0;
    UINT32 VAR_3;
    ACPI_GPE_EVENT_INFO *VAR_4;


    VAR_3 = FUNC_4 (VAR_0, ((void*)0), 0);





    if (VAR_1)
    {
        VAR_2 = FUNC_4 (VAR_1, ((void*)0), 0);
        if (VAR_2 == 1)
        {
            VAR_2 = 0;
        }
    }

    VAR_4 = FUNC_1 (
        FUNC_0 (VAR_2), VAR_3);
    if (!VAR_4)
    {
        FUNC_3 ("Invalid GPE\n");
        return;
    }

    (void) FUNC_2 (((void*)0), VAR_4, VAR_3);
}
