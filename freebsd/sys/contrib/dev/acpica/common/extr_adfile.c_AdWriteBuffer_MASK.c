
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT32 ;
typedef int INT32 ;
typedef int FILE ;
typedef scalar_t__ ACPI_SIZE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,int,size_t,int *) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static INT32
FUNC_4 (
    char *VAR_0,
    char *VAR_1,
    UINT32 VAR_2)
{
    FILE *VAR_3;
    ACPI_SIZE VAR_4;


    VAR_3 = FUNC_1 (VAR_0, "wb");
    if (!VAR_3)
    {
        FUNC_3 ("Could not open file %s\n", VAR_0);
        return (-1);
    }

    VAR_4 = FUNC_2 (VAR_1, 1, (size_t) VAR_2, VAR_3);
    if (VAR_4 != VAR_2)
    {
        FUNC_3 ("Could not write to file %s\n", VAR_0);
    }

    FUNC_0 (VAR_3);
    return ((INT32) VAR_4);
}
