
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DT_SUBTABLE ;
typedef int DT_FIELD ;
typedef int ACPI_STATUS ;
typedef int ACPI_DMTABLE_INFO ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int **,int *,int **) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 () ;

ACPI_STATUS
FUNC_4 (
    void **VAR_1,
    ACPI_DMTABLE_INFO *VAR_2,
    ACPI_DMTABLE_INFO *VAR_3)
{
    ACPI_STATUS VAR_4;
    DT_SUBTABLE *VAR_5;
    DT_SUBTABLE *VAR_6;
    DT_FIELD **VAR_7 = (DT_FIELD **) VAR_1;


    VAR_4 = FUNC_1 (VAR_7, VAR_2, &VAR_5);
    if (FUNC_0 (VAR_4))
    {
        return (VAR_4);
    }

    VAR_6 = FUNC_3 ();
    FUNC_2 (VAR_6, VAR_5);

    while (*VAR_7)
    {
        VAR_4 = FUNC_1 (VAR_7, VAR_3, &VAR_5);
        if (FUNC_0 (VAR_4))
        {
            return (VAR_4);
        }

        FUNC_2 (VAR_6, VAR_5);
    }

    return (VAR_0);
}
